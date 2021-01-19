function requisicao() {
  const url = 'https://alunos.b7web.com.br/api/ping';
  // const params = {
  //   method:'POST',
  //   body: JSON.stringify({
  //     nome: 'Joao',
  //     idade: 77
  //   })
  // };

  fetch(url) // fetch(url, params)
    .then((resposta)=>resposta.json()) // Transformando uma promise de reposta em Json
    .then((json)=>{ // Pegando uma promise em json e utilizando-a
      console.log(json);
    });
  
  console.log("Resultado da Requisição");
}

async function requisicaoAsync(){
  const url = 'https://alunos.b7web.com.br/api/ping';
  // const params = {
  //   method:'POST',
  //   body: JSON.stringify({
  //     nome: 'Joao',
  //     idade: 77
  //   })
  // };
  const resp = await fetch(url); // fetch(url, params)
  const vjson = await resp.json();
  console.log(vjson);
  console.log("Resultado da Requisição");
}

requisicaoAsync();
// requisicao();