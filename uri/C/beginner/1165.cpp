#include <bits/stdc++.h>

using namespace std;

bool primo(int n){
    if(n < 2){
	return false;
    }
    if(n == 2){
	return true;
    }
    if(n % 2 == 0){
	return false;
    }
    for(int i = 3; i * i <= n; i += 2){
	if(n % i == 0){
	    return false;
	}
    }
    return true;
}

int main(){

    int quantidade, i, n;
    bool  eprimo;

    cin >> quantidade;
    
    while(quantidade > 0){
	cin >> n;
    	eprimo = primo(n);
	quantidade--;
	if(eprimo == false){
	    cout << n << " nao eh primo" << endl;
	}
	else{
	    cout << n << " eh primo" << endl;
	}
    }

    return 0;
}
