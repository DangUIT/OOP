#include"Giangvien.h"
void Giangvien::nhap()
{
	Nhansu::nhap();
	cout << "Nhap hoc ham: ";
	getline(cin, hocham);
	cout << "Nhap hoc vi: ";
	getline(cin, hocvi);
	cout << "Nhap so nam giang day: ";
	cin >> sonamgiangday;
	cout << "Nhap so mon hoc: ";
	cin >> somonhoc;
	cout << "Nhap danh sach mon hoc: " << endl;
	for (int i = 0; i <= somonhoc; i++)
	{
		getline(cin, monhoc);
		dsmonhoc.push_back(monhoc);
	}
}
float Giangvien::luonggiangvien()
{
	return (somonhoc * sonamgiangday * 0.12) * 20000;
}
void Giangvien::xuat()
{
	cout << "-------------------------------------------" << endl;
	cout << "Thong tin giang vien: " << endl;
	Nhansu::xuat();
	cout << "Hoc ham: " << hocham << endl;
	cout << "Hoc vi: " << hocvi << endl;
	cout << "So nam giang day: " << sonamgiangday << endl;
	cout << "Danh sach mon hoc: ";
	for (int i = 0; i < dsmonhoc.size(); i++)
	{
		cout << dsmonhoc[i] << endl;
	}
	cout << "Luong giang vien: " << luonggiangvien() << endl;
	cout << "-------------------------------------------" << endl;
}