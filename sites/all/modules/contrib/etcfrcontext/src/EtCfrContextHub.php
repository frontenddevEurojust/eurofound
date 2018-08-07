<?php

namespace Drupal\etcfrcontext;

use Drupal\cfrapi\Context\CfrContext;

class EtCfrContextHub implements EtCfrContextHubInterface {

  /**
   * @var \Drupal\cfrapi\Context\CfrContextInterface[]
   */
  private $contextsByEt = [];

  /**
   * @var \Drupal\cfrapi\Context\CfrContextInterface[]
   */
  private $contextsByEtBundle = [];

  /**
   * @param string $entityType
   *
   * @return \Drupal\cfrapi\Context\CfrContextInterface
   */
  public function etGetContext($entityType) {
    return array_key_exists($entityType, $this->contextsByEt)
      ? $this->contextsByEt[$entityType]
      : $this->contextsByEt[$entityType] = $this->etCreateContext($entityType);
  }

  /**
   * @param string $entityType
   * @param string $bundleName
   *
   * @return \Drupal\cfrapi\Context\CfrContextInterface
   */
  public function etBundleGetContext($entityType, $bundleName) {
    $key = $entityType . ':' . $bundleName;
    return array_key_exists($key, $this->contextsByEtBundle)
      ? $this->contextsByEtBundle[$key]
      : $this->contextsByEtBundle[$key] = $this->etBundleCreateContext($entityType, $bundleName);
  }

  /**
   * @param string $entityType
   *
   * @return \Drupal\cfrapi\Context\CfrContext
   */
  private function etCreateContext($entityType) {
    return CfrContext::create()
      ->paramNameSetValue('entityType', $entityType)
      ->paramNameSetValue('entity_type', $entityType);
  }

  /**
   * @param string $entityType
   * @param string $bundleName
   *
   * @return \Drupal\cfrapi\Context\CfrContext
   */
  private function etBundleCreateContext($entityType, $bundleName) {
    return $this->etCreateContext($entityType)
      ->paramNameSetValue('bundle', $bundleName)
      ->paramNameSetValue('bundle_name', $bundleName)
      ->paramNameSetValue('bundleName', $bundleName);
  }

}
