#include"diem.h";
#include<iostream>
using namespace std;
int main()
{
	diem x, y, z;
	x.nhap();
	cout << "Toa do diem A";
	x.xuat();
	cout << endl;
	y.nhap();
	cout << endl;
	z.nhap();
	cout << endl;
	cout << "Khoang cach 2 diem: " << y.khoangcach(z);
	return 0;
}