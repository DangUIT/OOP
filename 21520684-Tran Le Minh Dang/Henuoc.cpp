#include"Henuoc.h"
Henuoc::Henuoc(){}
Henuoc::~Henuoc(){}
void Henuoc::nhap()
{
	cout << "Nhap thong tin Pokemon he nuoc: " << endl;
	Pokemon::nhap();
}
void Henuoc::xuat()
{
	cout << "Thong tin Pokemon he nuoc: " << endl;
	Pokemon::xuat();
}
