#include"Giangvien.h"
Giangvien::Giangvien() :Nhanvien()
{
	this->sodetai = this->sotiet = 0;
}
Giangvien::~Giangvien() {};
bool Giangvien::tieuchuan()
{
	return (sotiet >= 300 && sodetai >= 5);
}
void Giangvien::nhap(istream& is)
{
	Nhanvien::nhap(is);
	cout << "Nhap so tiet giang day trong nam: ";
	cin >> sotiet;
	cout << "Nhap so de tai khoa luan: ";
	cin >> sodetai;
}
void Giangvien::xuat(ostream& os)
{
	cout << "\n---------------------Thong tin giang vien----------------------------" << endl;
	Nhanvien::xuat(os);
	cout << "So tiet giang day: " << sotiet << endl;
	cout << "So de tai khoa luan: " << sodetai << endl;
}