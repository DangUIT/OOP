#pragma once
#include"Giasuc.h"
class De :public GiaSuc
{
private:
	int tongsode;
	float tonglitsuade;

public:
	void nhap();
	void tiengde();
	int soconsinh();
	float solitsua();
	int tongde();
	float tongsuade();
	void xuat();
};
