#include <bits/stdc++.h>

using namespace std;
//add comentário
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
