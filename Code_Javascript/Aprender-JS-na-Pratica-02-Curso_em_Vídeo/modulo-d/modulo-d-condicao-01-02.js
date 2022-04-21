// Condição Aula 01

/*
console.log("Aula do modulo D do curso em video de Javascript")
let velocidade = 30;
console.log(`A velocidade de trafego do seu carro é de ${velocidade}km/h`)
if(velocidade > 60) {
  console.log('Você ultrapassou a velocidade permitida. Será multado.')
} else {
  console.log('Prossiga com cuidado.')
}
console.log("Dirija utilizando a direção defensiva")
/*

// Condição Aula 02

/*
let idade = 77;
console.log(`A sua idade é de ${idade} anos`);
if(idade < 16) {
  console.log("Não vota");
} else if(idade < 18 || idade > 65) {
  console.log("Voto opcional");
} else {
  console.log("Voto obrigatório");
}
*/

let hora = new Date().getHours();
console.log(`Agora, são exatamente ${hora} horas`)
if(hora < 6) {
  console.log("Boa madrugada!")
} else if(hora < 13) { // Pela lógica matemática (hora > 13) Boa tarde!, Boa noite!, Bom dia!
  console.log("Bom dia!") 
} else if(hora < 18) { // Pela lógica matemática (hora > 18) Boa tarde!, Boa noite!, Bom dia!
  console.log("Boa tarde!") 
} else {
  console.log("Boa noite!")
}


