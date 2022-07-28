#include"Hopdong.h"
Hopdong::Hopdong():Canbo() {};
Hopdong::~Hopdong() {};
void Hopdong::nhap()
{
	Canbo::nhap();
	cout << "Nhap tien cong: ";
	cin >> tiencong;
	cout << "Nhap so ngay cong: ";
	cin >> songaycong;
	cout << "Nhap he so vuot gio: ";
	cin >> hesovuotgio;
}
float Hopdong::luongcanbo()
{
	return tiencong * songaycong * hesovuotgio;
}
void Hopdong::xuat()
{
	cout << "-----------Can bo hop dong--------------" << endl;
	Canbo::xuat();
	cout << "Tien cong: " << tiencong << endl;
	cout << "So ngay cong: " << songaycong << endl;
	cout << "He so vuot gio: " << hesovuotgio << endl;
}
void Hopdong::xuatluong()
{
	cout << "Luong can bo hop dong: " << luongcanbo() << endl;
}