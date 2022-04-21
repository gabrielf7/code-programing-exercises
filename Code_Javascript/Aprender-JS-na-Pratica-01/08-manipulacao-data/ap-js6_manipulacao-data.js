var dataHj = new Date();
// Inserir uma Data em Formato Estadunidense
var dataHJUSA = new Date(Date.parse("Jun 17, 2007"));
console.log(dataHJUSA.setDate(dataHJUSA.getDate() + 8));
console.log(dataHJUSA.setHours(dataHJUSA.getHours() + 25));
document.getElementById("dataHJ").innerHTML = dataHJUSA;

// Data em Formato Brasileiro com dia da semana
// var semana = ["Domingo", "Segunda", "Terça", "Quarta", "Quinta", "Sexta", "Sábado"];
// document.getElementById("dataHJ").innerHTML = `
//   Data de Hoje - ${dataHj.getDate()}/${dataHj.getMonth() + 1}/${dataHj.getFullYear()}
//   - ${semana[dataHj.getDay()]}
// `;

// Data em Formato Brasileiro
// document.getElementById("dataHJ").innerHTML = `
//   Data de Hoje - ${dataHj.getDate()}/${dataHj.getMonth() + 1}/${dataHj.getFullYear()}
// `;