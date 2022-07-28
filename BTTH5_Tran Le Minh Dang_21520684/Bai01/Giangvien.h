#pragma once
#include"Nhansu.h"
class Giangvien :public Nhansu
{
private:
	string hocham;
	string hocvi;
	int sonamgiangday;
	int somonhoc;
	string monhoc;
	vector<string>dsmonhoc;
public:
	void nhap();
	float luonggiangvien();
	void xuat();
};
