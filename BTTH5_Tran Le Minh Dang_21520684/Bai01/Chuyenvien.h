#pragma once
#include"Nhansu.h"
class Chuyenvien :public Nhansu
{
private:
	int soduan;
	string maduan;
	vector<string>dsmaduan;
	int soduanT;
	int sonamkinhnghiem;
public:
	void nhap();
	float luongchuyenvien();
	void xuat();
};