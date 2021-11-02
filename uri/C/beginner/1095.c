#include <stdio.h>

int main(){

	int I = -2, J = 65;
	int contI, contJ;


	for(contJ = 60; contJ >= 0; contJ -= 5){
	       I += 3;
	       J -= 5;
	       printf("I=%d J=%d\n", I, J); 
	}	

	return 0;
}
