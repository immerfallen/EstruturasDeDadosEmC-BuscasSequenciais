#include <stdio.h>

int v[10] = {4,8,2,56,7,98,1,25,33,78};

int main(void) {

	//Busca sequencial
	int num = 98;
	for(int i=0; i<10; i++){
		if(v[i]==num){
			printf("Elemento encontrado no posição %d", i);
		}
	}

	
  return 0;
}