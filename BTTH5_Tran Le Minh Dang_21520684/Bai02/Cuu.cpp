#include"Cuu.h"
void Cuu::nhap()
{
	cout << "Nhap so cuu ban dau: " << endl;
	GiaSuc::nhap();
}
void Cuu::tiengcuu()
{
	if (socon != 0)
	{
		cout << "cuu" << " ";
	}
}
int Cuu::soconsinh()
{
	tongsocuu = 0;
	for (int i = 0; i < socon; i++)
	{
		tongsocuu += (rand() % 10 + 1);
	}
	return tongsocuu;
}
float Cuu::solitsua()
{
	tonglitsuacuu = 0;
	for (int i = 0; i < socon; i++)
	{
		tonglitsuacuu += (rand() % 5);
	}
	return tonglitsuacuu;
}
int Cuu::tongcuu()
{
	return tongsocuu;
}
float Cuu::tongsuacuu()
{
	return tonglitsuacuu;
}
void Cuu::xuat()
{
	cout << "Thong tin ve cuu: " << endl;
	GiaSuc::xuat();
	cout << "Tong so cuu sau khi sinh: " << soconsinh() << endl;
	cout << "Tong so lit sua cuu: " << solitsua() << endl;
	cout << "----------------------------------------------------" << endl;
}