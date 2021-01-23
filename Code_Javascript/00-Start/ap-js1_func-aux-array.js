//Dados:
//1
var todosAluno = [
  {nome: 'Joao', idade: 27},
  {nome: 'Agostino', idade: 25}, 
  {nome: 'Carlos', idade: 18}, 
  {nome: 'Falcon', idade: 16}
];
//2
var pesoDasMalas = [57, 37, 26, 19];
//3
var elementosR = [1, 2, 3, 4, 5, 6, 7];
//4
var	nomes	=	['Joao',	'Falcon',	'Luke'];

//Funções:
function textP(text1, text2){
  return `Resultado: ${text1} - ${text2}`;
}

// Métodos:

//ForEach
nomes.forEach(function(nome) {
	return nome;
});
document.getElementById("m1").innerHTML = textP("Todos os nomes", nomes);

//Map
var	numeros	=	[1, 2, 3, 4, 5, 6, 7];
var	dobro	=	numeros.map(function(numero) {
	return	numero	*	2;
});
//Elementos = [1,2,3]
document.getElementById("m2").innerHTML = textP("Dobro dos elementos", dobro);

//Filter
var	alunosDeMaior	=	todosAluno.filter((aluno) => {
  return aluno.idade >= 18;
});
document.getElementById("m3").innerHTML = textP("Alunos de Maiores", alunosDeMaior.length);

//Find
var	alunoIg	=	todosAluno.find((aluno) => {
  return	aluno.nome === 'Falcon';
});
document.getElementById("m4").innerHTML = textP("Nome", alunoIg.nome);

//Every
var alMaiores = todosAluno.every((aluno)=>{
  return aluno.idade >= 18;
});
document.getElementById("m5").innerHTML = textP("Todos alunos são de Maior", alMaiores);

//Some
var malaAcimaDoPeso = pesoDasMalas.some((pesoDaMala) => {
  return pesoDaMala > 30;
});
document.getElementById("m6").innerHTML = textP("Mala acima do Peso", malaAcimaDoPeso);

//Reduce
//1
// var soma = 0;
// soma = elementosR.reduce((soma, numero) => {
//   return soma + numero;
// }, 0);
// document.getElementById("m7").innerHTML = textP("Soma de todos", soma);
//2
var nomesAluno = todosAluno.reduce(function(nomesList, aluno){
  nomesList.push(aluno.nome);
  return nomesList;
}, []);
document.getElementById("m7").innerHTML = textP("Lista de nomes", nomesAluno);