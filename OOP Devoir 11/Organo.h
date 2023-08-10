#pragma once
#include<iostream>
class Organo
{
private:
	std::string _nameOrgano="niente";
public:
	Organo(int Org);
	~Organo(){}
	std::string GetOrganoName();
	void MostraNameOrgano();

};

