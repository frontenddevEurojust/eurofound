(function ($) {
  $(document).ready(function(){

  	// hide contract group (just the fieldset), the childrens (contract and assign to) are hidden by php
  	$('#node_ef_report_form_group_ef_request_assignee').css('display', 'none');

  	// disable the first select in deliverable kind hierarchical select
  	$('#edit-field-ef-deliverable-kind-und-hierarchical-select-selects-0').attr('disabled', 'disabled');

  	// deliverable date - description
  	$('.form-item.form-type-textfield.form-item-field-ef-report-delivery-date-und-0-value-date')
  		.append('<span class="proposal-warning">Please, enter the date when you will deliver the article.</span>');

  });
})(jQuery);