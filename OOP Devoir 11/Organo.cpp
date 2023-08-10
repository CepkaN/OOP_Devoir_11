#include "Organo.h"
#include<iostream>
#include<ctime>
#include<cstdlib>
Organo::Organo(int Org)
{
    srand(time(NULL));
    std::string str{ "0000000" };

    char ch = 'o';
    for (int i = 0; i < str.size(); ++i) {
        ch = rand() % Org + 65;
        str[i] = ch;
    }
    _nameOrgano = str;
}

std::string Organo::GetOrganoName()
{
    return _nameOrgano;
}

void Organo::MostraNameOrgano()
{
    std::cout << " Ваше существо зовут : " << _nameOrgano << "\n\n";
}
