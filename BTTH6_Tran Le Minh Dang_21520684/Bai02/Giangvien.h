#pragma once
#include"Nhanvien.h"
class Giangvien :public Nhanvien
{
private:
	int sotiet;
	int sodetai;
public:
	Giangvien();
	~Giangvien();
	bool tieuchuan();
	void nhap(istream& is);
	void xuat(ostream& os);
};
