#include"Nghiencuuvien.h"
void Nghiencuuvien::nhap()
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
float Nghiencuuvien::luongnghiencuuvien()
{
	soduanD = 0;
	for (int i = 0; i < dsmaduan.size(); i++)
	{
		if (dsmaduan[i][0] == 'D')
			soduanD++;
	}
	return (sonamkinhnghiem * 2 + soduanD) * 20000;
}
void Nghiencuuvien::xuat()
{
	cout << "-------------------------------------------" << endl;
	cout << "Thong tin nghien cuu vien: " << endl;
	Nhansu::xuat();
	cout << "Danh sach ma du an: ";
	for (int i = 0; i < dsmaduan.size(); i++)
	{
		cout << dsmaduan[i] << endl;
	}
	cout << "So nam kinh nghiem nghien cuu: " << sonamkinhnghiem << endl;
	cout << "Luong nghien cuu vien: " << luongnghiencuuvien() << endl;
	cout << "-------------------------------------------" << endl;
}