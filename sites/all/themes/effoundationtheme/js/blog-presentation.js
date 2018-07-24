(function($) {
    $(document).ready(function(){
             // Add span to title for decrease the width
        $( "#page-title" ).wrapInner( "<span class='title-blog-presentation'></span>" );

        //Editing service links CSS
        $( ".block-easy-social-easy-social-block-2 .easy_social-widget-facebook i" ).removeClass( "fa-facebook-square" );
        $( ".block-easy-social-easy-social-block-2 .easy_social-widget-facebook i" ).addClass( "fa-facebook" );

        $( ".block-easy-social-easy-social-block-2 .easy_social-widget-twitter i.fa" ).removeClass( "fa-twitter-square" );
        $( ".block-easy-social-easy-social-block-2 .easy_social-widget-twitter i.fa" ).addClass( "fa-twitter" );
        
        $( ".block-easy-social-easy-social-block-2 .easy_social-widget-linkedin i" ).removeClass( "fa-linkedin-square" );
        $( ".block-easy-social-easy-social-block-2 .easy_social-widget-linkedin i" ).addClass( "fa-linkedin" );

        $(".fa-facebook").click(function(){
            $(".fa-facebook").toggleClass("active");
        });

        $(".fa-twitter").click(function(){
            $(".fa-twitter").toggleClass("active");
        });

        $(".fa-linkedin").click(function(){
            $(".fa-linkedin").toggleClass("active");
        });


        //Move the email ico above the Block block-easy-social
        $(".email-blog").appendTo(".easy_social_box");
    });
})(jQuery)

