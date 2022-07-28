#pragma once
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Pokemon
{
protected:
	string ten;
	string he;
	float hp;
	float dame;
public:
	Pokemon();
	~Pokemon();
	float getHp();
	string getName();
	virtual void nhap();
	virtual void xuat();
	bool khacHe(Pokemon&);
	bool operator>(Pokemon&);
	float dameKhacHe(Pokemon&);
	void attack(Pokemon*(&pk));
};
