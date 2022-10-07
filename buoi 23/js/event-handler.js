function checkUsername(){
    var elMsg = document.getElementById('feedback');
    if(this.value.length<5){
        elMsg.textContent = 'hello world!';

    }
    else{
        elMsg.textContent = "";
    }

}
var elUsername = document.getElementById('username');
elUsername.onblur = checkUsername;