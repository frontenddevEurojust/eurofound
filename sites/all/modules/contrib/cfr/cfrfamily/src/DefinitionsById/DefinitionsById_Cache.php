<?php

namespace Drupal\cfrfamily\DefinitionsById;



class DefinitionsById_Cache implements DefinitionsByIdInterface {

  const CACHE_BIN = 'cache';

  /**
   * @var \Drupal\cfrfamily\DefinitionsById\DefinitionsByIdInterface
   */
  private $decorated;

  /**
   * @var string
   */
  private $cid;

  /**
   * @param \Drupal\cfrfamily\DefinitionsById\DefinitionsByIdInterface $decorated
   * @param string $cid
   *   Cache id.
   */
  public function __construct(DefinitionsByIdInterface $decorated, $cid) {
    $this->decorated = $decorated;
    $this->cid = $cid;
  }

  /**
   * @param string $id
   *
   * @return array|null
   */
  public function idGetDefinition($id) {
    $definitions = $this->getDefinitionsById();
    return isset($definitions[$id])
      ? $definitions[$id]
      : NULL;
  }

  /**
   * @return array[]
   */
  public function getDefinitionsById() {
    if ($cache = cache_get($this->cid, self::CACHE_BIN)) {
      return $cache->data;
    }
    $definitions = $this->decorated->getDefinitionsById();
    cache_set($this->cid, $definitions, self::CACHE_BIN);
    return $definitions;
  }
}
