var nutMenu = document.querySelector(".menu-button");
var menu = document.querySelector("ul.nav");

nutMenu.addEventListener('click',()=>{
    menu.classList.toggle('active');
});