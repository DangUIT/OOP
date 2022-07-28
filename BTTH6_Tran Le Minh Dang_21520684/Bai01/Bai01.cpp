#include"Bienche.h"
#include"Canbo.h"
#include"Hopdong.h"
#include<vector>
int main()
{
	vector<Canbo*>ds;
	int s;
	do
	{
		cout << "Chon thao tac: " << endl;
		cout << "1.Nhap thong tin can bo bien che" << endl;
		cout << "2.Nhap thong tin can bo hop dong" << endl;
		cout << "3.Xuat danh sach can bo" << endl;
		cout << "4.Tien luong" << endl;
		cout << "5.Tong tien luong" << endl;
		cout << "6.Ket thuc" << endl;
		cin >> s;
		if (s == 1)
		{
			cin.ignore();
			Canbo* bienche = new Bienche();
			bienche->nhap();
			cout << endl;
			ds.push_back(bienche);
		}
		if (s == 2)
		{
			cin.ignore();
			Canbo* hopdong = new Hopdong();
			hopdong->nhap();
			cout << endl;
			ds.push_back(hopdong);
		}
		if (s == 3)
		{
			cout << "\nThong tin danh sach can bo" << endl;
			for (int i = 0; i < ds.size(); i++)
			{
				ds[i]->xuat();
			}
			cout << endl;
		}
		if (s == 4)
		{
			cout << "\n----------------Luong tung can bo trong cong ty---------------------------" << endl;
			for (int i = 0; i < ds.size(); i++)
			{
				ds[i]->xuatluong();
			}
			cout << endl;
		}
		if (s == 5)
		{
			float tongtienluong = 0;
			for (int i = 0; i < ds.size(); i++)
			{
				tongtienluong += ds[i]->luongcanbo();
			}
			cout << "\nTong tien luong: " << tongtienluong << endl;
			cout << endl;
		}
		if (s == 6)
		{
			cout << "Ket thuc chuong trinh" << endl;
			break;
		}
	} while (true);
	return 0;
}
