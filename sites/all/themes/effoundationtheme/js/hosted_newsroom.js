function removeEmptyElements(arr) {
  for (var i = 0; i < arr.length; i++) {
    if (arr[i] == "") {
      arr.splice(i, 1);
      i--;
    }
  }
  return arr;
}

function mynewsdeskHandleLocation(iframeLocation){
    var h = mynewsdeskGetParam('height', iframeLocation.href);
    var l = mynewsdeskGetParam('location', iframeLocation.href);
    document.getElementById("mnd-iframe").height = h;

    if(window.parent.parent.history.replaceState) {
      window.parent.parent.history.replaceState(null, null, '#'+l)
    } else {
      window.parent.parent.location.hash = l;
    }
}

function mynewsdeskGetParam(p, href){
    p = p.replace(/[\[]/,"\\\[").replace(/[\]]/,"\\\]");
    var r = new RegExp("(\\?|&amp;|&)" + p + "=([^&#]*)");
    var results = r.exec(href);
    return results ? results[2] : ""
}


(function(){
  // Linked in changes #/news/<title> urls to #/%2Fnews%2F/<title> so we fix that on first load
  window.location.hash = window.location.hash.split("%2F").join("/")

  // Scrolls to beginning of iframe whenever the user navigates the hosted newsroom
  // to avoid ending up in the middle of the next page when navigating inside the iframe
  function mynewsdeskIframeSrc() {
    var path = location.hash.substr(1);
    if(path[0] !== '/') path = '/' + path;
    return "//news.eurofound.europa.eu" + path;
}

  document.domain = /([a-z0-9-]+\.((ac|police|co|org|gov|com)\.\w{2}|\w+))$/i.exec(location.hostname)[0];

  var i = document.createElement("iframe");
  i.id = "mnd-iframe";
  i.frameBorder = 0;
  i.setAttribute("allowTransparency", "true");
  i.setAttribute("scrolling", "no");
  i.height = "3000";
  i.width = "100%";
  i.src = mynewsdeskIframeSrc();
  var s = document.getElementById("mnd-script");
  s.parentNode.insertBefore(i, s.nextSibling);
  var left = i.offsetLeft;
  var firstLoad = true;

  var setScrollPosition = function(e) {
    var isLinkToMaterial = removeEmptyElements(window.location.hash.split("/")).length > 2;
    var positions = getHostedNewsroomIframePositions();
    var belowIframeTop = (positions.top - positions.scrollTop) < 0;

    if (!firstLoad || isLinkToMaterial) {
      if (belowIframeTop) {
        window.scrollTo(left, positions.top);
      }
      else if (isLinkToMaterial && firstLoad) {
        window.scrollTo(left, positions.top);
      }
    }

    firstLoad = false;
  }

  var getHostedNewsroomIframePositions = function(){
    var node = i;
    var elementTop = 0;
    var scrollPosition = 0;
    if (node.offsetParent) {
      do {
        // node.offsetParent always returns 0 in Firefox and IE. Test whether to use document.documentElement or node.offsetParent to get the parent document.
        var docScrollTop = document.documentElement.scrollTop;
        var nodeScrollTop = (node.offsetParent == null) ? 0 : node.offsetParent.scrollTop;
        var scrollTop = 0;
        if(docScrollTop !== 0 && nodeScrollTop === 0) {
            scrollTop = docScrollTop;
        }
        else { scrollTop = nodeScrollTop }

        elementTop += node.offsetTop;
        scrollPosition += node.offsetParent ? scrollTop : 0;
      } while (node = node.offsetParent);
      return {top: elementTop, scrollTop: scrollPosition};
    }
  }

  // Eventlistener with IE fallback
  if (i.addEventListener) {
    i.addEventListener("load", setScrollPosition, false);
  }
  else if (i.attachEvent) {
    i.attachEvent("onload", setScrollPosition);
  }
})();