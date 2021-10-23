#include <bits/stdc++.h>

using namespace std;

int main(){

    int quantidade, num1, num2;
    double divisao = 0;

    cin >> quantidade;

    while(quantidade > 0){
        cin >> num1 >> num2;
	if(num2 == 0){
	    cout << "divisao impossivel" << endl;
	}
	else{
	    divisao = (double) num1 / (double)num2;
	    std::cout << std::fixed;
	    std::cout << std::setprecision(1);
	    cout << divisao << endl;
	}
	quantidade--;
    }

    return 0;
}
