#include "Phanso.h"
#include <iostream>
using namespace std;
int main()
{
	Phanso x, a, b, c;
	cout << "Phan so X: " << endl;
	x.Nhap();
	x.Xuat();
	cout << "\nPhan so A: " << endl;
	a.Nhap();
	a.Xuat();
	cout << "\nPhan so B: " << endl;
	b.Nhap();
	b.Xuat();
	cout << "\nTong 2 phan so A va B: " << endl;
	c = a;
	c.Cong(b);
	c.Rutgon();
	c.Xuat();
	cout << "\nHieu 2 phan so A va B: " << endl;
	c = a;
	c.Tru(b);
	c.Rutgon();
	c.Xuat(); 
	cout << "\nTich 2 phan so A va B: " << endl;
	c = a;
	c.Nhan(b);
	c.Rutgon();
	c.Xuat(); 
	cout << "\nThuong 2 phan so A va B: " << endl;
	c = a;
	c.Chia(b);
	c.Rutgon();
	c.Xuat();
	return 0;
}