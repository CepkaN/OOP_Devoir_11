#include "Coda.h"
#include<iostream>
Coda::Coda(int Cod, int x):Organo(x),_quantitaCoda(Cod){}

int Coda::GetCoda()
{
	return _quantitaCoda;
}

void Coda::FunzioneCoda()
{
	if (_quantitaCoda == 0) {
		std::cout << " Таит в себе праведный гнев \n"; return;
	}
	else if (_quantitaCoda == 1) {
		std::cout << " Любит всё исследовать \n"; return;
	}
	else if (_quantitaCoda == 2) {
		std::cout << " Любит поспать \n"; return;
	}
	else {
		std::cout << " Постоянно балуется \n"; return;
	}
}
