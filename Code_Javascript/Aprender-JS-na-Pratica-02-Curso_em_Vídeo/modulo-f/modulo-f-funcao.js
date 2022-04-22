// Dois métodos de executar função //
// function parimpa(parametro) {
//   if(parametro%2 == 1) {
//     return "impar"
//   } else {
//     return "par"
//   }
// }
// console.log(`Executando direto pela função, o número 47 é ${parimpa(47)}.`);
// let exibir = parimpa(47);
// console.log(`Executando direto pela variável, o número 48 é ${parimpa(48)}.`);

// Possibilidades do Parâmetro //
// function somar(y=0, x=0) {
//   return y + x;
// }
// // Função completa
// console.log(`Soma de y + x é igual a ${somar(6, 4)}.`);
// // Exemplo de Erro, return NaN - function somar(y, x) {
// console.log(`Soma de y + x é igual a ${somar(6)}.`);
// // Exemplo de Erro Corrigido, return 10 - function somar(y=0, x=0) {
// console.log(`Soma de y + x é igual a ${somar(6)}.`);

// Função na variável | Usando Função Anônima //
// let multiplicacaoDe2 = function (m=0) {
//   return m*2;
// }
// console.log(multiplicacaoDe2(7));

// Calcular Fatorial com Função - Modo tradicional //
// function fatorial(numero) {
//   let fat = 1;
//   for (let conte = numero; conte > 1; conte--) {
//     fat *= conte;
//   }
//   return fat;
// }
// console.log(fatorial(5));

// Calcular Fatorial com Função - Modo de função rescursiva //
function fatorial(numero) {
  if(numero == 1) {
    return 1;
  } else {
    return numero * fatorial(numero-1);
  }
}
console.log(fatorial(7));