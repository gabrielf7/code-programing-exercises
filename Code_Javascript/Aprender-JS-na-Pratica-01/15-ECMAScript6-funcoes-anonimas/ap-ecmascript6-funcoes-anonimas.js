function somar(atual, proximo){ return atual + proximo }
function adicionarNms(...numeros) {
  //reduce
  // let total = numeros.reduce(somar);

  //funcao anonima 1
  // let total = numeros.reduce(function(atual, proximo) {
  //   return atual + proximo;
  // });

  //funcao anonima 2
  // let total = numeros.reduce((atual, proximo) => {
  //   return atual + proximo;
  // });

  //funcao anonima 3
  // let total = numeros.reduce( (atual, proximo) => atual + proximo );

  //funcao anonima 4 - Com variavel
  let valorDaSoma = (numeros) => {
    let total = 0;
    for(let cont in numeros) {
      total += numeros[cont];
    }
    return total;
  };
  console.log(valorDaSoma(numeros));

  // console.log(total); 
}

adicionarNms(7, 9, 9, 7, 9);