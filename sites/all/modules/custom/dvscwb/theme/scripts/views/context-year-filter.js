(function(e){var b=".date-year";var a;var f=false;var h=0;var j=300;var l=300;function k(){h++;a=e(b);if(a.length>0){return true}return false}function d(){if(!f&&h<j){if(k()){c();f=true}else{setTimeout(d,l)}}}setTimeout(d,100);function c(){e(".date-year").append(e("<div class='yearNextPrev'><a href='javascript:' class='yearPrev'>< Prev</a> <a href='javascript:' class='yearNext inline'>Next ></a></div>"));e(".yearPrev").click(function(){g("#edit-year-value-year","#views-exposed-form-context-page")});e(".yearNext").click(function(){i("#edit-year-value-year","#views-exposed-form-context-page")});e("#edit-year-value-year option[value='']").remove()}function i(n,m){$questions=e(n)[0];questionIndex=$questions.selectedIndex;questionsLength=$questions.length;$questions.selectedIndex=questionIndex<questionsLength-1?questionIndex+1:0;e(m)[0].submit()}function g(n,m){$questions=e(n)[0];questionIndex=$questions.selectedIndex;questionsLength=$questions.length;$questions.selectedIndex=questionIndex>0?questionIndex-1:questionsLength-1;e(m)[0].submit()}})(jQuery);