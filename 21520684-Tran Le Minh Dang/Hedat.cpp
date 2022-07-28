#include"Hedat.h"
Hedat::Hedat(){}
Hedat::~Hedat(){}
void Hedat::nhap()
{
	cout << "Nhap thong tin Pokemon he dat: " << endl;
	Pokemon::nhap();
}
void Hedat::xuat()
{
	cout << "Thong tin Pokemon he dat: " << endl;
	Pokemon::xuat();
}