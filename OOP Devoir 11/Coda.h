#pragma once
#include "Organo.h"
#include<iostream>
class Coda :
    virtual public Organo
{
private:
    int _quantitaCoda;
public:
    Coda(int Cod,int x);
    ~Coda(){}
    int GetCoda();
    void FunzioneCoda();
};

