#pragma once
#include<iostream>
#include<string>
using namespace std;
class nhanvien
{
private:
	string ho_ten;
	unsigned short int so_ngay;
	string ma_so;
	string chuc_danh;
	float he_so_luong;
public:
	string get_hoten();
	unsigned short int get_songay();
	string get_maso();
	string get_chucdanh();
	float get_hesoluong();
	void set_hoten(string ho_ten);
	void set_songay(unsigned short int so_ngay);
	void set_maso(string ma_so);
	void set_chucdanh(string chuc_danh);
	void set_hesoluong(float he_so_luong);
	nhanvien();
	nhanvien(string ho_ten, unsigned short int so_ngay, string ma_so, string chuc_danh, float he_so_luong);
	nhanvien(string ho_ten, unsigned int so_ngay);
	nhanvien(const nhanvien&);
	~nhanvien();
	void nhap();
	void xuat();
};