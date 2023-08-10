#include "Arto.h"
#include<iostream>

Arto::Arto(int Art,int x): _quantitaArto(Art), Organo(x) {}

int Arto::GetArto()
{
	return _quantitaArto;
}

void Arto::FunzioneArto()
{
	if (_quantitaArto == 0) {
		std::cout << " Передвигается словно ветер \n"; return;
	}
	else if (_quantitaArto % 4==0) {
		std::cout << " Уверенно стоит на ногах \n"; return;
	}
	else if (_quantitaArto == 2) {
		std::cout << " Походит на человека \n"; return;
	}
	else {
		std::cout << " Имеет загадочную траекторию движения \n"; return;
	}
}
