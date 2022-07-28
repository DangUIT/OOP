#include"Bo.h"
void Bo::nhap()
{
	cout << "Nhap so bo ban dau: " << endl;
	GiaSuc::nhap();
}
void Bo::tiengbo()
{
	if (socon != 0)
	{
		cout << "bo" << " ";
	}
}
int Bo::soconsinh()
{
	tongsobo = 0;
	for (int i = 0; i < socon; i++)
	{
		tongsobo += (rand() % 10 + 1);
	}
	return tongsobo;
}
float Bo::solitsua()
{
	tonglitsuabo = 0;
	for (int i = 0; i < socon; i++)
	{
		tonglitsuabo += (rand() % 20);
	}
	return tonglitsuabo;
}
int Bo::tongbo()
{
	return tongsobo;
}
float Bo::tongsuabo()
{
	return tonglitsuabo;
}
void Bo::xuat()
{
	cout << "----------------------------------------------------" << endl;
	cout << "Thong tin ve bo:" << endl;
	GiaSuc::xuat();
	cout << "Tong so bo sau khi sinh: " << soconsinh() << endl;
	cout << "Tong so lit sua bo: " << solitsua() << endl;
	cout << "----------------------------------------------------" << endl;
}