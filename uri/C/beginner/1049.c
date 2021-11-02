#include <stdio.h>
#include <string.h>

int main()
{

	char osso[20], classe[20], alimento[20];

	scanf("%s", osso);
	scanf("%s", classe);
	scanf("%s", alimento);

	if(strcmp(osso, "vertebrado") == 0){
		if(strcmp(classe, "ave") == 0){
			if(strcmp(alimento, "carnivoro") == 0){
				printf("aguia\n");
			}	
		}
	}

	if(strcmp(osso, "vertebrado") == 0){
		if(strcmp(classe, "ave") == 0){
			if(strcmp(alimento, "onivoro") == 0){
				printf("pomba\n");
			}	
		}
	}

	if(strcmp(osso, "vertebrado") == 0){
		if(strcmp(classe, "mamifero") == 0){
			if(strcmp(alimento, "onivoro") == 0){
				printf("homem\n");
			}	
		}
	}

	if(strcmp(osso, "vertebrado") == 0){
		if(strcmp(classe, "mamifero") == 0){
			if(strcmp(alimento, "herbivoro") == 0){
				printf("vaca\n");
			}	
		}
	}	

	if(strcmp(osso, "invertebrado") == 0){
		if(strcmp(classe, "inseto") == 0){
			if(strcmp(alimento, "hematofago") == 0){
				printf("pulga\n");
			}	
		}
	}

	if(strcmp(osso, "invertebrado") == 0){
		if(strcmp(classe, "inseto") == 0){
			if(strcmp(alimento, "herbivoro") == 0){
				printf("lagarta\n");
			}	
		}
	}

	if(strcmp(osso, "invertebrado") == 0){
		if(strcmp(classe, "anelideo") == 0){
			if(strcmp(alimento, "hematofago") == 0){
				printf("sanguessuga\n");
			}	
		}
	}

	if(strcmp(osso, "invertebrado") == 0){
		if(strcmp(classe, "anelideo") == 0){
			if(strcmp(alimento, "onivoro") == 0){
				printf("minhoca\n");
			}	
		}
	}

	return 0;
}
