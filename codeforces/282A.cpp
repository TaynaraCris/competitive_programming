#include <iostream>
#include <string>

using namespace std;

int main(){

	int n, i;
	string operacao;
	int total = 0;
	
	cin >> n;

	for(i = 1; i <= n; i++){
		cin >> operacao;

		if(operacao[1] == '+'){
			++total;
		}
		else if(operacao[1] == '-'){
			--total;
		}
	}

	cout << total << endl;
			
	return 0;
}
