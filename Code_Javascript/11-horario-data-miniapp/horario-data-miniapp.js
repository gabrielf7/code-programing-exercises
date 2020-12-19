function meuRelogio(){
  setInterval(function(){
    var dataHj = new Date();
    var semana = ["Domingo", "Segunda-Feira", "Terça-Feira", "Quarta-Feira", "Quinta-Feira", "Sexta-Feira","Sábado"];
    var infodata = semana[dataHj.getDay()];
    document.getElementById("exibaHorarioTitle").innerHTML = `
      Horário BR - ${dataHj.toLocaleTimeString()}
    `;
    document.getElementById("dataHJ").innerHTML = `
    Data: ${dataHj.toLocaleDateString("pt-br")} - ${infodata}
    `;
    document.getElementById("exibaHorario").innerHTML = `${dataHj.toLocaleTimeString()}`;
    document.body.style.color = "white";
    document.body.style.backgroundColor = "blue";
    document.getElementById("containerdataHJ").setAttribute(
      "style", "display: flex; font-size: 30px; justify-Content: space-between; font-family: sans-serif;"
    );
    document.getElementById("container").setAttribute(
      "style", "display: flex; align-items: center; justify-Content: center; font-size: 50px;"
    );
    document.getElementById("exibaHorario").setAttribute(
      "style", "font-family: verdana; font-size: 107px;"
    );
  }, 1000); 
}