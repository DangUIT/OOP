#pragma once
#include"Nhanvien.h"
class Nhanvienvanphong :public Nhanvien
{
private:
	int solop;
	int sogiolaodong;
public:
	Nhanvienvanphong();
	~Nhanvienvanphong();
	bool tieuchuan();
	void nhap(istream& is);
	void xuat(ostream& os);
};
