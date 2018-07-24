(function($) {
    Drupal.behaviors.ef_lists = {
        'attach': function(context) {
            // Bind click event to all buttons
            $('button[name*="button_"]').each(function(index,element){
                var aux = element.name.replace("button_","");
                aux = aux.split("_");
                // Perform an AJAX request to update assign to user value
                $(element).bind('click', function(){
                    var uid = element.previousElementSibling.selectedOptions[0].value;
                    $(element.previousElementSibling).removeClass('modified');
                    $(element.previousElementSibling).addClass('saved');
                    $.post('/save/assign_to_user/' + aux[0] + '/' + aux[1] + '/' + uid);
                });   
            });
        }
    }
})(jQuery);

(function($) {
    $(document).ready(function(){
        // Manage chosen option via change function as it's the only one accepted by Chrome
        $("table select").change(function(){
            // Add modified class every time value is changed and removed saved class.
            $('select[name=' + this.name + ']').removeClass('saved');
            $('select[name=' + this.name + ']').addClass('modified');
        });
    });
})(jQuery)
