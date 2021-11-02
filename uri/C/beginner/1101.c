#include <stdio.h>

int main(){

        int m, n, i;
        int soma;

        do{
		scanf("%d %d", &m ,&n);
		soma = 0;

		if(m <= 0 || n <= 0){
			break;
		}
		
		else if(m > n && m > 0 && n > 0){
			for(i = n; i <= m; i++){
				soma += i;
				printf("%d ", i);
			}
			printf("Sum=%d", soma);
		}
		else if(m < n && m > 0 && n > 0){
			for(i = m; i <= n; i++){
				soma += i;
				printf("%d ", i);
			}
			printf("Sum=%d", soma);

		}
		else if(m == n && m > 0){
			soma = m + n;
			printf("%d Sum=%d", m, soma);
		}

		printf("\n");

            }while(m > 0 && n > 0);

        return 0;
}

