#include "Corpo.h"
#include<iostream>

Corpo::Corpo(bool Cor, int x):Organo(x),_corpo(Cor){}

bool Corpo::GetCorpo()
{
	return _corpo;
}

void Corpo::FunzioneCorpo()
{
	if (_corpo) {
		std::cout << " Изредка выходит к людям \n"; return;
	}
	else {
		std::cout << " О нём знаете только Вы \n"; return;
	}
}
