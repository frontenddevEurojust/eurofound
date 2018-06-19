/**
* EWORX S.A.
* @author kp//eworx.gr
* Template file observs the results of an elementsQuery and performs a fix once they exist
* override/implement generalFixes functions and set elementsQuery variable
*/

function getTableQuery(){ // override if ncesessary
	return ".tablefield"
}

function getClientDownloadPrependString(){ //tried filename:download.csv it ignores it
	return "data:text/csv;charset=utf-8,";
}

function getCSVDelimiter(){
	return "\t";
}


(function ($) {

	var elementsQuery = "#csvExport";

	//----------------------------------------
	var $elementsResults;
	var loaded = false;
	var trial = 0;
	var trialsMax = 300;
	var retryDelay = 300;

	function elementsExits(){
		trial++;
		$elementsResults = $(elementsQuery);
		if($elementsResults.length>0)
			return true;
		return false;
	}

	function initialize(){
		if(!loaded && trial < trialsMax){
			if(elementsExits()){
				generalFixes();
				loaded = true;
			}else
				setTimeout(initialize, retryDelay);
		}
	}

	setTimeout(initialize, 100);

	//----------------------------------------

	function generalFixes(){
		$elementsResults.click(function(){

			saveStringToCSVFile(escape(convertTableToCSVcontent()));
		});
	}

	function convertTableToCSVcontent(){
		var delimiter = getCSVDelimiter();

		$table = $(getTableQuery());
		$rows = $table.find("tr");

		var result = "";

		$rows.each(function(){
			$columns = $(this).children();

			var columnIndex = -1;
			$columns.each(function(){
				columnIndex++;
				if(columnIndex>0)
					result+= getCSVDelimiter();
				result+= $(this).text().trim();
			});

			result+="\n";

		});
		return result;
	}

	function saveStringToCSVFile(result) {
		data = decodeURI(result);
		var BOM = "\uFEFF";
		var csvContent = BOM + data;
		var blob = new Blob([data], { type: 'text/csv;charset=utf-8;' });

		//IE
    if (window.navigator.msSaveBlob) {
      navigator.msSaveBlob(blob, 'cwb_exported_data.xls');
	  }

    var dlink = document.getElementById('csvExport');
    dlink.download = 'cwb_exported_data.csv';
    dlink.href = window.URL.createObjectURL(blob);
    dlink.onclick = function(e) {
    // revokeObjectURL needs a delay to work properly
      var that = this;
      setTimeout(function() {
      	window.URL.revokeObjectURL(that.href);
    	}, 1500);
    };
	}
})(jQuery);
