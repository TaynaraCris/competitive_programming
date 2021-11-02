#include <stdio.h>

int main(){

	int n[20], i, j, copia, ultimo = 19;
	
	for(i = 0; i < 20; i++){
		scanf("%d", &n[i]);
	}
	
	for(i = 0; i < 10; i++){
		copia = n[i];
		n[i] = n[ultimo];
		n[ultimo] = copia;
		ultimo--;
	}

	for(i = 0; i < 20; i++){
		printf("N[%d] = %d\n", i, n[i]);
	}
	
	return 0;
}
