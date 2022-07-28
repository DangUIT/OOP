#include"Hocsinh.h"
int main()
{
	hocsinh a;
	a.nhapHoten();
	a.nhapMaso();
	a.nhapSdt();
	a.nhapDtb();
	cout << "-----------------------" << endl;
	cout << "Kiem tra tinh hop le" << endl;
	a.kiemtraHoten();
	a.kiemtraMaso();
	a.kiemtraSdt();
	a.kiemtraDtb();
	a.xuat();
	return 0;
}