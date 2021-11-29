#include <bits/stdc++.h>

using namespace std;

int main(){

	int casos, primeiro, segundo, i, soma;
	int aux, segaux;

	cin >> casos;

	while(casos > 0){
		cin >> primeiro >> segundo;

		aux = primeiro;
		segaux = primeiro + 1;

		if(primeiro % 2 != 0){
			soma = 0;
			for(i = 1; i<= segundo; i++){
				soma += aux;
				aux += 2;
			}
		}
		else if(primeiro % 2 == 0){
			soma = 0;
			for(i = 1; i<= segundo; i++){
				soma += segaux;
				segaux += 2;
			}
		}
		cout << soma << endl;
		casos--;
	}

	return 0;
}
