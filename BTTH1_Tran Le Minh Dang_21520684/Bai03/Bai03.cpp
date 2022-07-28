#include"diem.h"
#include<iostream>
#include<cmath>
using namespace std;
void diem::nhap()
{
	cout << "Nhap hoanh do: ";
	cin >> hoanhdo;
	cout << "Nhap tung do: ";
	cin >> tungdo;
}
void diem::xuat()
{
	cout << "(" << hoanhdo << "," << tungdo << ")" << endl;
}
float diem::khoangcach(diem x)
{
	float a = sqrt((hoanhdo - x.hoanhdo) * (hoanhdo - x.hoanhdo) + (tungdo - x.tungdo) * (tungdo - x.tungdo));
	return a;
}
