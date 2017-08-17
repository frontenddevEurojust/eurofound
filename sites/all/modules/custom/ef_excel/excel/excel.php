
<?php

require_once 'Classes/PHPExcel.php';

$archivo = "ejemplo-excel.xlsx";
$inputFileType = PHPExcel_IOFactory::identify($archivo);
$objReader = PHPExcel_IOFactory::createReader($inputFileType);
$objPHPExcel = $objReader->load($archivo);

$sheet = $objPHPExcel->getSheet(0);
$highestRow = $sheet->getHighestRow();
$highestColumn = $sheet->getHighestColumn();

for ($row = 2; $row <= $highestRow; $row++){
echo $sheet->getCell("A".$row)->getValue()." - ";
echo "<br>";
}
	
 

?>
