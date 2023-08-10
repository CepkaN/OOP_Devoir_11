#pragma once
#include "Organo.h"
#include<iostream>
class Testa :
    virtual public Organo
{
private:
    int _quantitaTesta;
public:
    Testa(int Tes,int x);
    ~Testa(){}
    int GetTesta();
    void FunzioneTesta();
};

