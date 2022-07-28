#include"Phanso.h"
phanso::phanso()
{
	tuso = 0;
	mauso = 1;
}
phanso::~phanso()
{
	tuso = 0;
	mauso = 1;
}
phanso::phanso(const phanso& a)
{
	tuso = a.tuso;
	mauso = a.mauso;
}
phanso::phanso(int tuso, int mauso)
{
	this->tuso = tuso;
	this->mauso = mauso;
}
void phanso::nhap()
{
	cout << "Nhap tu so: ";
	cin >> tuso;
	cout << "Nhap mau so: ";
	cin >> mauso;
}
void phanso::rutgon()
{
	int ucln = 1;
	for (int i = min(abs(tuso), abs(mauso)); i >= 1; i--)
	{
		if (tuso % i == 0 && mauso % i == 0) {
			ucln = i;
			break;
		}
	}
	tuso = tuso / ucln;
	mauso = mauso / ucln;
}
void phanso::xuat()
{
	if (mauso < 0)
	{
		mauso *= -1;
		tuso *= -1;
	}
	cout << "Phan so: " << tuso << "/" << mauso << endl;
}