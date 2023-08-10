#pragma once
#include "Organo.h"
#include<iostream>
class Arto :
    virtual public Organo
{
private:
    int _quantitaArto;
public:
    Arto(int Art,int x);
    ~Arto(){}
    int GetArto();
    void FunzioneArto();
};

