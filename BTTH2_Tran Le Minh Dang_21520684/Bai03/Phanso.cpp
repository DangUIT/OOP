#include"Phanso.h"
#include<cmath>
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
void phanso::nhap()
{
	cin >> tuso >> mauso;
}
void phanso::rutgon()
{   
	int ucln = 1;
	int min = abs(tuso) > abs(mauso) ? abs(mauso) : abs(tuso);
	for (int i = min; i >= 1; i--)
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
	cout << tuso << "/" << mauso << endl;
}
phanso phanso::tong(phanso x)
{
	phanso kq;
	kq.tuso = tuso * x.mauso + mauso * x.tuso;
	kq.mauso = mauso * x.mauso;
	return kq;
}
int phanso::sosanh(phanso x)
{
	if (tuso * x.mauso > mauso * x.tuso)
		return 1;
	return 0;
}