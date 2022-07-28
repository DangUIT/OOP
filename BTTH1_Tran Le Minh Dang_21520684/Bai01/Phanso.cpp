#include "Phanso.h"
#include<iostream>
using namespace std;
void Phanso::Nhap()
{
	cout << "Nhap tu so: ";
	cin >> tuso;
	do {
		cout << "Nhap mau so: ";
		cin >> mauso;
		if (mauso == 0)
			cout << "Khong hop le" << endl;
	} while (mauso == 0);
}
void Phanso::Xuat()
{
	cout << "Phan so la: " << tuso << "/" << mauso << endl;
	cout << "So thap phan: " << tuso * 1.0 / mauso << endl;
}
void Phanso::Cong(Phanso x)
{
	Phanso ketqua;
	ketqua.tuso = x.tuso * mauso + x.mauso * tuso;
	ketqua.mauso = x.mauso * mauso;
	*this = ketqua;
}
void Phanso::Tru(Phanso x)
{
	Phanso ketqua;
	ketqua.tuso = -x.tuso * mauso + x.mauso * tuso;
	ketqua.mauso = x.mauso * mauso;
	*this = ketqua;
}
void Phanso::Nhan(Phanso x)
{
	Phanso ketqua;
	ketqua.tuso = x.tuso * tuso;
	ketqua.mauso = x.mauso * mauso;
	*this = ketqua;
}
void Phanso::Chia(Phanso x)
{
	Phanso ketqua;
	ketqua.tuso = tuso * x.mauso;
	ketqua.mauso = mauso * x.tuso;
	*this = ketqua;
}
void Phanso::Rutgon()
{
	int a;
	for (int i = min(abs(tuso), abs(mauso)); i >= 1; i--)
	{
		if (tuso % i == 0 && mauso % i == 0)
		{
			a = i;
			break;
		}
	}
	tuso /= a;
	mauso /= a;
}