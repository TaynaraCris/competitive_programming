#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, x, y;
    int impar = 0, soma = 0, i, aux;

    cin >> n;

    for(i = 0; i < n; i++){
        cin >> x >> y;
        soma = 0;
        
        if(x > y){
            for(aux = y + 1; aux < x; aux++){
                if(aux % 2 != 0){
                    soma += aux;
                }
            }
            cout << soma << endl;
        }
        else{
            for(aux = x + 1; aux < y; aux++){
                if(aux % 2 != 0){
                    soma += aux;
                }
            }
            cout << soma << endl;
        }
    }

    return 0;
}
