#include"Lophoc.h"
#include"Hocsinh.h"
void lophoc::docfile(ifstream& myfile, hocsinh& hs)
{
	string hoten;
	hs.sethoten(hoten);
	myfile >> hoten;
	string maso;
	hs.setmaso(maso);
	myfile >> maso;
	string sodienthoai;
	hs.setsodienthoai(sodienthoai);
	myfile >> sodienthoai;
	float dtb;
	myfile >> dtb;
}
void lophoc::docfileds(ifstream& myfile, vector<hocsinh>& ds)
{
	while (!myfile.eof())
	{
		int n;
		myfile >> n;
		for (int i = 1; i <= n; i++)
		{
			lophoc a;
			hocsinh hs;
			docfile(myfile, hs);
			a.dshs.push_back(hs);
		}
	}
}
void lophoc::xuat(vector<hocsinh>& ds)
{
	for (int i = 0; i < ds.size(); i++)
	{
		cout << "Sinh vien thu " << i + 1 << " : " << endl;
		ds[i].xuat();
	}
}