#pragma once
#include"Giasuc.h"
class Cuu :public GiaSuc
{
private:
	int tongsocuu;
	float tonglitsuacuu;

public:
	void nhap();
	void tiengcuu();
	int soconsinh();
	float solitsua();
	int tongcuu();
	float tongsuacuu();
	void xuat();
};
