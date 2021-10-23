#include <iostream>

using namespace std;

int main(){

	int t;
	int i, j = 0;
	cin >> t;
	
	for(i = 0; i < 1000; i++){
		if(j < t){
			j++;
		}
		if(j == t){
			j = 0;
		}
		cout << "N[" << i << "] = " << j << endl;
	}
	

	return 0;
}
