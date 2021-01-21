fetch('https://alunos.b7web.com.br/api/ping')
  .then((resposta)=>resposta.json()) // Transformando uma promise de reposta em Json
  .then((json)=>{ // Pegando uma promise em json e utilizando-a
    console.log(json);
  });