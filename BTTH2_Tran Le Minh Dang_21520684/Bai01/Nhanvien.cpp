#include"Nhanvien.h"
string nhanvien::get_hoten()
{
	return ho_ten;
}
unsigned short int nhanvien::get_songay()
{
	return so_ngay;
}
string nhanvien::get_maso()
{
	return ma_so;
}
string nhanvien::get_chucdanh()
{
	return chuc_danh;
}
float nhanvien::get_hesoluong()
{
	return he_so_luong;
}
void nhanvien::set_hoten(string ho_ten)
{
	this->ho_ten = ho_ten;
}
void nhanvien::set_songay(unsigned short int so_ngay)
{
	this->so_ngay = so_ngay;
}
void nhanvien::set_maso(string ma_so)
{
	this->ma_so = ma_so;
}
void nhanvien::set_chucdanh(string chuc_danh)
{
	this->chuc_danh = chuc_danh;
}
void nhanvien::set_hesoluong(float he_so_luong)
{
	this->he_so_luong = he_so_luong;
}
nhanvien::nhanvien(string hoten, unsigned short int songay, string maso, string chucdanh, float hesoluong)
{
	this->ho_ten = hoten;
	this->so_ngay = songay;
	this->ma_so = maso;
	this->chuc_danh = chucdanh;
	this->he_so_luong = hesoluong;
}
nhanvien::nhanvien(string hoten, unsigned int songay)
{
	this->ho_ten = hoten;
	this->so_ngay = songay;
	string songay1 = to_string(songay);
	this->ma_so = songay1 + ho_ten;
	if (so_ngay >= 0 && so_ngay < 365)
		this->chuc_danh = "nhan vien";
	else if (so_ngay >= 365 && so_ngay < 730)
		this->chuc_danh = "quan li";
	else if (so_ngay >= 730 && so_ngay < 1460)
		this->chuc_danh = "truong phong";
	else if (so_ngay >= 1460)
		this->chuc_danh = "truong ban quan li";
	if (chuc_danh == "nhan vien")
		this->he_so_luong = 1;
	else if (chuc_danh == "quan li")
		this->he_so_luong = 1.5;
	else if (chuc_danh == "truong phong")
		this->he_so_luong = 2.25;
	else if (chuc_danh == "truong ban quan li")
		this->he_so_luong = 4.0;
}
nhanvien::nhanvien(const nhanvien& a)
{
	so_ngay = a.so_ngay;
	chuc_danh = a.chuc_danh;
	he_so_luong = a.he_so_luong;
	this->ho_ten = ho_ten;
	this->ma_so = ma_so;
}
nhanvien::nhanvien() {};
nhanvien::~nhanvien()
{
	ho_ten = ma_so = chuc_danh = "";
	so_ngay = 0;
	he_so_luong = 0;
};
void nhanvien::nhap()
{
	cout << "Nhap ho ten: ";
	getline(cin, ho_ten);
	cout << "Nhap so ngay lam viec: ";
	cin >> so_ngay;
	cin.ignore();
	cout << "Nhap ma so: ";
	getline(cin, ma_so);
	cout << "Nhap chuc danh: ";
	getline(cin, chuc_danh);
	cout << "Nhap he so luong: ";
	cin >> he_so_luong;
	cin.ignore();
}
void nhanvien::xuat()
{
	cout << "Ho ten: " << get_hoten() << endl;
	cout << "So ngay lam viec: " << get_songay() << endl;
	cout << "Ma so: " << get_maso() << endl;
	cout << "Chuc danh: " << get_chucdanh() << endl;
	cout << "He so luong: " << get_hesoluong() << endl;
}