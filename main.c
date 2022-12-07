#include <stdio.h>

int bs[10] = {4,8,2,56,7,98,1,25,33,78};

int bb[100];

int main(void) {

	//Busca sequencial
	int num = 98;
	for(int i=0; i<10; i++){
		if(bs[i]==num){
			printf("Elemento encontrado no posição %d\n", i);
		}
	}

	//Busca binária

	for(int i=0; i<100;i++){
		bb[i] = i+1;
	}

	int busca = 50;
	int comparacoes = 0;
	int continuar = 1;
	int inicio = 0;
	int fim = 99;

	while(continuar==1){
		comparacoes++;
		int pivo = (inicio+fim)/2;
		if(bb[pivo]==busca){
			printf("Elemento encontrado na posição %d \n", pivo);
			printf("Foram realizadas %d comparações\n", comparacoes);
			continuar = 0;
		} else{
			if(busca>bb[pivo]){
				inicio = pivo + 1;
			}
			else{
				fim = pivo-1;
			}
		}

		if(fim<inicio){
			printf("Elemento não encontrado.\n");
			continuar = 0;
		}
	}

	
  return 0;
}