#include <bits/stdc++.h>

using namespace std;
//mudando de novo
int main(){

	int copa;

	while(cin >> copa){
		if(copa == 0){
			cout << "vai ter copa!" << endl;
		}
		else if(copa > 0){
			cout << "vai ter duas!" << endl;
		}
		else{
			break;
		}
	}

	return 0;
}
