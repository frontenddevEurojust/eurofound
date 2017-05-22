(function ($) {
  $(document).ready(function(){
  	
 	// Add popup datepicker to publication date field
	$('#edit-field-ef-publication-date-en-0-value-date').datepicker( 
	{
	    changeMonth: true,
	    changeYear: true,
	    showButtonPanel: true,
	    dateFormat: 'mm/yy',
	    beforeShow: function(input, inst){
	    	$('#ui-datepicker-div').addClass('publication-date-popup');
	    },
	    onClose: function(dateText, inst) { 
	        $(this).datepicker('setDate', new Date(inst.selectedYear, inst.selectedMonth, 1));
	    }
	});

  });
})(jQuery);