<?php
namespace Drupal\etcfrcontext;

interface EtCfrContextHubInterface {

  /**
   * @param string $entityType
   *
   * @return \Drupal\cfrapi\Context\CfrContextInterface
   */
  public function etGetContext($entityType);

  /**
   * @param string $entityType
   * @param string $bundleName
   *
   * @return \Drupal\cfrapi\Context\CfrContextInterface
   */
  public function etBundleGetContext($entityType, $bundleName);
}
