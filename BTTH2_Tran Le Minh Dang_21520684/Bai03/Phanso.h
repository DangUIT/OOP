#pragma once
#include<iostream>
#include<math.h>
using namespace std;
class phanso
{
private:
	int tuso, mauso;
public:
	phanso();
	~phanso();
	void nhap();
	void xuat();
	void rutgon();
	phanso tong(phanso x);
	int sosanh(phanso x);
};
