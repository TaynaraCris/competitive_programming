#include <bits/stdc++.h>

using namespace std;

int main(){

	int valor, i, par;

	do{

		cin >> valor;
		par = 0;

		if(valor == 0){
			break;
		}

		else if( valor % 2 == 0){
			for(i = valor; i <= valor + 8; i += 2){
				par += i;
			}
			cout << par << endl;
		}
		else{
			for(i = valor + 1; i <= valor + 9; i += 2){
				par += i;
			}
			cout << par << endl;
		}

	}while(valor != 0);

	return 0;
}
