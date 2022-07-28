#pragma once
#include"Nhansu.h"
class Nghiencuuvien:public Nhansu
{
private:
	int soduan;
	string maduan;
	vector<string>dsmaduan;
	int soduanD;
	int sonamkinhnghiem;
public:
	void nhap();
	float luongnghiencuuvien();
	void xuat();
};
