#include"Trogiang.h"
void Trogiang::nhap()
{
	Nhansu::nhap();
	cout << "Nhap so mon tro giang: ";
	cin >> somontrogiang;
}
float Trogiang::luongtrogiang()
{
	return (somontrogiang * 0.3) * 18000;
}
void Trogiang::xuat()
{
	cout << "-------------------------------------------" << endl;
	cout << "Thong tin tro giang: " << endl;
	Nhansu::xuat();
	cout << "So mon tro giang: " << somontrogiang << endl;
	cout << "Luong tro giang: " << luongtrogiang() << endl;
	cout << "-------------------------------------------" << endl;
}