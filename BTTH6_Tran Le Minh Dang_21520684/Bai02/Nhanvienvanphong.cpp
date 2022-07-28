#include"Nhanvienvanphong.h"
Nhanvienvanphong::Nhanvienvanphong() :Nhanvien()
{
	this->solop = this->sogiolaodong = 0;
}
Nhanvienvanphong::~Nhanvienvanphong() {};
bool Nhanvienvanphong::tieuchuan()
{
	return (solop >= 1 && sogiolaodong >= 20);
}
void Nhanvienvanphong::nhap(istream& is)
{
	Nhanvien::nhap(is);
	cout << "Nhap so luong lop boi duong chuyen mon: ";
	cin >> solop;
	cout << "Nhap so gio lao dong cong ich: ";
	cin >> sogiolaodong;
}
void Nhanvienvanphong::xuat(ostream& os)
{
	cout << "\n---------------------Thong tin nhan vien van phong----------------------------" << endl;
	Nhanvien::xuat(os);
	cout << "So luong lop boi duong chuyen mon: " << solop << endl;
	cout << "So gio lao dong cong ich: " << sogiolaodong << endl;
}