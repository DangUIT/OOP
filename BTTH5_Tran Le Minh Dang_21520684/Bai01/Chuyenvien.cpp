#include"Chuyenvien.h"
void Chuyenvien::nhap()
{
	Nhansu::nhap();
	cout << "Nhap so du an: ";
	cin >> soduan;
	cout << "Nhap danh sach ma du an: " << endl;
	for (int i = 0; i <= soduan; i++)
	{
		getline(cin, maduan);
		dsmaduan.push_back(maduan);
	}
	cout << "Nhap so nam kinh nghiem: ";
	cin >> sonamkinhnghiem;
}
float Chuyenvien::luongchuyenvien()
{
	soduanT = 0;
	for (int i = 0; i < dsmaduan.size(); i++)
	{
		if (dsmaduan[i][0] == 'T')
			soduanT++;
	}
	return (sonamkinhnghiem * 4 + soduanT) * 18000;
}
void Chuyenvien::xuat()
{
	cout << "-------------------------------------------" << endl;
	cout << "Thong tin chuyen vien: " << endl;
	Nhansu::xuat();
	cout << "Danh sach ma du an: ";
	for (int i = 0; i < dsmaduan.size(); i++)
	{
		cout << dsmaduan[i] << endl;
	}
	cout << "So nam kinh nghiem lam viec: " << sonamkinhnghiem << endl;
	cout << "Luong chuyen vien: " << luongchuyenvien() << endl;
	cout << "-------------------------------------------" << endl;
}