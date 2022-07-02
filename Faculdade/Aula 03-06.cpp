#include <stdio.h>
#include <stdlib.h>
#include "caosencarnado.h"

int maiorValor (int i, int j, int k){
	if( i>= j && i >= k){
		return i;
	}else if(j >= i && j >= k){
		return j;
	}else if(k >= i && k >= j){
		return k;
	}
}

int main(){
	int i, j, k, maior;

	printf("Digite um numero \n");
	scanf("%d", &i);
	printf("Digite um numero \n");
	scanf("%d", &j);
	printf("Digite um numero \n");
	scanf("%d", &k);
	maior = maiorValor(i, j, k);
	printf("================\n");
	printf("Maior Valor: %d", maior);
	return 0;
	
}

