#include"De.h"
void De::nhap()
{
	cout << "Nhap so de ban dau: " << endl;
	GiaSuc::nhap();
}
void De::tiengde()
{
	if (socon != 0)
	{
		cout << "de" << " ";
	}
}
int De::soconsinh()
{
	tongsode = 0;
	for (int i = 0; i < socon; i++)
	{
		tongsode += (rand() % 10 + 1);
	}
	return tongsode;
}
float De::solitsua()
{
	tonglitsuade = 0;
	for (int i = 0; i < socon; i++)
	{
		tonglitsuade += (rand() % 10);
	}
	return tonglitsuade;
}
int De::tongde()
{
	return tongsode;
}
float De::tongsuade()
{
	return tonglitsuade;
}
void De::xuat()
{
	cout << "Thong tin ve de: " << endl;
	GiaSuc::xuat();
	cout << "Tong so de sau khi sinh: " << soconsinh() << endl;
	cout << "Tong so lit sua de: " << solitsua() << endl;
	cout << "----------------------------------------------------" << endl;
}