#include"Danhsachphanso.h"
#include"Phanso.h"
void danhsach::nhapds()
{
	cout << "Nhap so phan tu: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "Nhap tu va mau phan so thu " << i << ": ";
		a[i].nhap();
	}
}
void danhsach::xuatds()
{
	for (int i = 1; i <= n; i++)
	{
		a[i].xuat();
	}
}
void danhsach::rutgon()
{
	for (int i = 1; i <= n; i++)
	{
		a[i].rutgon();
	}
}
void danhsach::tongds()
{
	cout << "Tong danh sach: ";
	phanso kq = a[1];
	for (int i = 2; i <= n; i++)
	{
		kq = kq.tong(a[i]);
	}
	kq.rutgon();
	kq.xuat();
}
void danhsach::maxds()
{
	cout << "Gia tri lon nhat: ";
	phanso max = a[1];
	for (int i = 2; i <= n; i++)
	{
		if (max.sosanh(a[i]) == 0)
			max = a[i];
	}
	max.xuat();
}
void danhsach::minds()
{
	cout << "Gia tri nho nhat: ";
	phanso min = a[1];
	for (int i = 2; i <= n; i++)
	{
		if (min.sosanh(a[i]) == 1)
			min = a[i];
	}
	min.xuat();
}
void danhsach::tangdan()
{
	cout << "Sap xep tang dan:" << endl;
	for (int i = 1; i <= n - 1; i++)
	{
		for (int j = i + 1; j <= n; j++)
		{
			if (a[i].sosanh(a[j]) == 1)
				swap(a[i], a[j]);
		}
	}
}
void danhsach::giamdan()
{
	cout << "Sap xep giam dan:" << endl;
	for (int i = 1; i <= n - 1; i++)
	{
		for (int j = i + 1; j <= n; j++)
		{
			if (a[i].sosanh(a[j]) == 0)
				swap(a[i], a[j]);
		}
	}
}