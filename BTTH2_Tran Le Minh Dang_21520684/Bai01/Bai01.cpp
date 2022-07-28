#include"Nhanvien.h"
int main()
{
	nhanvien a("Thanh", 500, "500Thanh", "quan li", 1.5);
	a.xuat();

	cout << endl;

	nhanvien b("Dang", 4000);
	b.xuat();

	cout << endl;

	nhanvien c;
	c = nhanvien(a);
	string ten = "Nam";
	string songay = to_string(a.get_songay());
	string maso = songay + ten;
	c.set_hoten(ten);
	c.set_maso(maso);
	c.xuat();

	cout << endl;

	nhanvien d;
	d.nhap();
	cout << endl;
	d.xuat();

	return 0;
}