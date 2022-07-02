#ifndef CAOSENCARNADO_H
#define CAOSENCARNADO_H

int eMaiorValor (int i, int j, int k){
	if( i>= j && i >= k){
		return i;
	}else if(j >= i && j >= k){
		return j;
	}else if(k >= i && k >= j){
		return k;
	}
}
#endif
