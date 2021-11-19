#include <bits/stdc++.h>

using namespace std;

int main(){

	int numero, i;

	do{
		cin >> numero;
		
		if(numero == 0){
			break;
		}
		for(i = 1; i < numero; i++){
			cout << i << " ";
		}
		cout << numero << endl;
	}while(numero != 0);

	return 0;
}
