#include <iostream>
#include <string>

using namespace std;

int main(){

	int n, i, contador = 0;
	cin >> n;

	while(n > 0){
		for(i = 1; i < 4; i++){
			contador += 1;
			cout << contador << " ";
		}
		cout << "PUM";

		contador++;

		printf("\n");
		
		n--;
	}

	return 0;
}
