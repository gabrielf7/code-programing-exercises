function data_e_horario_hj() {
  let dataHj = new Date();
  return dataHj;
}

function meuRelogio(){
  // Style em JS
  document.body.style.color = "white";
  document.body.style.backgroundColor = "#03bda4";
  document.getElementById("containerdataHJ").setAttribute(
    "style", "display: flex; font-size: 30px; justify-Content: space-between; font-family: sans-serif;"
  );
  document.getElementById("container").setAttribute(
    "style", "display: flex; align-items: center; justify-Content: center; font-size: 50px;"
  );
  document.getElementById("exibaHorario").setAttribute(
    "style", "font-family: verdana; font-size: 107px;"
  );

  // Lógica da Função
  const semana = [
    "Domingo", "Segunda-feira", "Terça-feira", "Quarta-feira", 
    "Quinta-feira", "Sexta-feira","Sábado"
  ];
  // // const mes = ["Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro","Outubro", "Novembro", "Dezembro"];
  const opcoes = { year: 'numeric', month: 'long', day: 'numeric' }; // // weekday: 'long',
  let infodata = (op) => { return data_e_horario_hj().toLocaleDateString("pt-br", op) };
  document.getElementById("nomeDoHorario").innerHTML = `Horário de Brasília`;
  document.getElementById("dataHJ").innerHTML = `
    ${semana[data_e_horario_hj().getDay()]}, ${infodata(opcoes)}
  `;

  setInterval(function(){
    document.getElementById("exibaHorarioTitle").innerHTML = `
    Horário BR - ${data_e_horario_hj().toLocaleTimeString()}
    `;
    document.getElementById("exibaHorario").innerHTML = `${data_e_horario_hj().toLocaleTimeString()}`;
  }, 1000);
}