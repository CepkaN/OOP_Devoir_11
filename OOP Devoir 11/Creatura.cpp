#include "Creatura.h"
#include<iostream>
#include<ctime>
#include<cstdlib>

Creatura::Creatura(int x, int a, int b, bool c, int d):Arto(a,x),Testa(b,x),Corpo(c,x),Coda(d,x),Organo(x) {

	srand(time(NULL));
	int Cr = rand() % 70 + 20;
	_Creat = Cr;
}

int Creatura::GetCreatura()
{
	return _Creat;
}

void Creatura::FunzioneCreatura()
{
	if (_Creat > 20 && _Creat < 30) {
		std::cout << " Ваше существо принадлежит огненной стихии \n"; return;
	}
	else if (_Creat > 30 && _Creat < 40) {
		std::cout<< " Ваше существо принадлежит водной стихии \n"; return;
	}
	else if (_Creat > 40 && _Creat < 50) {
		std::cout << " Ваше существо принадлежит стихии земли \n"; return;
	}
	else if (_Creat > 50 && _Creat < 60) {
		std::cout << " Ваше существо принадлежит стихии воздуха \n"; return;
	}
	else {
		std::cout << " Ваше существо представляет собой квинтесенцию всех стихий \n"; return;
	}
}



