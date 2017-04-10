function getURLParameter(name) {
    return decodeURI(
        (RegExp(name + '=' + '(.+?)(&|$)').exec(location.search)||[,null])[1]
    );
}

  function ucfirst(str, force){
	  str=force ? str.toLowerCase() : str;
	  return str.replace(/(\b)([a-zA-Z])/,
	           function(firstLetter){
	              return firstLetter.toUpperCase();
	  			}
	  );
  }

//----------------------------

jQuery(document).ready(function($) {

	function generalFixes(){			
			addLevelClassToFilter();
			delayedFixes();
	}

	function delayedFixes(){
		convertSectorTitlePartToSpan();
		addClassToCheckedInputsParentElement();
	}
 



	function addClassToCheckedInputsParentElement(){
		$.each($(".view-filters input:checked") , function() {
				var $this = $(this);
				$this.parent().addClass("checked");
		});
	}
 
  	//Timeline related code // TODO add it only for the timelines pages (2)
	function addLevelClassToFilter(){
		$levelFilter = $("#edit-field-cwb-level-tid-selective .option");
		$.each($levelFilter, function() {
			var $this = $(this);
			//$this.addClass($this.text().replace('-','').trim());
			$this.addClass($.trim($this.text().replace('-','')));
		});
	}

	function convertSectorTitlePartToSpan(){
		//.slider-item a
		$.each($(".flag-content h3") , function() {
			var $this = $(this);
			if($this.find('span').length == 0){
				var thisText = $this.text();
				$this.html(partToSpan(thisText, ":"));
			}
		});
	}
	
	function partToSpan(string, separator){
		var separatorIndex = string.indexOf(separator);
		if(separatorIndex == -1)
			return string;

		var part = string.substring(0, separatorIndex);
		var rest = string.substring(separatorIndex+1, string.length);
		
		return "<span class=\"timelineLevel " + part + "\">" + part +"</span>" + rest;
	}

	//Timeline related code // TODO add it only for the timelines pages (2)

	setTimeout(generalFixes, 300);
	setTimeout(delayedFixes, 3000);
	setTimeout(delayedFixes, 10000);

});