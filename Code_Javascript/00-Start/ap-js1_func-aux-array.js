var todosAluno = [
  {nome: "Joao", idade: 18},
  {nome: "Agostino", idade: 19}, 
  {nome: "Carlos", idade: 18}, 
  {nome: "Falcon", idade: 19}
];

var todosAlunoMaiores = todosAluno.every((aluno)=>{
  return aluno.idade >= 18;
});

// console.log(todosAlunoMaiores);