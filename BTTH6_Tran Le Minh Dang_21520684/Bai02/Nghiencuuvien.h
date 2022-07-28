#pragma once
#include"Nhanvien.h"
class Nghiencuuvien :public Nhanvien
{
private:
	int sodetai;
	int sobaibao;
public:
	Nghiencuuvien();
	~Nghiencuuvien();
	bool tieuchuan();
	void nhap(istream& is);
	void xuat(ostream& os);
};
