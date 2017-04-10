// JavaScript Document


//cambiar menu y menu mvl y desplegar/plegar





      $(window).resize(function(){
		
         if (($(window).width() <= 800)){
              $("nav.menu").removeClass('menu').addClass('menuMvl');
			  $("nav.menuMvl #menu").hide();

         }
         else{
              $("nav.menuMvl").removeClass('menuMvl').addClass('menu');
			  $("nav.menu #menu").show();
			  
         }
      });



$(document).ready(function(){
	 // alert($(window).width()+"------"+$(window).height())
	    if (($(window).width() > 800) && ($(window).width() <= 1024) ){
              	$(".imagenCompleta").attr("src","images/eurofound_at_40_1024.jpg");
         }
         else{
             	$(".imagenCompleta").attr("src","images/eurofound_at_40.jpg");;
         }
		 


       if (($(window).width() <= 800)){
              $("nav.menu").removeClass('menu').addClass('menuMvl');
			//desplegar años
			$('h4.years').css('cursor','pointer');
			  $('h4.years').on('click', function(){
				$(this).next().toggle('');
				$(this).next().next().toggle('');
				
			

			});
			//leer mas testimonios
			$('a.leerMas').on('click', function(){
				if (($(".leer").is(":hidden"))) {
					$('.leer').show();
					$('a.leerMas').text('Close testimonies');
				}
				else {
					$('.leer').hide();
					$('a.leerMas').text('Read more testimonies');
						$('body,html').stop(true,true).animate({
						scrollTop: $('#section7').offset().top
						},1000);
					}
			});
			
         }
         else{
              $("nav.menuMvl").removeClass('menuMvl').addClass('menu');
         }
  });
  

	  
	  
$(document).ready(function(){
    $("#botonMenu").click(function(){
        $("nav.menuMvl #menu").slideToggle(800);
    });
});

//botom next page
//$(document).ready(function(){
//	$('a.siguiente').click(function() {		
//		$("#fullpage").moveTo(2);
//
//	});
//});


$(document).ready(function(){
	$('nav.menu #menu a').click(function() {
		$.initEuroFound();
	});
});


$.initEuroFound = function(){
	//$.initWork();
	$.resetBotones();
	//$('.msg').show();	
	
	$(".bannerDescription").animate({marginLeft:"0px"},0);
	$(".factsItem").animate({marginLeft:"0px"},0); 
	$(".containerPags1").animate({marginLeft:"0px"},0);
	
	$('div.slideMenu a.pag1').addClass('toActive');
	$('div.slideMenuFacts a.pag1').addClass('toActive');
	$.paginacionFacts(1);
	$('div.slideMenuTestimonies a.pag1').addClass('toActive');
	$.paginacionTestimonies(1);	
	$.paginacionRegulation(1);		

};


$(document).ready(function() {	
	$.initEuroFound();
});

// menu download pdf
$(document).ready(function() {	
//var pulsadoLang=false;
var pulsadoShare=false; 

		/*$('.download a').click(function () { 
		$(".share").removeClass('activoShare');
		pulsadoShare=false
		
			if(pulsadoLang==false){
			$(this).parent().addClass('activoDownload');
			pulsadoLang=true;
			}else{
			$(this).parent().removeClass('activoDownload');
			pulsadoLang=false; 
			};
		});*/
		
		$('div.share a').click(function () { 		
			if(pulsadoShare==false){
			$(this).parent().addClass('activoShare');
			pulsadoShare=true;
			}else{
			$(this).parent().removeClass('activoShare');
			pulsadoShare=false; 
			};
		}); 
		
		
});





$.paginacionTestimonies=function(valor){
	var totalTestimonies=2;
	$("div.slideMenuTestimonies .contador .total").html(totalTestimonies);
	$("div.slideMenuTestimonies .contador .actual").html(valor);
};
$.paginacionRegulation=function(valor){
	var totalRegulation=2;
	$("div.slideMenuRegulation .contador .total").html(totalRegulation);
	$("div.slideMenuRegulation .contador .actual").html(valor);
		
};
$.paginacionFacts=function(valor,totalfacts){
	$("div.slideMenuFacts .contador .total").html(totalfacts);
	$("div.slideMenuFacts .contador .actual").html(valor);
			
};




