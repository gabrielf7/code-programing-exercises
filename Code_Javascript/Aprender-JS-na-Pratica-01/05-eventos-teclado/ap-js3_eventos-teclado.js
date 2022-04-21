var cont = 0;
function apertarTeclaDown(event) {
  cont++;
  document.getElementById("exiba").innerHTML = `
    Numero de identificação da tecla atual: ${event.keyCode}. <br />
    Quantidade de vezes que foi digitalizado uma tecla: ${cont}.
  `;
}
function apertarTeclaUp(event) {
  // document.getElementById("exiba").innerHTML = `
  //   Numero de identificação da tecla atual: ${event.keyCode}.
  // `;
  // console.log(event.keyCode);
  // event. + shiftKey, ctrlKey, altKey, metaKey(MAC)
  if(event.shiftKey == true && event.keyCode == 74){
    document.getElementById("exiba").innerHTML = `
      Shift + J foi Apertado.
    `;
  }

}
function apertarTeclaPress(event) {
  document.getElementById("exiba").innerHTML = `
    Numero de identificação da tecla atual: ${event.keyCode}.
  `;
}