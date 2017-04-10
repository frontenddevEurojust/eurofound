(function($) 
{
    $(document).ready(function()
    {
        $('select#edit-vocabularies').change(function()
        {
            if(this.value > 0)
            {
                $('div.hidden').removeClass('hidden');
            }
        });
    });
})(jQuery)