#include"Helua.h"
Helua::Helua(){}
Helua::~Helua(){}
void Helua::nhap()
{
	cout << "Nhap thong tin Pokemon he lua: " << endl;
	Pokemon::nhap();
}
void Helua::xuat()
{
	cout << "Thong tin Pokemon he lua: " << endl;
	Pokemon::xuat();
}