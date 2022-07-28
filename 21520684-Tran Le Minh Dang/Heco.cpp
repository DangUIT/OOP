#include"Heco.h"
Heco::Heco(){}
Heco::~Heco(){}
void Heco::nhap()
{
	cout << "Nhap thong tin Pokemon he co: " << endl;
	Pokemon::nhap();
}
void Heco::xuat()
{
	cout << "Thong tin Pokemon he co: " << endl;
	Pokemon::xuat();
}