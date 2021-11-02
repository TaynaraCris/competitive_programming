#include <iostream>
#include <string>

using namespace std;

int main(){

	int contador, gasolina = 0, alcool = 0, diesel = 0;

	do{
		cin >> contador;
		if(contador == 1){
			alcool++;
		}
		else if(contador == 2){
			gasolina++;
		}
		else if(contador == 3){
			diesel++;
		}
		else if(contador == 4){
			break;
		}
	}while(contador != 1 || contador != 2 || contador != 3);

	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", alcool);
	printf("Gasolina: %d\n", gasolina);
	printf("Diesel: %d\n", diesel);

	return 0;
}

