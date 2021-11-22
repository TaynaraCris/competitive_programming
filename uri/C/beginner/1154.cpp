#include <bits/stdc++.h>

using namespace std;

int main(){

	int idade = 1, i = 0;
	float media = 0.0, total = 0.0;

	while(idade > 0){
		cin >> idade;
		if(idade < 0){
			break;
		}
		i++;
		total += idade;
	}

	std::cout << std::fixed << std::setprecision(2);

	media = total / i;
	cout << media << endl;

	return 0;
}
