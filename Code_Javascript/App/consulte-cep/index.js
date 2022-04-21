function clearDados() {
  let message = document.getElementById("container-top-cep-message");
  let styled1 = document.getElementById("styled1");
  let styled2 = document.getElementById("styled2");
  let styled3 = document.getElementById("styled3");
  document.getElementById("campo1-1").innerHTML = "";
  document.getElementById("campo1-2").innerHTML = "";
  document.getElementById("campo2-1").innerHTML = "";
  document.getElementById("campo2-2").innerHTML = "";
  document.getElementById("campo3-1").innerHTML = "";
  document.getElementById("campo3-2").innerHTML = "";
  message.setAttribute("class", " ");
  message.innerHTML = "";
  styled1.setAttribute("class", "container-campo1");
  styled2.setAttribute("class", "container-campo2");
  styled3.setAttribute("class", "container-campo3");
  // document.querySelectorAll(".useStyled").forEach(el => el.remove()); //Remove tudo.
  // Array.from(document.getElementsByClassName("useStyled"))
  //   .forEach(element => element.remove()); //Remove tudo.
  // [...document.getElementsByClassName('useStyled')].map(thumb => thumb.remove()); //Remove tudo.
}

var pvez = 0;
function clearInput(){
  if(pvez == 0){
    pvez = pvez + 1;
    // console.log(pvez + " vez usando o input");
  }else{
    // console.log("Segunda vez usando o input");
    if(document.getElementById("put-1").value == ""){ clearDados(); }
  }
}


async function fazereq(){
  let input = document.getElementById("put-1");
  const resposta = await cep(input.value);
  let message = document.getElementById("container-top-cep-message");
  let styled1 = document.getElementById("styled1");
  let styled2 = document.getElementById("styled2");
  let styled3 = document.getElementById("styled3");
  
  document.getElementById("campo1-1").innerHTML = resposta["state"];
  document.getElementById("campo1-2").innerHTML = resposta["street"];
  document.getElementById("campo2-1").innerHTML = resposta["city"];
  document.getElementById("campo2-2").innerHTML = resposta["neighborhood"];
  document.getElementById("campo3-1").innerHTML = resposta["cep"];
  document.getElementById("campo3-2").innerHTML = resposta["service"].toUpperCase();
  message.setAttribute("class", "cep-message");
  message.innerHTML = `
    Descubra outro endereço com o cep, digite novamente.
  `;
  input.value = "";
  styled1.setAttribute("class", "container-campo1 useStyled");
  styled2.setAttribute("class", "container-campo2 useStyled");
  styled3.setAttribute("class", "container-campo3 useStyled");
}