$(document).ready(function() {

$.paginacionTestimonies(1);
$.paginacionRegulation(1)

	
		$('div.slideMenu a.pag2').click(function () { 
			$.resetBotones(); 
			$(this).addClass('toActive');
			$("div.bannerDescription").animate({marginLeft:"-50%"},1500);
			return false;  
		});  
	
		$('div.slideMenu  a.pag1').click(function () { 
			$.resetBotones();  
			$(this).addClass('toActive');
    		$("div.bannerDescription").animate({marginLeft:"0px"},1500);
			return false; 
		});
		
		$('div.slideMenuRegulation a.pag2').click(function () { 
			$.resetBotones(); 
			$(this).addClass('toActive');
			$("div.bannerDescription").animate({marginLeft:"-50%"},1500);
			$.paginacionRegulation(2);
			return false;  
		});  
	
		$('div.slideMenuRegulation  a.pag1').click(function () { 
			$.resetBotones();  
			$(this).addClass('toActive');
    		$("div.bannerDescription").animate({marginLeft:"0px"},1500);
			$.paginacionRegulation(1);
			return false; 
		});

		
		

//alert($('.facts').width()+'-----'+$('.containerFacts').width()+'-----'+$('.containerFactsText').width()+'-----'+$('.factsItem').width())

var clicks=0;
var movimiento=0;
var pag=1;
var totalpag=Math.floor($(".factsItem").width()/$('.containerFacts').width());

$.moverCaja=function(pag){
	movimiento=pag*$('.containerFacts').width();
	$(".factsItem").animate({marginLeft:-movimiento},1500);	
}
	
$.paginacionFacts(1,totalpag);



		$('div.slideMenuFacts  a.pag1').click(function () { 

			if(pag>1){
				//movimiento=parseInt(movimiento-$('.containerFacts').width());
				pag-=1;	
				$.moverCaja(pag-1)
				$.paginacionFacts(pag,totalpag);
			}else{
				pag=1;
			}

		});

		$('div.slideMenuFacts a.pag2').click(function () { 
			
			
			if(pag+1<=totalpag){
				$.moverCaja(pag);				
				pag+=1;					
				$.paginacionFacts(pag,totalpag);
	
			}else{
				clicks=totalpag;
			}
			
 
		});  		
		
		
		
		$('div.slideMenuTestimonies  a.pag1').click(function () { 
			$.resetBotones(); 
			$(this).addClass('toActive');
    		$(".containerPags1").animate({marginLeft:"0px"},1000);
			$.paginacionTestimonies(1);
			return false; 
		});		
		$('div.slideMenuTestimonies a.pag2').click(function () { 
			$.resetBotones(); 
			$(this).addClass('toActive');
			$(".containerPags1").animate({marginLeft:"-50%"},1000);
			$.paginacionTestimonies(2);
			return false;  
		});  
 


});


// seccion work milestones


$.resetBotones = function(){
		for(i=1;i<=3;i++){
		$('.pag'+i).removeClass('toActive'); 	
		}
	
}
$.comprobar = function(){
	for(i=1;i<=5;i++){
	$('.SlideWork'+i).removeClass('milestonesWorkActive'); 
	}
};



$.initWork=function(dcontainer,dmenu){
	$(".containerWork").animate({marginLeft:dcontainer},1500);
	$(".slideMenuWorks").animate({marginLeft:dmenu},1500);	
	for(i=1;i<=5;i++){
	$('.SlideWork'+i).removeClass('milestonesWorkActive'); 
	}	
	$.transWork(1);
};

$.transWork=function(inicio){
	for(i=1;i<=5;i++){
	$('.milestonesWork'+i).fadeTo(200, 0.3);
	};
	$('.milestonesWork'+inicio).fadeTo(200, 1);
	$('.SlideWork'+inicio).addClass('milestonesWorkActive');
};


$.moveWork=function(dcontainer,dmenu){
	$(".containerWork").animate({marginLeft:dcontainer},1000);
	$(".slideMenuWorks").animate({marginLeft:dmenu},1000);	

};



