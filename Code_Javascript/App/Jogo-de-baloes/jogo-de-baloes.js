function estourar(objeto){
  window.document.body.removeChild(objeto);
}

function addBola(){
  let styleBola = window.document.createElement("style");
  let bola = window.document.createElement("div");
  bola.setAttribute("class", "bola");
  styleBola.innerHTML = ".bola { width: 50px; height: 50px; background-color: #34ff01; border-radius: 25px; border: 1px solid #1a173f; position: absolute }";
  window.document.head.insertBefore(styleBola, window.document.head.lastElementChild);

  let posicao1 = Math.floor(Math.random() * 700);
  let posicao2 = Math.floor(Math.random() * 600);
  bola.setAttribute("style", "left:"+posicao1+"px;top:"+posicao2+"px;");
  bola.setAttribute("onclick", "estourar(this)");

  window.document.body.appendChild(bola);
}

function start(){
  setInterval(addBola, 2000);
}

window.addEventListener("load", start);