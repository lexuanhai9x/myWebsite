var elUsername = document.getElementById("username");
var elMsg = document.getElementById('feedback');
function checkUsername (minLength){
   if(elUsername.ariaValueMax.length < minLength){
    elMsg.innerHTML = 'hello world!' + minLength +"more";
   }
   else{
    elMsg.innerHTML = "";
   }
}
elUsername.addEventListener("blur", ()=>{
    checkUsername(5)
},false);