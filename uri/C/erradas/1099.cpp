#include <bits/stdc++.h>

using namespace std;

int main(){

    int qtd, i, j, soma = 0;
    int num1, num2;

    cin >> qtd;

    for(i = 0; i < qtd; i++){
	cin >> num1;
	cin >> num2;
	if(num1 > num2){
	    for(j = num2; j <= num1; j++){
		if(j % 2 != 0){
		    soma += j;
		}
	     }
	  cout << soma << endl;
	  }
    }

    return 0;
}
