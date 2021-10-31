#include <stdio.h>

int main()
{

	double N1, N2, N3, N4, a, b, c, d, media, exame, mediaE;

	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

	N1 = 2 * a;
	N2 = 3 * b;
	N3 = 4 * c;
	N4 = 1 * d;

	media = (N1 + N2 + N3 + N4)/10;
	
	printf("Media: %.1lf\n", media);

	if(media >= 7){
		printf("Aluno aprovado.\n");
	}

	if(media < 5){
		printf("Aluno reprovado.\n");
	}

	if(media >= 5 && media < 7){
		printf("Aluno em exame.\n");
		scanf("%lf", &exame);
		printf("Nota do exame: %.1lf\n", exame);
		mediaE = (media + exame)/2;
		if(mediaE >= 5){
		printf("Aluno aprovado.\n");
		}
		if(mediaE < 5){
			printf("Aluno reprovado.\n");
		}
		printf("Media final: %.1lf\n", mediaE);
	}


	return 0;
}
