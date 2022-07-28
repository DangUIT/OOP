#pragma once
#include"Canbo.h"
class Hopdong :public Canbo
{
private:
	float tiencong;
	float songaycong;
	float hesovuotgio;
public:
	Hopdong();
	~Hopdong();
	void nhap();
	float luongcanbo();
	void xuat();
	void xuatluong();
};