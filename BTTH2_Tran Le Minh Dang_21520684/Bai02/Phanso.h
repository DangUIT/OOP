#pragma once
#include<iostream>
#include<math.h>
using namespace std;
class phanso
{
private:
	int tuso;
	int mauso;
public:
	phanso();
	phanso(int tuso, int mauso);
	phanso(const phanso&);
	~phanso();
	void nhap();
	void rutgon();
	void xuat();

};
