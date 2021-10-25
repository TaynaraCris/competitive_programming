#include <bits/stdc++.h>

using namespace std;

double media(double primeiro, double segundo){
	double med = 0;

	med = (primeiro + segundo) / 2.0;

	return med;
}

int main(){

	double notafinal = 0, nota1 = -1, nota2 = -1;
	
	while(nota1 < 0 || nota1 > 10){
		cin >> nota1;
			if(nota1 < 0 || nota1 > 10){
				cout << "nota invalida" << endl;
			}
			else if(nota1 >= 0 && nota1 <= 10){
				nota1 = nota1;
				break;
			}
	}

	while(nota2 < 0 || nota2 > 10){
		cin >> nota2;
			if(nota2 < 0 || nota2 > 10){
				cout << "nota invalida" << endl;
			}
			else if(nota2 >= 0 && nota2 <= 10){
				nota2 = nota2;
				break;
			}
	}

	notafinal = media(nota1, nota2);

	std::cout << std::fixed;
	std::cout << std::setprecision(2);

	cout << "media = " << notafinal << endl;

	return 0;
}
