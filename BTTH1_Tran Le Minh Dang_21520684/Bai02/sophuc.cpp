#include"Sophuc.h"
#include<iostream>
using namespace std;
void sophuc::nhap()
{
	cout << "Nhap phan thuc:";
	cin >> thuc;
	cout << "Nhap phan ao: ";
	cin >> ao;
}
void sophuc::xuat()
{
	cout << "So phuc :" << thuc;
	if (ao >= 0)
		cout << "+" << ao << "i" << endl;
	else cout << ao << "i" << endl;
}
void sophuc::cong(sophuc x)
{
	thuc = thuc + x.thuc;
	ao = ao + x.ao;
}
void sophuc::tru(sophuc x)
{
	thuc = thuc - x.thuc;
	ao = ao - x.ao;
}
void sophuc::nhan(sophuc x)
{
	sophuc ketqua;
	ketqua.thuc = thuc * x.thuc - ao * x.ao;
	ketqua.ao = thuc * x.ao + ao * x.thuc;
	*this = ketqua;
}
void sophuc::chia(sophuc x)
{
	sophuc ketqua;
	ketqua.thuc = (thuc * x.thuc + ao * x.ao) / (x.thuc * x.thuc + x.ao * x.ao);
	ketqua.ao = (ao * x.thuc - thuc * x.ao) / (x.thuc * x.thuc + x.ao * x.ao);
	*this = ketqua;
}