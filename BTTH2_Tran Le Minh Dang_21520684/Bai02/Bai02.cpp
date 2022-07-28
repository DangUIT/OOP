#include"Phanso.h"
int main()
{
	phanso a;
	a.nhap();
	a.rutgon();
	a.xuat();
	cout << endl;

	phanso b(10, 50);
	b.rutgon();
	b.xuat();
	cout << endl;

	cout << "Phan so sao chep: " << endl;
	phanso c;
	c = phanso(a);
	c.xuat();
	return 0;
}