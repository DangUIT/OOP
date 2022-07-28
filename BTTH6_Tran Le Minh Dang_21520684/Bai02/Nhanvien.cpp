#include"Nhanvien.h"
Nhanvien::Nhanvien()
{
	this->manv = this->hoten = this->ngaysinh = '0';
}
Nhanvien::~Nhanvien() {};
void Nhanvien::nhap(istream&is)
{
	cout << "Nhap ma nhan vien: ";
	getline(cin, manv);
	cout << "Nhap ho ten nhan vien: ";
	getline(cin, hoten);
	cout << "Nhap ngay thang nam sinh: ";
	getline(cin, ngaysinh);
}
void Nhanvien::xuat(ostream&os)
{
	cout << "Ma nhan vien: " << manv << endl;
	cout << "Ho ten nhan vien: " << hoten << endl;
	cout << "Ngay thang nam sinh: " << ngaysinh << endl;
}
