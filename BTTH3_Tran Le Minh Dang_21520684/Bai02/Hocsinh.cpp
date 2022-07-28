#include"Hocsinh.h"
void hocsinh::sethoten(string hoten)
{
	this->hoten = hoten;
}
void hocsinh::setmaso(string maso)
{
	this->maso = maso;
}
void hocsinh::setsodienthoai(string sodienthoai)
{
	this->sodienthoai = sodienthoai;
}
void hocsinh::setdtb(float dtb)
{
	this->dtb = dtb;
}
string hocsinh::gethoten()
{
	return hoten;
}
string hocsinh::getmaso()
{
	return maso;
}
string hocsinh::getsodienthoai()
{
	return sodienthoai;
}
float hocsinh::getdtb()
{
	return dtb;
}
void hocsinh::xuat()
{
	cout << "Ho ten: " << gethoten() << endl;
	cout << "Ma so: " << getmaso() << endl;
	cout << "So dien thoai: " << getsodienthoai() << endl;
	cout << "Diem trung binh: " << getdtb() << endl;
}