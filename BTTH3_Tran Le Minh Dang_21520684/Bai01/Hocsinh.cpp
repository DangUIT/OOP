#include"Hocsinh.h"
void hocsinh::nhapHoten()
{
	cout << "Nhap ho ten hoc sinh: ";
	getline(cin, hoten);
}
void hocsinh::nhapMaso()
{
	cout << "Nhap ma so hoc sinh: ";
	getline(cin, maso);
}
void hocsinh::nhapSdt()
{
	cout << "Nhap so dien thoai lien lac: ";
	getline(cin, sdt);
}
void hocsinh::nhapDtb()
{
	cout << "Nhap diem trung binh: ";
	cin >> dtb;
}
void hocsinh::kiemtraHoten()
{
	int sum = 0;
loop:
	sum = 0;
	for (int i = 0; i < hoten.length(); i++)
	{
		bool check = isdigit(hoten[i]);
		if (check)
		{
			sum++;
		}
	}
	for (int i = 0; i < hoten.length(); i++)
	{
		if ((hoten[i] >= 'a' && hoten[i] <= 'z') || (hoten[i] >= 'A' && hoten[i] <= 'Z') || hoten[i] == ' ')
		{
			sum++;
		}
	}
	do {
		if (sum != hoten.length())
		{
			cout << "Ho ten khong hop le" << endl;
			cin.ignore();
			nhapHoten();
			goto loop;
		}
	} while (sum != hoten.length());
	cout << "Ho ten hop le" << endl;
}
void hocsinh::kiemtraMaso()
{
	do
	{
		if (maso.length() != 8)
		{
			cin.ignore();
			cout << "Ma so khong hop le" << endl;
			nhapMaso();
		}
	} while (maso.length() != 8);
	cout << "Ma so hop le" << endl;
}
void hocsinh::kiemtraSdt()
{
	int flag = 0;
loop1:
	flag = 0;
	for (int i = 0; i < sdt.length(); i++)
	{
		bool check = isdigit(sdt[i]);
		if (!check || sdt[i] == ' ')
		{
			flag = 1;
			break;
		}
	}
	do
	{
		if (flag == 1 || sdt.length() > 11 || sdt.length() < 9)
		{
			cout << "So dien thoai khong hop le" << endl;
			cin.ignore();
			nhapSdt();
			goto loop1;
		}
	} while (flag == 1 || sdt.length() > 11 || sdt.length() < 9);
	cout << "So dien thoai hop le" << endl;
}
void hocsinh::kiemtraDtb()
{

	do
	{
		if (dtb < 0 || dtb>10)
		{
			cout << "Diem khong hop le" << endl;
			nhapDtb();
		}
	} while (dtb < 0 || dtb>10);
	cout << "Diem trung binh hop le" << endl;
}
void hocsinh::xuat()
{
	cout << endl;
	cout << "---------------------------------" << endl;
	cout << "Ho ten: " << hoten << endl;
	cout << "Ma so: " << maso << endl;
	cout << "So dien thoai: " << sdt << endl;
	cout << "Diem trung binh: " << dtb << endl;
}