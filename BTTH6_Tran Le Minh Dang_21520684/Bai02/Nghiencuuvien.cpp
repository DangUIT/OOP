#include"Nghiencuuvien.h"
Nghiencuuvien::Nghiencuuvien() :Nhanvien()
{
	this->sobaibao = this->sodetai = 0;
}
Nghiencuuvien::~Nghiencuuvien() {};
bool Nghiencuuvien::tieuchuan()
{
	return(sodetai >= 1 && sobaibao >= 2);
}
void Nghiencuuvien::nhap(istream& is)
{
	Nhanvien::nhap(is);
	cout << "Nhap so de tai nghien cuu: ";
	cin >> sodetai;
	cout << "Nhap so bai bao khoa hoc: ";
	cin >> sobaibao;
}
void Nghiencuuvien::xuat(ostream& os)
{
	cout << "\n---------------------Thong tin nghien cuu vien----------------------------" << endl;
	Nhanvien::xuat(os);
	cout << "So de tai nghien cuu: " << sodetai << endl;
	cout << "So bai bao khoa hoc: " << sobaibao << endl;
}