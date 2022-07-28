#pragma once
#include<iostream>
#include<stdlib.h>
#include<string>
using namespace std;
class hocsinh
{
private:
	string hoten;
	string maso;
	string sdt;
	float dtb;
public:
	void nhapHoten();
	void nhapMaso();
	void nhapSdt();
	void nhapDtb();
	void kiemtraHoten();
	void kiemtraMaso();
	void kiemtraSdt();
	void kiemtraDtb();
	void xuat();
};