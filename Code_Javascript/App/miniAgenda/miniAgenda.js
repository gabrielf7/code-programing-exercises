// Coments Important!
// const mes = ["Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro","Outubro", "Novembro", "Dezembro"];
// const opcoes = { weekday: 'long', year: 'numeric', month: 'long', day: 'numeric' };

// Descobrir Data e Horario //
const semana = [
  "Domingo", "Segunda-feira", "Terça-feira", "Quarta-feira", 
  "Quinta-feira", "Sexta-feira","Sábado"
];
const opcoesHorario = {
  timeZone: 'America/Sao_Paulo',
  hour: 'numeric',
  minute: 'numeric',
  second: "numeric",
};
const opcoesData = { year: 'numeric', month: 'long', day: 'numeric' };
// Funções //
function data_e_horario_hj(now) {
  let dataHj = new Date();
  let dateFormat = new Intl.DateTimeFormat([], opcoesHorario);
  let opcoesData = now === "datahj" ? dataHj : dateFormat.format(dataHj);
  return opcoesData;
}
// Style em JS
function styleJS() {
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
  document.getElementById("nomeDoHorario").innerHTML = `Horário de Brasília`;
}
function tempoRelogio() {
  document.getElementById("exibaHorarioTitle").innerHTML = `
  Horário BR - ${data_e_horario_hj("hr")}
  `;
  document.getElementById("exibaHorario").innerHTML = `${data_e_horario_hj("hr")}`;
  setTimeout(tempoRelogio, 1000 );
}
function meuRelogio(){
  styleJS();

  let infodata = (op) => { return data_e_horario_hj("datahj").toLocaleDateString("pt-br", op) };
  document.getElementById("dataHJ").innerHTML = `
    ${semana[data_e_horario_hj("datahj").getDay()]}, ${infodata(opcoesData)}
  `;

  tempoRelogio();
}
