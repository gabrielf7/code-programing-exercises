let array01 = [1, 2, 3, 4, 5];

//Normal, inserir um array no outro.
// let array02 = [array01, 6, 7, 8, 9, 10];

//Usando o operador spread, inserir um array no outro.
let array02 = [...array01, 6, 7, 8, 9, 10];

console.log(array02);

let usuarioInfor = {
  nome: "J",
  sobrenome: "007",
  idade: 37
};

let novaInforUsuario = {
  ...usuarioInfor,
  cidade: "Campina Grande",
  pais: "Brasil"
}

console.log(novaInforUsuario);