$(document).ready(function() {	

         if ( $(window).width() <= 1024){
		
			var inicio=1;
			$.comprobar();
			$.transWork(inicio);
			$.initWork('35%','34.6%');
						
				$('.SlideWork1').click(function () { 	
				$.comprobar();
				$.moveWork('35%','34.6%');
				$.transWork(1);	
				});
				$('.SlideWork2').click(function () { 	
				$.comprobar();
				$.moveWork('-45%','27.6%');
				$.transWork(2);	
				});
				$('.SlideWork3').click(function () { 	
				$.comprobar();
				$.moveWork('-125%','20%');
				$.transWork(3);	
				});
				$('.SlideWork4').click(function () { 	
				$.comprobar();
				$.moveWork('-205%','13%');
				$.transWork(4);	
				});
				$('.SlideWork5').click(function () { 	
				$.comprobar();
				$.moveWork('-285%','6%');
				$.transWork(5);	
				});
         }
         else{
			var inicio=1;
			$.comprobar();
			$.transWork(inicio);
			$.initWork('0%','36.5%');
	
		$('.SlideWork1').click(function () { 		
			$.comprobar();
			$.transWork(1);	
			$.moveWork('0%','36.5%');
		}); 
		
		$('.SlideWork2').click(function () { 
		$.comprobar();
		$.transWork(2);
		$.moveWork('-80%','29.2%');
		}); 
		
		$('.SlideWork3').click(function () { 
		$.comprobar();
		$.transWork(3);
		$.moveWork('-160%','22%');
		}); 
		$('.SlideWork4').click(function () { 
		$.comprobar();
		$.transWork(4);
		$.moveWork('-240%','14.8%');

		}); 
		$('.SlideWork5').click(function () { 
		$.comprobar();
		$.transWork(5);
		$.moveWork('-320%','7.5%');

		});

        };
});


// seccion areas

$.resetAnchoAreas = function(){
	for(i=0;i<=5;i++){
	$('.containerAreas .area'+i).removeClass('activo'); 
	}
};

$(document).ready(function() {	
for(i=1;i<5;i++){
		$('.containerAreas .area'+i).click(function () { 
			$.resetAnchoAreas();		
			$(this).addClass('activo');
		}); 
	}; 
});



// seccion timeline
$(document).ready(function() {	
	$(".milestones" ).mouseover(function() {
	$('.tituloGrafico').addClass('sinFondo');
	});
	$(".milestones" ).mouseout(function() {
	$('.tituloGrafico').removeClass('sinFondo');
	});
});



// seccion decades

$.initDecades = function(filtro){
	for(i=1;i<=4;i++){
	$('.decades ul.decade'+i).hide();
	$('.decades h3.d'+i).removeClass('decadaActiva'); 
	};
	$('.decades ul.'+filtro).fadeTo(150, 1);	
};



$(document).ready(function(){
	$('.msg').show();		
	$.initDecades();


	$('.decades h3').click(function(e){
		e.preventDefault();
		var filtro = $(this).attr('id');
		$.initDecades(filtro);
		$(this).addClass('decadaActiva');
		$('.msg').hide();		
	});
	
});


// activar fotos de directores
$(document).ready(function(){
		$('.directorsYear li').mouseover(function(e){
		e.preventDefault();
		var year = $(this).attr('id');
		//$('.picturesDirectors figure.'+year).addClass('directorActivo');
		$('.picturesDirectors figure.'+year).fadeTo(100, 1);		
	
	});
	
		$('.directorsYear li').mouseout(function(e){
		e.preventDefault();
		var yearOut = $(this).attr('id');
		//$('.picturesDirectors figure.'+yearOut).removeClass('directorActivo');	
		$('.picturesDirectors figure.'+yearOut).fadeTo(100, 0.5);		
	
	});
	
});

// activar años de directores
$(document).ready(function(){
		$('.picturesDirectors figure').mouseover(function(e){
		e.preventDefault();

		var years = $(this).attr('class');
			var array = years.split(" ");
			for(var x = 0; x <=array.length-1; x++)
			{
				$('.directorsYear li#'+array[x]).addClass('yearActivo');
			}
		
	});
	
		$('.picturesDirectors figure').mouseout(function(e){
		e.preventDefault();
			var years = $(this).attr('class');
			var array = years.split(" ");
			for(var x = 0; x <=array.length-1; x++)
			{
				$('.directorsYear li#'+array[x]).removeClass('yearActivo');
			}
	
	
	});
	
});




