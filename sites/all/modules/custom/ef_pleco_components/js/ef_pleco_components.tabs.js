
(function($) {

Drupal.behaviors.ef_pleco_tabs = {
  attach: function (context, settings) {

    $('.ef-pleco-tabs > .__tabs_sections', context).each(function() {

      var tabsElement = this;

      var containerElement = this.parentNode;
      var $container = $(containerElement);

      var $controls = $('<ul class="__tabs_controls">');
      $controls.prependTo(containerElement);
      var $tabs = $(tabsElement);
      var tabElements = [];
      var controlElements = [];

      $('> li > .__title', tabsElement).each(function() {
        var titleElement = this;
        var tabElement = this.parentNode;
        tabElements.push(tabElement);
        var $control = $('<li>');
        controlElements.push($control[0]);
        $control.appendTo($controls);
        $control.append(titleElement);
      });

      var activeIndex = null;
      function setActive(index) {
        if (undefined === tabElements[index]) {
          return;
        }
        if (index === activeIndex) {
          return;
        }
        if (null !== activeIndex && undefined !== tabElements[activeIndex]) {
          $(tabElements[activeIndex]).removeClass('__active');
          $(controlElements[activeIndex]).removeClass('__active');
        }
        $(tabElements[index]).addClass('__active');
        $(controlElements[index]).addClass('__active');
        activeIndex = index;
      }

      for (i = 0; i < controlElements.length; ++i) {
        (function(i) {
          $(controlElements[i]).click(function(){
            setActive(i);
          });
        })(i);
      }

      setActive(0);

      $(tabsElement).addClass('__tabs_content');
      $(tabsElement).removeClass('__tabs_sections');
    });

  }
};


})(jQuery);
