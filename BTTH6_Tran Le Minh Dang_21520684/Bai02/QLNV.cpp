#include"QLNV.h"
istream& operator>>(istream& is, QLNV& qlnv)
{
	int stt;
	do
	{
		cout << "Chon thao tac: " << endl;
		cout << "1.Nhap thong tin giang vien" << endl;
		cout << "2.Nhap thong tin nghien cuu vien" << endl;
		cout << "3.Nhap thong tin nhan vien van phong" << endl;
		cout << "4.Ket thuc nhap" << endl;
		cin >> stt;
		if (stt == 1)
		{
			Nhanvien* gv = new Giangvien();
			cin.ignore();
			gv->nhap(is);
			qlnv.ds.push_back(gv);
		}
		if (stt == 2)
		{
			Nhanvien* ncv = new Nghiencuuvien();
			cin.ignore();
			ncv->nhap(is);
			qlnv.ds.push_back(ncv);
		}
		if (stt == 3)
		{
			Nhanvien* nvvp = new Nhanvienvanphong();
			cin.ignore();
			nvvp->nhap(is);
			qlnv.ds.push_back(nvvp);
		}
		if (stt == 4)
			break;
	} while (true);
	return is;
}
ostream& operator<<(ostream& os, QLNV& qlnv)
{
	cout << "\n-----------------Danh sach nhan vien du tieu chuan lao dong tien tien------------------------" << endl;
	for (int i = 0; i < qlnv.ds.size(); i++)
	{
		if (qlnv.ds[i]->tieuchuan())
			qlnv.ds[i]->xuat(os);
	}
	return os;
}