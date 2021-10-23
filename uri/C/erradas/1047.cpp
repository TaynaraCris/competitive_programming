#include <bits/stdc++.h>

using namespace std;

int main(){

    int horaInicial, minInicial, horaFinal, minFinal;
    int horas = 0, minutos = 0, dif = 0;

    cin >> horaInicial;
    cin >> minInicial;
    cin >> horaFinal;
    cin >> minFinal;

    dif = horaInicial - horaFinal;

    if(horaInicial == horaFinal && minInicial == minFinal){
	cout << "O JOGO DUROU " << 24 << " HORA(S) E " << 0 << " MINUTO(S)" << endl;
    }
    else if(dif == 1){
	if(minInicial == minFinal){
	     horas = 1;
	     minutos = 0;
	}
	else if(minInicial > minFinal){
	    horas = 1;
	    minutos = (60 - minInicial) + minFinal;
	}
	else if(minInicial < minFinal){
	    horas = 1;
	    minutos = minFinal - minInicial;
	}
	cout << "O JOGO DUROU " << horas << " HORA(S) E " << minutos << " MINUTO(S)" << endl;
    }
    else if(horaInicial == horaFinal && minInicial != minFinal){
	horas = 0;
	minutos = minFinal - minInicial;
	if(minutos < 0){
	    return 0;
	}
	cout << "O JOGO DUROU " << horas << " HORA(S) E " << minutos << " MINUTO(S)" << endl;
    }
    else if(horaInicial != horaFinal && minInicial == minFinal){
	if(horaInicial > horaFinal){
	    horas = (24 - horaInicial) + horaFinal;
	}
	else{
	    horas = horaFinal - horaInicial;
	}
	minutos = 0;
	cout << "O JOGO DUROU " << horas << " HORA(S) E " << minutos << " MINUTO(S)" << endl;
    }
    else if(horaInicial < horaFinal && minInicial < minFinal){
	horas = horaFinal - horaInicial;
	minutos = minFinal - minInicial;
	cout << "O JOGO DUROU " << horas << " HORA(S) E " << minutos << " MINUTO(S)" << endl;
    }
    else if(horaInicial > horaFinal && minInicial < minFinal){
	horas = (24 - horaInicial) + horaFinal;
	minutos = minFinal - minInicial;
	cout << "O JOGO DUROU " << horas << " HORA(S) E " << minutos << " MINUTO(S)" << endl;
    }
    else if(horaInicial < horaFinal && minInicial > minFinal){
	horas = horaFinal - horaInicial - 1;
	minutos = (60 - minInicial) + minFinal;
	cout << "O JOGO DUROU " << horas << " HORA(S) E " << minutos << " MINUTO(S)" << endl;
    }
    else if(horaInicial > horaFinal && minInicial > minFinal){
	horas = (24 - horaInicial) + horaFinal;
	minutos = (60 - minInicial) + minFinal;
	cout << "O JOGO DUROU " << horas << " HORA(S) E " << minutos << " MINUTO(S)" << endl;
    }

    return 0;
}
