<?php
/**
 * @file
 * cwb_schema_content.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function cwb_schema_content_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Malta',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '00a5dbdf-7e63-4e08-8acd-3f5b6d53120c',
    'vocabulary_machine_name' => 'country',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'MT',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Collectively agreed pay (real, index) [CAPRI]',
    'description' => '',
    'format' => 'full_html',
    'weight' => 3,
    'uuid' => '028b180a-63d3-4777-82a7-57ca601e389c',
    'vocabulary_machine_name' => 'cwb_outcome_variables',
    'field_code_ameco' => array(),
    'field_source' => array(
      'und' => array(
        0 => array(
          'value' => 'Various national sources',
          'format' => NULL,
        ),
      ),
    ),
    'field_tabular_column_name' => array(
      'und' => array(
        0 => array(
          'value' => 'CAPRI',
          'format' => NULL,
        ),
      ),
    ),
    'field_type' => array(
      'und' => array(
        0 => array(
          'tid' => '686224a2-e6f6-48b9-9ebd-be8c80fc0bb9',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'tid' => '3d40cf21-a6ae-4f2e-a258-85610bf67db6',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Austria',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '0675def5-2423-475b-b204-3142bee21f55',
    'vocabulary_machine_name' => 'country',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'AT',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Labour productivity (nominal, % change to previous year) [LPNP]',
    'description' => '<p>GDP at current prices (national currency) per Employment, persons: all domestic industries (National accounts)</p>
',
    'format' => 'full_html',
    'weight' => 7,
    'uuid' => '0680c4c6-5fbb-4efa-902c-c9e01d96591c',
    'vocabulary_machine_name' => 'cwb_outcome_variables',
    'field_code_ameco' => array(
      'und' => array(
        0 => array(
          'value' => 'UVGD/NETD',
          'format' => NULL,
        ),
      ),
    ),
    'field_source' => array(
      'und' => array(
        0 => array(
          'value' => 'AMECO, own calculation Eurofound',
          'format' => NULL,
        ),
      ),
    ),
    'field_tabular_column_name' => array(
      'und' => array(
        0 => array(
          'value' => 'LPNP',
          'format' => NULL,
        ),
      ),
    ),
    'field_type' => array(
      'und' => array(
        0 => array(
          'tid' => '5f5c01d6-e7a1-42f9-9345-19da7a77b7cc',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'tid' => '644bcbe6-71e9-4ed4-8f96-163c9590379f',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Banking',
    'description' => '',
    'format' => 'full_html',
    'weight' => 4,
    'uuid' => '1b730d2d-4e39-47f4-abae-bec2a7585a77',
    'vocabulary_machine_name' => 'cwb_sector',
  );
  $terms[] = array(
    'name' => 'Metal',
    'description' => '',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => '1c8020a4-14e1-4d99-8144-2aa41f25bc67',
    'vocabulary_machine_name' => 'cwb_sector',
  );
  $terms[] = array(
    'name' => 'Spain',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '202d7ac0-af38-4eb4-bb29-5adb083f161f',
    'vocabulary_machine_name' => 'country',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'ES',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Public sector employees and apprentices',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '20e4ca4a-2859-4988-a1bf-a0d42b5f1989',
    'vocabulary_machine_name' => 'cwb_working_class',
  );
  $terms[] = array(
    'name' => 'Blue collars and parts of white collar workers',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '22dcfa96-79bc-427e-8c58-7bbe365901ae',
    'vocabulary_machine_name' => 'cwb_working_class',
  );
  $terms[] = array(
    'name' => 'Slovenia',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '22dda616-9aa8-4906-93bf-13fa7dec3bd9',
    'vocabulary_machine_name' => 'country',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'SI',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Germany',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '262b3e85-a28b-4239-956e-df18e8d2f4eb',
    'vocabulary_machine_name' => 'country',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'DE',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'France',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '2ba5f7ca-87c0-42c2-8df0-31691300753e',
    'vocabulary_machine_name' => 'country',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'FR',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Romania',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '3490fa1a-ea6a-41a6-818d-e6faed4adebf',
    'vocabulary_machine_name' => 'country',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'RO',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Compensation per employee (nominal, % change to previous year) [CPENP]',
    'description' => '<p>Compensation of employees: total economy per Employees, persons; all domestic industries (National accounts)</p>
',
    'format' => 'full_html',
    'weight' => 9,
    'uuid' => '3b3660be-4f6e-4014-affa-be6aaf6a853c',
    'vocabulary_machine_name' => 'cwb_outcome_variables',
    'field_code_ameco' => array(
      'und' => array(
        0 => array(
          'value' => 'UWCD/NWTD',
          'format' => NULL,
        ),
      ),
    ),
    'field_source' => array(
      'und' => array(
        0 => array(
          'value' => 'AMECO, own calculation Eurofound',
          'format' => NULL,
        ),
      ),
    ),
    'field_tabular_column_name' => array(
      'und' => array(
        0 => array(
          'value' => 'CPENP',
          'format' => NULL,
        ),
      ),
    ),
    'field_type' => array(
      'und' => array(
        0 => array(
          'tid' => '5f5c01d6-e7a1-42f9-9345-19da7a77b7cc',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'tid' => '644bcbe6-71e9-4ed4-8f96-163c9590379f',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Collectively agreed pay (nominal, % change to previous year) [CAPNP]',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '3c8eb38f-d737-4e5f-9059-e3bb0b504132',
    'vocabulary_machine_name' => 'cwb_outcome_variables',
    'field_code_ameco' => array(),
    'field_source' => array(
      'und' => array(
        0 => array(
          'value' => 'Various national sources',
          'format' => NULL,
        ),
      ),
    ),
    'field_tabular_column_name' => array(
      'und' => array(
        0 => array(
          'value' => 'CAPNP',
          'format' => NULL,
        ),
      ),
    ),
    'field_type' => array(
      'und' => array(
        0 => array(
          'tid' => '5f5c01d6-e7a1-42f9-9345-19da7a77b7cc',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'tid' => '644bcbe6-71e9-4ed4-8f96-163c9590379f',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Index',
    'description' => '',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => '3d40cf21-a6ae-4f2e-a258-85610bf67db6',
    'vocabulary_machine_name' => 'cwb_outcome_variables_units',
  );
  $terms[] = array(
    'name' => 'Portugal',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '3e8e9c54-fff6-4c3e-ad4e-0674b0b467e4',
    'vocabulary_machine_name' => 'country',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'PT',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Denmark',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '44df485a-f89f-4972-ba3f-008630c28bdd',
    'vocabulary_machine_name' => 'country',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'DK',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Labour productivity (real, index) [LPRI]',
    'description' => '',
    'format' => 'full_html',
    'weight' => 14,
    'uuid' => '4c4ab683-58cc-4771-905c-ee083db6c70b',
    'vocabulary_machine_name' => 'cwb_outcome_variables',
    'field_code_ameco' => array(
      'und' => array(
        0 => array(
          'value' => 'OVGD/NETD',
          'format' => NULL,
        ),
      ),
    ),
    'field_source' => array(
      'und' => array(
        0 => array(
          'value' => 'AMECO, own calculation Eurofound',
          'format' => NULL,
        ),
      ),
    ),
    'field_tabular_column_name' => array(
      'und' => array(
        0 => array(
          'value' => 'LPRI',
          'format' => NULL,
        ),
      ),
    ),
    'field_type' => array(
      'und' => array(
        0 => array(
          'tid' => '686224a2-e6f6-48b9-9ebd-be8c80fc0bb9',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'tid' => '3d40cf21-a6ae-4f2e-a258-85610bf67db6',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Inflation Rate',
    'description' => '<p>Harmonised consumer price index (All-items)</p>
',
    'format' => 'full_html',
    'weight' => 4,
    'uuid' => '4eb5f41f-eb81-40f3-980b-17d4f906f9cb',
    'vocabulary_machine_name' => 'cwb_outcome_variables',
    'field_code_ameco' => array(
      'und' => array(
        0 => array(
          'value' => 'ZCIP',
          'format' => NULL,
        ),
      ),
    ),
    'field_source' => array(
      'und' => array(
        0 => array(
          'value' => 'AMECO',
          'format' => NULL,
        ),
      ),
    ),
    'field_tabular_column_name' => array(
      'und' => array(
        0 => array(
          'value' => 'InflationRate',
          'format' => NULL,
        ),
      ),
    ),
    'field_type' => array(),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'tid' => '644bcbe6-71e9-4ed4-8f96-163c9590379f',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Norway',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '4f340943-3ae6-43b9-83eb-c43d45fa5739',
    'vocabulary_machine_name' => 'country',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'NO',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Labour productivity (nominal, index) [LPNI]',
    'description' => '<p>GDP at current prices (national currency) per Employment, persons: all domestic industries (National accounts)</p>
',
    'format' => 'full_html',
    'weight' => 13,
    'uuid' => '4fdf321b-4fe5-4eab-b7de-591f8bba20e8',
    'vocabulary_machine_name' => 'cwb_outcome_variables',
    'field_code_ameco' => array(
      'und' => array(
        0 => array(
          'value' => 'UVGD/NETD',
          'format' => NULL,
        ),
      ),
    ),
    'field_source' => array(
      'und' => array(
        0 => array(
          'value' => 'AMECO, own calculation Eurofound',
          'format' => NULL,
        ),
      ),
    ),
    'field_tabular_column_name' => array(
      'und' => array(
        0 => array(
          'value' => 'LPNI',
          'format' => NULL,
        ),
      ),
    ),
    'field_type' => array(
      'und' => array(
        0 => array(
          'tid' => '5f5c01d6-e7a1-42f9-9345-19da7a77b7cc',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'tid' => '3d40cf21-a6ae-4f2e-a258-85610bf67db6',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Labour costs (real, index) [LCRI]',
    'description' => '<p>Compensation per employee in relation to nominal labour productivity</p>
',
    'format' => 'full_html',
    'weight' => 12,
    'uuid' => '509e2437-ff71-47ee-86a5-7cbfd3a44f5f',
    'vocabulary_machine_name' => 'cwb_outcome_variables',
    'field_code_ameco' => array(
      'und' => array(
        0 => array(
          'value' => 'UWCD/NWTD/UVGD/NETD',
          'format' => NULL,
        ),
      ),
    ),
    'field_source' => array(
      'und' => array(
        0 => array(
          'value' => 'AMECO, own calculation Eurofound',
          'format' => NULL,
        ),
      ),
    ),
    'field_tabular_column_name' => array(
      'und' => array(
        0 => array(
          'value' => 'LCRI',
          'format' => NULL,
        ),
      ),
    ),
    'field_type' => array(
      'und' => array(
        0 => array(
          'tid' => '686224a2-e6f6-48b9-9ebd-be8c80fc0bb9',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'tid' => '3d40cf21-a6ae-4f2e-a258-85610bf67db6',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Czech Republic',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '53b7aff3-7370-499d-b308-a913c87b160b',
    'vocabulary_machine_name' => 'country',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'CZ',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'White collar and apprentices',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '5449ce07-c95f-4efe-a49a-64662460103d',
    'vocabulary_machine_name' => 'cwb_working_class',
  );
  $terms[] = array(
    'name' => 'Luxembourg',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '550a1d48-c6f5-48b3-8e52-e40f2f77e523',
    'vocabulary_machine_name' => 'country',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'LU',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Clerical/Executive',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '5687eae9-be18-46e7-a152-6b9a7e3c417d',
    'vocabulary_machine_name' => 'cwb_working_class',
  );
  $terms[] = array(
    'name' => 'Poland',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '56e9038a-a251-49a5-8d92-9bbe7d92d4f3',
    'vocabulary_machine_name' => 'country',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'PL',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Nominal',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '5f5c01d6-e7a1-42f9-9345-19da7a77b7cc',
    'vocabulary_machine_name' => 'cwb_variables_type',
  );
  $terms[] = array(
    'name' => 'Local government',
    'description' => '',
    'format' => 'full_html',
    'weight' => 6,
    'uuid' => '618f44c0-911f-4136-98c2-36eff9caeecd',
    'vocabulary_machine_name' => 'cwb_sector',
  );
  $terms[] = array(
    'name' => '% change to previous year',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '644bcbe6-71e9-4ed4-8f96-163c9590379f',
    'vocabulary_machine_name' => 'cwb_outcome_variables_units',
  );
  $terms[] = array(
    'name' => 'Total economy',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '673019d0-b23f-4d5d-b98f-dca317a983a3',
    'vocabulary_machine_name' => 'cwb_sector',
  );
  $terms[] = array(
    'name' => 'Real',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '686224a2-e6f6-48b9-9ebd-be8c80fc0bb9',
    'vocabulary_machine_name' => 'cwb_variables_type',
  );
  $terms[] = array(
    'name' => 'Netherlands',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '6f1728e3-1e23-4c25-a513-3211c864661d',
    'vocabulary_machine_name' => 'country',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'NL',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Labour costs (real, % change to previous year) [LCRP]',
    'description' => '<p>Compensation per employee in relation to nominal labour productivity</p>
',
    'format' => 'full_html',
    'weight' => 6,
    'uuid' => '77069127-31be-4495-b87e-d08289123326',
    'vocabulary_machine_name' => 'cwb_outcome_variables',
    'field_code_ameco' => array(
      'und' => array(
        0 => array(
          'value' => 'UWCD/NWTD/UVGD/NETD',
          'format' => NULL,
        ),
      ),
    ),
    'field_source' => array(
      'und' => array(
        0 => array(
          'value' => 'AMECO, own calculation Eurofound',
          'format' => NULL,
        ),
      ),
    ),
    'field_tabular_column_name' => array(
      'und' => array(
        0 => array(
          'value' => 'LCRP',
          'format' => NULL,
        ),
      ),
    ),
    'field_type' => array(
      'und' => array(
        0 => array(
          'tid' => '686224a2-e6f6-48b9-9ebd-be8c80fc0bb9',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'tid' => '644bcbe6-71e9-4ed4-8f96-163c9590379f',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Civil service',
    'description' => '',
    'format' => 'full_html',
    'weight' => 5,
    'uuid' => '7ba20506-30e5-4862-b096-df26d8a602ae',
    'vocabulary_machine_name' => 'cwb_sector',
  );
  $terms[] = array(
    'name' => 'Collectively agreed pay (nominal, index) [CAPNI]',
    'description' => '',
    'format' => 'full_html',
    'weight' => 2,
    'uuid' => '7e7fb70a-0d06-439b-8fe1-539fa3ef1a24',
    'vocabulary_machine_name' => 'cwb_outcome_variables',
    'field_code_ameco' => array(),
    'field_source' => array(
      'und' => array(
        0 => array(
          'value' => 'various national sources',
          'format' => NULL,
        ),
      ),
    ),
    'field_tabular_column_name' => array(
      'und' => array(
        0 => array(
          'value' => 'CAPNI',
          'format' => NULL,
        ),
      ),
    ),
    'field_type' => array(
      'und' => array(
        0 => array(
          'tid' => '5f5c01d6-e7a1-42f9-9345-19da7a77b7cc',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'tid' => '3d40cf21-a6ae-4f2e-a258-85610bf67db6',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Labour productivity (real, % change to previous year) [LPRP]',
    'description' => '<p>Gross domestic product at 2005 market prices (national currency) per Employment, persons: all domestic industries (National accounts)</p>
',
    'format' => 'full_html',
    'weight' => 8,
    'uuid' => '8c3500f3-b433-4172-aa71-ddb4daa99274',
    'vocabulary_machine_name' => 'cwb_outcome_variables',
    'field_code_ameco' => array(
      'und' => array(
        0 => array(
          'value' => 'OVGD/NETD',
          'format' => NULL,
        ),
      ),
    ),
    'field_source' => array(
      'und' => array(
        0 => array(
          'value' => 'AMECO, own calculation Eurofound',
          'format' => NULL,
        ),
      ),
    ),
    'field_tabular_column_name' => array(
      'und' => array(
        0 => array(
          'value' => 'LPRP',
          'format' => NULL,
        ),
      ),
    ),
    'field_type' => array(
      'und' => array(
        0 => array(
          'tid' => '686224a2-e6f6-48b9-9ebd-be8c80fc0bb9',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'tid' => '644bcbe6-71e9-4ed4-8f96-163c9590379f',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Labour costs (nominal, % change to previous year) [LCNP]',
    'description' => '<p>Compensation per employee in relation to real labour productivity</p>
',
    'format' => 'full_html',
    'weight' => 5,
    'uuid' => '8cdd2d79-8602-480c-a155-34bf11ee1ad1',
    'vocabulary_machine_name' => 'cwb_outcome_variables',
    'field_code_ameco' => array(),
    'field_source' => array(
      'und' => array(
        0 => array(
          'value' => 'AMECO, own calculation Eurofound',
          'format' => NULL,
        ),
      ),
    ),
    'field_tabular_column_name' => array(
      'und' => array(
        0 => array(
          'value' => 'LCNP',
          'format' => NULL,
        ),
      ),
    ),
    'field_type' => array(
      'und' => array(
        0 => array(
          'tid' => '5f5c01d6-e7a1-42f9-9345-19da7a77b7cc',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'tid' => '644bcbe6-71e9-4ed4-8f96-163c9590379f',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Skilled tradesman',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '8e14a1cc-bd5a-4d04-ae37-a703971bda42',
    'vocabulary_machine_name' => 'cwb_working_class',
  );
  $terms[] = array(
    'name' => 'Labour costs (nominal, index) [LCNI]',
    'description' => '<p>Compensation per employee in relation to real labour productivity</p>
',
    'format' => 'full_html',
    'weight' => 11,
    'uuid' => '8e67a47a-5552-4089-9cff-c12fd1c1c61a',
    'vocabulary_machine_name' => 'cwb_outcome_variables',
    'field_code_ameco' => array(),
    'field_source' => array(
      'und' => array(
        0 => array(
          'value' => 'AMECO, own calculation Eurofound',
          'format' => NULL,
        ),
      ),
    ),
    'field_tabular_column_name' => array(
      'und' => array(
        0 => array(
          'value' => 'LCNI',
          'format' => NULL,
        ),
      ),
    ),
    'field_type' => array(
      'und' => array(
        0 => array(
          'tid' => '5f5c01d6-e7a1-42f9-9345-19da7a77b7cc',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'tid' => '3d40cf21-a6ae-4f2e-a258-85610bf67db6',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Greece',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '919b0d19-3067-439a-ae0e-436a8ae52740',
    'vocabulary_machine_name' => 'country',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'EL',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Croatia',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '99261f2b-8a11-4f08-a959-bef0a9bd9fab',
    'vocabulary_machine_name' => 'country',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'HR',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Hungary',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '9e5e60af-86da-42bf-a2c6-111718ce066b',
    'vocabulary_machine_name' => 'country',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'HU',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Chemicals',
    'description' => '',
    'format' => 'full_html',
    'weight' => 2,
    'uuid' => '9fc04f1a-f6ac-4b55-9ab6-0239db77caec',
    'vocabulary_machine_name' => 'cwb_sector',
  );
  $terms[] = array(
    'name' => 'Blue collar and parts of white collar',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'a60a69b4-6f8b-423d-bf8f-68978d852076',
    'vocabulary_machine_name' => 'cwb_working_class',
  );
  $terms[] = array(
    'name' => 'All',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'acac9547-ad7d-4952-bfe0-794169ef27b3',
    'vocabulary_machine_name' => 'cwb_working_class',
  );
  $terms[] = array(
    'name' => 'Sweden',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'b946d5fa-e2e1-461b-af69-ebba093b0acc',
    'vocabulary_machine_name' => 'country',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'SE',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Estonia',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'c7eed3e1-4902-43b2-9afa-962a060bcbe2',
    'vocabulary_machine_name' => 'country',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'EE',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Ireland',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'ced164d2-6ab9-418e-8f78-1616f3d19819',
    'vocabulary_machine_name' => 'country',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'IE',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Labourer',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'cf69dd66-28ca-4671-8b9d-13930a6ecd9c',
    'vocabulary_machine_name' => 'cwb_working_class',
  );
  $terms[] = array(
    'name' => 'Retail',
    'description' => '',
    'format' => 'full_html',
    'weight' => 3,
    'uuid' => 'd38d99ad-7482-488b-8d8b-687b9ebbc523',
    'vocabulary_machine_name' => 'cwb_sector',
  );
  $terms[] = array(
    'name' => 'White collar',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'd4794a4d-7669-4729-97b0-9c21743f13aa',
    'vocabulary_machine_name' => 'cwb_working_class',
  );
  $terms[] = array(
    'name' => 'Blue collar',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'd4bf47e6-d3f6-420f-ad9d-1d28a6b71059',
    'vocabulary_machine_name' => 'cwb_working_class',
  );
  $terms[] = array(
    'name' => 'Slovakia',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'd83fb288-daab-4942-aba7-56d3e5a3722d',
    'vocabulary_machine_name' => 'country',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'SK',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Italy',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'da4a8df5-b55e-46d7-8266-666f8ebcb5b9',
    'vocabulary_machine_name' => 'country',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'IT',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Compensation per employee (real, % change to previous year) [CPERP]',
    'description' => '<p>Compensation per employee (%), nominal, deflated by the consumer price index (ZCIP)</p>
',
    'format' => 'full_html',
    'weight' => 10,
    'uuid' => 'ddd08a44-eec7-4bfa-8ce2-d99cd4a8180d',
    'vocabulary_machine_name' => 'cwb_outcome_variables',
    'field_code_ameco' => array(
      'und' => array(
        0 => array(
          'value' => 'UWCD/NWTD and ZCIP',
          'format' => NULL,
        ),
      ),
    ),
    'field_source' => array(
      'und' => array(
        0 => array(
          'value' => 'AMECO, own calculation Eurofound',
          'format' => NULL,
        ),
      ),
    ),
    'field_tabular_column_name' => array(
      'und' => array(
        0 => array(
          'value' => 'CPERP',
          'format' => NULL,
        ),
      ),
    ),
    'field_type' => array(
      'und' => array(
        0 => array(
          'tid' => '686224a2-e6f6-48b9-9ebd-be8c80fc0bb9',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'tid' => '644bcbe6-71e9-4ed4-8f96-163c9590379f',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Decrees apply to civil servants (fonctionnaires) only',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'e0b3162e-8e86-4436-ba6d-f94bc03f0839',
    'vocabulary_machine_name' => 'cwb_working_class',
  );
  $terms[] = array(
    'name' => 'Lithuania',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'e49e629e-ad1c-4237-9a99-b3131d8146a4',
    'vocabulary_machine_name' => 'country',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'LT',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'United Kingdom',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'f2be87a2-836b-4272-a2d7-86f8e6a7f6e3',
    'vocabulary_machine_name' => 'country',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'UK',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Latvia',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'f52b8ba3-b7c6-4fb9-86f9-8796117a4d83',
    'vocabulary_machine_name' => 'country',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'LV',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Belgium',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'f6e367b0-4381-49ee-8936-a35828749172',
    'vocabulary_machine_name' => 'country',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'BE',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Cyprus',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'f7561c59-bca5-47ac-a9e8-f46d870b4193',
    'vocabulary_machine_name' => 'country',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'CY',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Bulgaria',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'f83a24ec-345e-4234-b495-870f80827082',
    'vocabulary_machine_name' => 'country',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'BG',
          'format' => NULL,
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Collectively agreed pay (real, % change to previous year) [CAPRP]',
    'description' => '',
    'format' => 'full_html',
    'weight' => 1,
    'uuid' => 'fa1f2128-fa42-44bc-a4a3-80afaa0457b4',
    'vocabulary_machine_name' => 'cwb_outcome_variables',
    'field_code_ameco' => array(),
    'field_source' => array(
      'und' => array(
        0 => array(
          'value' => 'various national sources, deflated by rate of inflation, own calculation Eurofound',
          'format' => NULL,
        ),
      ),
    ),
    'field_tabular_column_name' => array(
      'und' => array(
        0 => array(
          'value' => 'CAPRP',
          'format' => NULL,
        ),
      ),
    ),
    'field_type' => array(
      'und' => array(
        0 => array(
          'tid' => '686224a2-e6f6-48b9-9ebd-be8c80fc0bb9',
        ),
      ),
    ),
    'field_unit' => array(
      'und' => array(
        0 => array(
          'tid' => '644bcbe6-71e9-4ed4-8f96-163c9590379f',
        ),
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Finland',
    'description' => '',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'fa71d938-ef51-47b1-9dd9-ccf81193759f',
    'vocabulary_machine_name' => 'country',
    'field_code' => array(
      'und' => array(
        0 => array(
          'value' => 'FI',
          'format' => NULL,
        ),
      ),
    ),
  );
  return $terms;
}
