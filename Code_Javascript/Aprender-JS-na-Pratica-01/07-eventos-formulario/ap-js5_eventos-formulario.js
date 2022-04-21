function mudarOpcao(thisObject) {
  const listaCor = ["green", "red", "blue", "purple", "yellow"];
  var elementoRandom = listaCor[Math.floor(Math.random() * listaCor.length)];
  document.getElementById("exiba").innerHTML = `Selecionado: ${thisObject.value}`;
  if(thisObject.value == "Maranhão"){
    document.getElementById("exiba").style = `
      padding: 50px 50px;
      background-color: ${elementoRandom};
      color: #fff;
    `;
  }else{
    document.getElementById("exiba").style = `
      padding: 50px 50px;
      background-color: blue;
      color: #fff;
    `;
  }
}
function focar(){
  document.getElementById("exiba").innerHTML = `Focou no Input`;
}
function foraFoco(){
  document.getElementById("exiba").innerHTML = `Não está Focado no Input`;
}
function handleSubmit(){
  document.getElementById("exiba").innerHTML = `Retornando False`;
  return false;
}