// First time only
(function ($) {
  $(document).ready(function(){

    $('#edit_field_ef_type_of_restructuring_und_chosen .chosen-choices').bind('click', function(){
      var $children = $('#edit_field_ef_type_of_restructuring_und_chosen .chosen-choices').contents();

      if($children.length == 2){

        $('#edit_field_ef_type_of_restructuring_und_chosen .chosen-drop').addClass('done');
        $('#edit_field_ef_type_of_restructuring_und_chosen .chosen-drop').hide();

      }else{
        if($('#edit_field_ef_type_of_restructuring_und_chosen .chosen-drop').hasClass('done')){

          $('#edit_field_ef_type_of_restructuring_und_chosen .chosen-drop').show();
        }
      }

    });
  });
})(jQuery);

