// let exArray = [];
// // O Array em JS é um Object 
// console.log(typeof exArray); 
let amigo = {
  sufixoNome: "A",
  nome:"Ana", 
  idade: 21, 
  peso: 60, 
  engordar(incrementar){
    this.peso += incrementar;
  }
};
// O Object em JS é um Object
console.log(typeof amigo); 
amigo.engordar(10);
console.log(`${amigo.sufixoNome} ${amigo.nome} possui o peso atual de ${amigo.peso}kg.`); 
