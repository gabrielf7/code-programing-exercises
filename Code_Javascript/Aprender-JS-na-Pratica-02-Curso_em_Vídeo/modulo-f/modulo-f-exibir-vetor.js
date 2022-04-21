let numeros = [4, 79, 2, 22, 7];

numeros.sort(function(a, b) {
  return a - b;
});

console.log(numeros);

// let pessoas = [ { nome: 'Gabriel', idade: 25 }, { nome: 'Ana', idade: 27 }, { nome: 'Isabela', idade: 22 } ];
// pessoas.sort(function (a, b) {
//   if (a.nome > b.nome) {
//     return 1;
//   } else if (a.nome < b.nome) {
//     return -1;
//   }
//   // "a" deve ser igual a "b"
//   return 0;
// });
// console.log(pessoas);


// Number(elementos);
// console.log(elementos.sort());


// Exemplos para exibir o vetor "elementos"
// console.log(elementos);
// [Exemplo] - Nível 1 
/*
console.log(elementos[0]);
console.log(elementos[1]);
console.log(elementos[2]);
console.log(elementos[3]);
console.log(elementos[4]);
*/
// [Exemplo] - Nível 2 
// for(let posicao = 0; posicao < elementos.length; posicao++) {
//   console.log(`O valor ${elementos[posicao]} tem a posição ${posicao} no vetor "elementos".`);
// }
// [Exemplo] - nível 3
// for(let posicao in elementos) {
//   console.log(`O valor ${elementos[posicao]} tem a posição ${posicao} no vetor "elementos".`);
// } 