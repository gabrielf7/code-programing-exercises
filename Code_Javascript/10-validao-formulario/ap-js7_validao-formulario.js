function validarCampo01() { 
  var numero = document.getElementById("numero").value;
  
  //O length é o valor do tamanho das caracteres de uma Variável, nesse caso.
  if(numero.length > 2){ 
    document.getElementById('aviso').innerHTML = `
      Ocorreu um erro, por favor, digite um número apenas de 2 algorismos.
    `;
    return false;
  }else{
    document.getElementById('aviso').innerHTML = ``;
    return true;
  }
}
function validarForm() {
  if(validarCampo01() == true){ return true }else{ return false }
}