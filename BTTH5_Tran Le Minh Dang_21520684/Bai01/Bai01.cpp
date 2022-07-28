#include"Giangvien.h"
#include"Trogiang.h"
#include"Nghiencuuvien.h"
#include"Chuyenvien.h"
int main()
{
	int nhansu, stt;
	float tongluong = 0;
	vector<Nhansu>ds;
	cout << "Nhap so nhan su: ";
	cin >> nhansu;
	for (int i = 0; i < nhansu; i++)
	{
		cout << "Chon loai nhan su can nhap: " << endl;
		cout << "1.Giang vien" << endl;
		cout << "2.Tro giang" << endl;
		cout << "3.Nghien cuu vien" << endl;
		cout << "4.Chuyen vien" << endl;
		cin >> stt;
		if (stt == 1)
		{
			cin.ignore();
			Giangvien gv;
			gv.nhap();
			gv.xuat();
			tongluong += gv.luonggiangvien();
		}
		if (stt == 2)
		{
			cin.ignore();
			Trogiang tg;
			tg.nhap();
			tg.xuat();
			tongluong += tg.luongtrogiang();
		}
		if (stt == 3)
		{
			cin.ignore();
			Nghiencuuvien ncv;
			ncv.nhap();
			ncv.xuat();
			tongluong += ncv.luongnghiencuuvien();
		}
		if (stt == 4)
		{
			cin.ignore();
			Chuyenvien cv;
			cv.nhap();
			cv.xuat();
			tongluong += cv.luongchuyenvien();
		}
	}
	cout << "\n\nTong luong can tra: " << tongluong;
	return 0;
}