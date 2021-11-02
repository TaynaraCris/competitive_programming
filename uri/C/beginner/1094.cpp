#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main(){

	int n, numero = 0; //n: número de casos de teste que serão realizados
	int quantia; //entre um e quinze
	string tipo; // rato, sapo ou coelho
	int coelho = 0, sapo = 0, rato = 0;
	int total = 0;

	cin >> n;

	while(n > 0){
		cin >> numero;
	       	cin >> tipo;
		
		if(tipo[0] == 'C'){
			coelho += numero;
		}
		else if(tipo[0] == 'S'){
			sapo += numero;
		}
		else if(tipo[0] == 'R'){
		rato += numero;
		}	

		n--;
	}

	total = coelho + rato + sapo;

	cout << "Total: " << total << " cobaias" << endl;
	cout << "Total de coelhos: " << coelho << endl;
	cout << "Total de ratos: " << rato << endl;
	cout << "Total de sapos: " << sapo << endl;
	cout << fixed << setprecision(2);
	cout << "Percentual de coelhos: " << coelho * 100.0 / total << " %" << endl;
	cout << "Percentual de ratos: " << rato * 100.0 / total << " %" << endl;
	cout << "Percentual de sapos: " << sapo * 100.0 / total << " %" << endl;

	return 0;
}
