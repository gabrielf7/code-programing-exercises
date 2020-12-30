const desinfo = {
  nome: "Falcon",
  sobrenome: "12",
  idade: 56,
  info: "Maior Avioneiro",
  pais: "Brasil"
}
document.getElementById("exibir").innerHTML = `${desinfo}`;
document.getElementById("exibir").innerHTML = `${desinfo.nome}`;
let { nome } = desinfo;
//A descontrução de objetos do array é vista pela definição do "{ nome } = desinfo", onde o elemento do array em si vira uma variável, nesse contexto, podemos chama o valor como sendo "nome" ao em vez de chamar "desinfo.nome" que é o tradicional.
document.getElementById("exibir").innerHTML = `${nome}`;

let { sobrenome } = desinfo;
document.getElementById("exibir").innerHTML = `${sobrenome}`;

let { pais:nacionalidade } = desinfo;
//A ação "{ pais:nacionalidade } = desinfo" está definindo em outra variável o valor do elemento do Array, ao em vez de ser a variável "pais" recebendo o valor, agora, será a variável "nacionalidade" que receberá a atribuição, isso por que existe o ":" que afirma essa atribuição.
document.getElementById("exibir").innerHTML = `${nacionalidade}`;

let { idade } = desinfo;
document.getElementById("exibir").innerHTML = `Valor do Array: ${idade}`;
idade = 78;
document.getElementById("exibir").innerHTML = `Valor alterado na variavel (sem modificar a do array): ${idade}`;

let nomes = ['Souza', 'lima', 'Gabriel'];
let [ meio, sobrenomeNV, nomeNV ] = nomes;
document.getElementById("exibir").innerHTML = `${nomeNV} ${meio} ${sobrenomeNV}`;

//Mini calculadora com Descontrução de Objetos no Array
function CriarTagP(num) {
  var criarDiv = document.createElement("p"); 
  criarDiv.setAttribute("id", `exibir-${num + 1}`);
  document.getElementById("exibir").appendChild(criarDiv);
}
const matematica = { 
  soma: function (x, y) { return x + y; },
  subtrair: function (x, y) { return x - y; },
  multiplicar: function (x, y) { return x * y; },
  divisao: function (x, y) { return x / y; }
}; 
let { soma, subtrair, multiplicar, divisao } = matematica;

document.getElementById("exibir").innerHTML = "Mini calculadora com Descontrução de Objetos no Array";
CriarTagP(0);
document.getElementById("exibir-1").innerHTML = `
Resultado da Soma: ${soma(25, 15)}`;
CriarTagP(1);
document.getElementById("exibir-2").innerHTML = `
Resultado da Subtração: ${subtrair(25, 15)}`;
CriarTagP(2);
document.getElementById("exibir-3").innerHTML = `
Resultado da Multiplicação: ${multiplicar(25, 15)}`;
CriarTagP(3);
document.getElementById("exibir-4").innerHTML = `
Resultado da Divisão: ${divisao(25, 15)}`;
