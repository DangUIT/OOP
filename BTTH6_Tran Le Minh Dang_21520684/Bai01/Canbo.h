#pragma once
#include<iostream>
#include<string>
using namespace std;
class Canbo
{
protected:
	string maso;
	string hoten;
	string ngaysinh;
	float luong;
public:
	Canbo();
	virtual ~Canbo();
	virtual float luongcanbo() = 0;
	virtual void nhap();
	virtual void xuat();
	virtual void xuatluong() = 0;
};
