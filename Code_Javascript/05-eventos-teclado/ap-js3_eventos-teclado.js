var cont = 0;
function apertarTecla(event) {
  cont++;
  document.getElementById("exiba").innerHTML = `
          Numero de identificação da tecla atual: ${event.keyCode}. <br />
          Quantidade de vezes que foi digitalizado uma tecla: ${cont}.
        `;
}