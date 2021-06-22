#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

	int n, i, j, num;
	char palavra[1000];

	scanf("%d", &n);

	for(i = 0; i < n; i++){
		scanf("%s", palavra);

		if(strlen(palavra) <= 10){
			printf("%s\n", palavra);
		}
		else if(strlen(palavra)  > 10){
			num = strlen(palavra) - 2;
			printf("%c%d%c\n", palavra[0], num, palavra[num + 1]);
		}
	}


	return 0;
}
