function addBola(){
  var bola = document.createElement("div");
  bola.setAttribute("class", "bola");

  var posicao1 = Math.floor(Math.random() * 700);
  var posicao2 = Math.floor(Math.random() * 600);
  bola.setAttribute("style", "left:"+posicao1+"px;top:"+posicao2+"px;");
  bola.setAttribute("onclick", "estourar(this)");

  document.body.appendChild(bola);
}
function estourar(objeto){
  document.body.removeChild(objeto);
}
function start(){
  setInterval(addBola, 2000);
}