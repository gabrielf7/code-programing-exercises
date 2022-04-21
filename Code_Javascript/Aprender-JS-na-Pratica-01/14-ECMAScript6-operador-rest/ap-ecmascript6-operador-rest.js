// Operação sem rest
function addNumeros(num1, num2, num3, num4) {
  console.log(`${num1}, ${num2}, ${num3}, ${num4}`);
}
addNumeros(3, 3, 5, 5)

// Operação com rest
function addNumerosRest(...numeros) {
  console.log(numeros);
}
addNumerosRest(2, 4, 5, 7)

// -----------------

function adicionarNomes(nomes, ...novosNomes) {
  let novoContato = [
    ...nomes,
    ...novosNomes
  ];
  return novoContato;
}

let nomes = ["Front", "Back"];
let novosOutrosNomes = adicionarNomes(nomes, "UI Design", "Wiframe", "Javascript");
console.log(novosOutrosNomes);