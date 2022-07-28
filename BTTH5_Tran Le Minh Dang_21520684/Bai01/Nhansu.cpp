#include"Nhansu.h"
void Nhansu::nhap()
{
	cout << "Nhap ho ten: ";
	getline(cin, hoten);
	cout << "Nhap ngay thang nam sinh: ";
	getline(cin, ngaysinh);
	cout << "Nhap ma so nhan su: ";
	getline(cin, maso);
}
void Nhansu::xuat()
{
	cout << "Ho ten: " << hoten << endl;
	cout << "Ngay thang nam sinh: " << ngaysinh << endl;
	cout << "Ma so nhan su: " << maso << endl;
}