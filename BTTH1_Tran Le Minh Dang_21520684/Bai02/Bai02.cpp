#include<iostream>
#include"Sophuc.h"
using namespace std;
int main()
{
	sophuc a, b, c;
	sophuc x;
	cout << "Nhap so phuc X: " << endl;
	x.nhap();
	x.xuat();
	cout << "\nNhap so phuc A: " << endl;
	a.nhap();
	a.xuat();
	cout << "\nNhap so phuc B: " << endl;
	b.nhap();
	b.xuat();
	cout << "\nTong 2 so phuc: " << endl;
	c = a;
	c.cong(b);
	c.xuat();
	cout << "\nHieu 2 so phuc: " << endl;
	c = a;
	c.tru(b);
	c.xuat(); 
	cout << "\nTich 2 so phuc: " << endl;
	c = a;
	c.nhan(b);
	c.xuat(); 
	cout << "\nThuong 2 so phuc: " << endl;
	c = a;
	c.chia(b);
	c.xuat();
	return 0;
}