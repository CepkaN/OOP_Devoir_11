#pragma once
#include "Organo.h"
#include<iostream>
class Corpo :
    virtual public Organo
{
private:
    bool _corpo;
public:
    Corpo(bool Cor,int x);
    ~Corpo(){}
    bool GetCorpo();
    void FunzioneCorpo();
};

