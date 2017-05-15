<?php 
/*
* Load PHPExcel library and initialize Excel file.
*/
function initialize_excel_file()
{
	//Load the Excel library
	$library = libraries_load('PHPExcel');
	//Create new PHPExcel object
	$objPHPExcel = new PHPExcel;
	//Set default font
	$objPHPExcel->getDefaultStyle()->getFont()->setName('Calibri');
	//Set default font size
	$objPHPExcel->getDefaultStyle()->getFont()->setSize(8);

	return $objPHPExcel;

}
/*
* Sets active Sheet in a PHP Excel object
*
* params: $objPHPExcel: PHP Excel object
*		  $index: integer to select Sheet
*/

function select_sheet($objPHPExcel, $index)
{
	if($index != 0)
	{
		//Create a new sheet 
		$objPHPExcel->createSheet($index);
		//Set it as active sheet
		$objPHPExcel->setActiveSheetIndex($index);
	}
	
	return $objPHPExcel;
}
/**
* Saves all the extracted data to an Excel file
*
* @params:  $objPHPExcel: PHPExcel object
*			$nodes_data: nodes array with data to be printed in the xls
*			$field_name: field affected by merging terms
*			$term_from: complete taxonomy term entity to be merged
*			$term_to: complete taxonomy term entity to merge into
*			$objWriter: PHP Excel writer object. Needed to save the excel file
*/
function _log_into_excel($objPHPExcel, $nodes_data, $field_name, $term_from, $term_to, $objWriter) 
{

	$objSheet = $objPHPExcel->getActiveSheet();
	//Set tab title
	
	$objSheet->setTitle($term_from->tid . " -> " . $term_to->tid);

	//Let's bold and size the header
	$objSheet->getStyle('A1:BZ1')->getFont()->setBold(true);

	$objPHPExcel->getActiveSheet()->setCellValue('A1', "List of nodes updated for " . $field_name ."(" . count($nodes_data) . ")");

	$objPHPExcel->getActiveSheet()->setCellValue('A2', $term_from->name . " -> " . $term_to->name);
	
	//And there goes all the content row by row
	$from_cell = 'A';
	$begin_row = 3;
	
	if(count($nodes_data))
	{
		
		foreach ($nodes_data as $key => $object) 
		{
			//Add all fields
			foreach ($object as $key => $field) 
			{

				$row[] = $field;
			}

			$cell = $from_cell . (string) $begin_row;
			$objPHPExcel->getActiveSheet()->fromArray($row, NULL, $cell);
			unset($row);
			$begin_row++;
		}

	}
	else
	{
		
		$row[] = "No nodes affected for this term";
		$cell = $from_cell . (string) $begin_row;
		$objPHPExcel->getActiveSheet()->fromArray($row, NULL, $cell);
	
	}

	$directory = 'public://ef_term_merge';

	$writable = file_prepare_directory($directory, $options = FILE_MODIFY_PERMISSIONS);
	
	if($writable)
	{
		//Set the directory to store the files
		$dir = file_stream_wrapper_get_instance_by_uri('public://ef_term_merge/')->realpath();

		//Name the files
		$filename = date('j-M-Y--H-i', time()) . '-merge-terms.xlsx';
		$path = "$dir/$filename";

		//Save the file
		$objWriter->save($path);
	}
	

	return $filename;
}