// Usando uma struct dentro de uma biblioteca .h, crie um algoritmo
// de Tabuada pedindo ao usuário a *pEscolhaeração e os número 1 e número 2. 
// Enviar o arquivo compactado ".zip" com o arquivo .c e .h. *

//Por João Gabriel.
#ifndef TABUADADOAPRENDA_H
#define TABUADADOAPRENDA_H

float calcTabu(int *pEscolha, float *pNumero1, float *pNumero2){
  float resultado;

  if(*pEscolha == 1) {
		resultado = (*pNumero1 + *pNumero2); return resultado;
	}else{
		if(*pEscolha == 2) {
      resultado = (*pNumero1 - *pNumero2); return resultado;
		}else{
			if((*pEscolha == 3) && (*pNumero2 == 0)) {
				return printf("\n Nao eh possivel dividir por zero. \n");
			}else{
				resultado = (*pNumero1 / *pNumero2);
				if(*pEscolha == 4) {
					resultado = (*pNumero1 * *pNumero2); return resultado;
				}
			}
		}
	}
}

#endif
