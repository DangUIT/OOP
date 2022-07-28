#include"Bienche.h"
Bienche::Bienche():Canbo() {};
Bienche::~Bienche() {};
void Bienche::nhap()
{
	Canbo::nhap();
	cout << "Nhap luong co ban: ";
	cin >> luongcoban;
	cout << "Nhap he so luong: ";
	cin >> hesoluong;
	cout << "Nhap he so phu cap: ";
	cin >> hesophucap;
}
float Bienche::luongcanbo()
{
	return luongcoban * hesoluong * hesophucap;
}
void Bienche::xuat()
{
	cout << "-----------Can bo bien che--------------" << endl;
	Canbo::xuat();
	cout << "Luong co ban: " << luongcoban << endl;
	cout << "He so luong: " << hesoluong << endl;
	cout << "He so phu cap: " << hesophucap << endl;
}
void Bienche::xuatluong()
{
	cout << "Luong can bo bien che: " << luongcanbo() << endl;
}