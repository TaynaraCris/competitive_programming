#include <stdio.h>


int calcularAno (int idadeDias){
	
	int ano=0;

	if(idadeDias >= 365){
		ano = idadeDias/365;
		
	}	

	return ano;
}

int calcularMes (int idadeDias){
	int mes=0;

	if(idadeDias >= 30){
		mes = idadeDias/30;
		
	}

	return mes;

}

int calcularDia (int idadeDias){

	int dia=0;

	if(idadeDias < 30){
		dia = idadeDias;
	}

	return dia;

}

int main ()
{

	int idadeDias;
	scanf("%d", &idadeDias);

	printf("%d ano(s)\n", calcularAno(idadeDias));
	idadeDias = idadeDias % 365; 
	printf("%d mes(es)\n", calcularMes(idadeDias));
	idadeDias = idadeDias % 30;
	printf("%d dia(s)\n", calcularDia(idadeDias));

	return 0;
}
