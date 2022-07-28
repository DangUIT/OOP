#include"Bo.h"
#include"Cuu.h"
#include"De.h"
int main()
{
	Bo bo;
	bo.nhap();
	Cuu cuu;
	cuu.nhap();
	De de;
	de.nhap();
	bo.xuat();
	cuu.xuat();
	de.xuat();
	cout << "Tieng keu: " << endl;
	bo.tiengbo();
	cuu.tiengcuu();
	de.tiengde();
	cout << "\n----------------------------------------------------" << endl;
	cout << "Tong gia suc: " << bo.tongbo() + cuu.tongcuu() + de.tongde() << endl;
	cout << "Tong so lit sua: " << bo.tongsuabo() + cuu.tongsuacuu() + de.tongsuade() << endl;
	cout << "----------------------------------------------------" << endl;
	return 0;
}