#include <bits/stdc++.h>

using namespace std;

int main(){

	int x, y, contador;

	cin >> x;
	cin >> y;

	if(x > y){
		for(contador = y + 1; contador < x; contador++){
			if(contador % 5 == 2 || contador % 5 == 3){
				cout << contador << endl;
			}
		}
	}

	else if(y > x){
		for(contador = x + 1; contador < y; contador++){
			if(contador % 5 == 2|| contador % 5 == 3){
				cout << contador << endl;
			}
		}
	}

	return 0;
}
