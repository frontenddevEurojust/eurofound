<?php

namespace Drupal\ef_pleco_migrate\Migration;

class Migration_PlecoTermGeneric extends \Migration {

  public function __construct(array $arguments = []) {
    parent::__construct($arguments);

    $migration_machine_name = $arguments['machine_name'];
    $vocabulary_name = $migration_machine_name;



    $this->setDestinationTaxonomy('icecat_suppliers', 'supplier_id');

    $this->addFieldMapping('name', 'name');
    $this->addFieldMapping('description', NULL);
    $this->noTermParentMapping();

    $this->addFieldMapping('field_icecat_image_remote', 'thumb_pic');
    $this->addFieldMapping('field_icecat_is_sponsor', 'is_sponsor');

    $this->addFieldMapping('field_icecat_image_remote:file_size', NULL);
    $this->addFieldMapping('field_icecat_image_remote:width', NULL)->defaultValue(75);
    $this->addFieldMapping('field_icecat_image_remote:height', NULL)->defaultValue(75);

  }
}
