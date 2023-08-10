#pragma once
#include<iostream>
#include "Arto.h"
#include "Testa.h"
#include "Corpo.h"
#include "Coda.h"
class Creatura :
    public Arto,public Testa,public Corpo, public Coda
{
private:
    int _Creat = 0;
public:
    Creatura(int x,int a,int b,bool c,int d);
    ~Creatura(){}
    int GetCreatura();
    void FunzioneCreatura();
};

