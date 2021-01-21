function clearDados() {
  document.getElementById("campo1-1").innerHTML = "";
  document.getElementById("campo1-2").innerHTML = "";
  document.getElementById("campo2-1").innerHTML = "";
  document.getElementById("campo2-2").innerHTML = "";
  document.getElementById("campo3-1").innerHTML = "";
  document.getElementById("campo3-2").innerHTML = "";
}

pvez = 0;
function clearInput(){
  if(pvez == 0){
    pvez = pvez + 1;
    // console.log("Primeira vez usando o input");
  }else{
    // console.log("Segunda vez usando o input");
    if(document.getElementById("put-1").value == ""){ clearDados(); }
  }
}

async function fazereq(){
  let input = document.getElementById("put-1");
  const resposta = await cep(input.value);
  document.getElementById("campo1-1").innerHTML = resposta["cep"];
  document.getElementById("campo1-2").innerHTML = resposta["state"];
  document.getElementById("campo2-1").innerHTML = resposta["city"];
  document.getElementById("campo2-2").innerHTML = resposta["neighborhood"];
  document.getElementById("campo3-1").innerHTML = resposta["street"];
  document.getElementById("campo3-2").innerHTML = resposta["service"].toUpperCase();
  input.value = "";
}
