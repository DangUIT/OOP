#pragma once
#include"Giasuc.h"
class Bo :public GiaSuc
{
private:
	int tongsobo;
	float tonglitsuabo;

public:
	void nhap();
	void tiengbo();
	int soconsinh();
	float solitsua();
	int tongbo();
	float tongsuabo();
	void xuat();
};
