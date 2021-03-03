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
  const dataHj = new Date();
  let infodata = (op) => { return dataHj.toLocaleDateString("pt-br", op) };
  document.getElementById("nomeDoHorario").innerHTML = `Horário de Brasília`;
  document.getElementById("dataHJ").innerHTML = `
    ${semana[dataHj.getDay()]}, ${infodata(opcoes)}
  `;

  setInterval(function(){
    let horarioDeHoje = new Date();
    document.getElementById("exibaHorarioTitle").innerHTML = `
    Horário BR - ${horarioDeHoje.toLocaleTimeString()}
    `;
    document.getElementById("exibaHorario").innerHTML = `${horarioDeHoje.toLocaleTimeString()}`;
  }, 1000);
}