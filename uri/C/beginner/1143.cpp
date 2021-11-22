#include <bits/stdc++.h>

using namespace std;

int main(){

	int linhas, i = 1;

	cin >> linhas;

	while(linhas > 0){
		cout << i << " " << pow(i, 2) << " " << pow(i, 3) << endl;

		linhas--;
		i++;
	}
		

	return 0;
}
