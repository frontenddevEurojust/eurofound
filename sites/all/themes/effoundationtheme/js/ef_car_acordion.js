jQuery( document ).ready(function() {
	ajustes();
	displayImage();
});

function ajustes(){

	jQuery(".summary_body *").each(function() {
    	jQuery(this).addClass("target");
	});

	jQuery(".summary_body h2").each(function(i) {
	    jQuery(this).addClass("acordeon").removeClass("target");
	});

	var contador=1;
	jQuery(".summary_body h2").each(function() {
	    jQuery(this).nextAll(".target").addClass("bloque"+contador);
	    contador++;
	});
	jQuery(".target").each(function(posicion) {
		var clase=jQuery(this).attr("class");
		jQuery(this).attr("id","POS"+posicion);
		if (clase.indexOf("bloque")) {
			var clase2=clase.replace(/bloque/g,",");
			var clase3=clase2.replace(/target/g,"");
			var clase4=clase3.substr(2,clase3.length);
			var clase5=clase4.replace(/ /g,"");

			jQuery(this).attr("class",clase5);

			var claseNueva=jQuery(this).attr("class");
			var cachos=claseNueva.split(",");
			for(i=0;i<cachos.length;i++) {
				var numeroMayor=0;
				var numero=parseInt(cachos[i]);
				if (numero>numeroMayor) {
					numeroMayor=numero;
				}
			}
			jQuery("#POS"+posicion).attr("class","seccion"+numeroMayor);
		}
	});

	//setTimeout("acordeon()",2000);
	tofold();
}

function tofold() {
	jQuery(".summary_body h2.acordeon").each(function() {
		var clase=jQuery(this).next().attr("class");
		console.log(clase);
		if(clase != undefined){
			if(clase.match("^seccion")){
				jQuery("."+clase).wrapAll("<div class='fold'></div>");
			}
		}

	});
	acordeon();
}

function acordeon() {
    jQuery(".summary_body h2.acordeon").each(function() {
    	if (jQuery(this).next(".fold").length > 0 ) {
		  	jQuery(this).next(".fold").slideToggle();

			 jQuery(this).click(function() {
	            jQuery(this).toggleClass("arrow-down");
	            jQuery(this).next(".fold").slideToggle();
	        });

		}else{
		  	jQuery(this).addClass("no-arrow");
		};
    });
}

function displayImage(){
	var $div = jQuery('img').parent().parent();

	for (var i = 0; i < $div.size(); i++){
		if ($div.eq(i).prop("tagName").toLowerCase() == 'div' && $div.eq(i).attr("class") == 'fold'){
			$div.eq(i).removeAttr("style");
		}
	}
}
