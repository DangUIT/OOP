#pragma once
#include"Canbo.h"
using namespace std;
class Bienche :public Canbo
{
private:
	float luongcoban;
	float hesoluong;
	float hesophucap;
public:
	Bienche();
	~Bienche();
	void nhap();
	float luongcanbo();
	void xuat();
	void xuatluong();
};