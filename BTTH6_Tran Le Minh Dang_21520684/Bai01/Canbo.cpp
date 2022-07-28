#include"Canbo.h"
Canbo::Canbo() {};
Canbo::~Canbo() {};
void Canbo::nhap()
{
	cout << "Nhap ma so can bo: ";
	getline(cin, maso);
	cout << "Nhap ho ten can bo: ";
	getline(cin, hoten);
	cout << "Nhap ngay sinh can bo: ";
	getline(cin, ngaysinh);
	cout << "Nhap luong can bo: ";
	cin >> luong;
}
void Canbo::xuat()
{
	cout << "Ma so: " << maso << endl;
	cout << "Ho ten: " << hoten << endl;
	cout << "Ngay sinh: " << ngaysinh << endl;
	cout << "Luong: " << luong << endl;
}