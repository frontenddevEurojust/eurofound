jQuery( document ).ready(function() {

    // Add span to title for decrease the width
    jQuery( "#page-title" ).wrapInner( "<span class='title-blog-presentation'></span>" );

    //Editing service links CSS
    jQuery( ".block-easy-social-easy-social-block-2 .easy_social-widget-facebook i" ).removeClass( "fa-facebook-square" );
    jQuery( ".block-easy-social-easy-social-block-2 .easy_social-widget-facebook i" ).addClass( "fa-facebook" );

    jQuery( ".block-easy-social-easy-social-block-2 .easy_social-widget-twitter i.fa" ).removeClass( "fa-twitter-square" );
    jQuery( ".block-easy-social-easy-social-block-2 .easy_social-widget-twitter i.fa" ).addClass( "fa-twitter" );
    
    jQuery( ".block-easy-social-easy-social-block-2 .easy_social-widget-linkedin i" ).removeClass( "fa-linkedin-square" );
    jQuery( ".block-easy-social-easy-social-block-2 .easy_social-widget-linkedin i" ).addClass( "fa-linkedin" );
    
});
