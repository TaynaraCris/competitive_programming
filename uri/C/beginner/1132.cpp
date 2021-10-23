#include <iostream>

using namespace std;

int main(){

	int x, y;
	int i, j, resto = 0, soma = 0;

	cin >> x;
	cin >> y;

	if(x > y){
		for(i = y; i <= x; i++){
			resto = i % 13;
			if(resto != 0){
				soma += i;
			}
		}
		cout << soma << endl;
	}

	
	else if(y > x){
		for(j = x; j <= y; j++){
			resto = j % 13;
			if(resto != 0){
				soma += j;
			}
		}
		cout << soma << endl;
	}

	return 0;
}
