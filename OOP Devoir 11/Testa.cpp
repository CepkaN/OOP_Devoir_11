#include "Testa.h"
#include<iostream>

Testa::Testa(int Tes, int x):Organo(x),_quantitaTesta(Tes){}

int Testa::GetTesta()
{
	return _quantitaTesta;
}

void Testa::FunzioneTesta()
{
	if (_quantitaTesta == 0) {
		std::cout << " Совсем безбашенный \n"; return;
	}
	else if (_quantitaTesta == 1) {
		std::cout << " Имеет пытливый ум \n"; return;
	}
	else if (_quantitaTesta == 2) {
		std::cout << " Склонен к дискуссиям \n"; return;
	}
	else {
		std::cout << " Не в ладу с собой \n"; return;
	}
}
