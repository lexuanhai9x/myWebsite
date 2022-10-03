var startItem = document.getElementById('two');
var prevItem = startItem.previousSibling;
var nextItem = startItem.nextElementSibling;

prevItem.className = 'complete';
nextItem.className = 'cool';