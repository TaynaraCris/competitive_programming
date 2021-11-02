#include <stdio.h>

int main()
{
	
	int num;

	while(scanf("%d", &num) != EOF){

		if(num == 2002){
			printf("Acesso Permitido\n");
			break;
		}

		else{
			printf("Senha Invalida\n");
		}
	}

	return 0;
}
