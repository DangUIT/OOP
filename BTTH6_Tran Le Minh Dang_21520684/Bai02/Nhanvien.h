#pragma once
#include<iostream>
#include<string>
using namespace std;
class Nhanvien
{
protected:
	string manv;
	string hoten;
	string ngaysinh;
public:
	Nhanvien();
	virtual ~Nhanvien();
	virtual bool tieuchuan() = 0;
	virtual void nhap(istream& is);
	virtual void xuat(ostream& is);
};
