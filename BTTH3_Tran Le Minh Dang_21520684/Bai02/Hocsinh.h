#pragma once
#include<string>
#include<iostream>
using namespace std;
class hocsinh
{ 
private:
	string hoten;
	string maso;
	string sodienthoai;
	float dtb;
public:
	void sethoten(string);
	void setmaso(string);
	void setsodienthoai(string);
	void setdtb(float);
	string gethoten();
	string getmaso();
	string getsodienthoai();
	float getdtb();
	void xuat();
};