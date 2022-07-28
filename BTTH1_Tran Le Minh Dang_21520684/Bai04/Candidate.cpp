#include"Candidate.h"
#include<iostream>
#include<string>
using namespace std;
void Candidate::nhap()
{
	cin.ignore();
	cout << "Nhap ma: ";
	fgets(ma, 100, stdin);
	cout << "Nhap ten: ";
	fgets(ten, 100, stdin);
	cout << "Nhap ngay sinh: ";
	cin >> ngay;
	cout << "Nhap thang sinh: ";
	cin >> thang;
	cout << "Nhap nam sinh: ";
	cin >> nam;
	cout << "Nhap diem Toan: ";
	cin >> toan;
	cout << "Nhap diem Van: ";
	cin >> van;
	cout << "Nhap diem Anh: ";
	cin >> anh;
}
void Candidate::xuat()
{
	cout << "Ma: " << ma;
	cout << "Ten: " << ten;
	cout << "Ngay thang nam sinh: " << ngay << "/" << thang << "/" << nam << endl;
	cout << "Diem Toan: " << toan << endl;
	cout << "Diem Van: " << van << endl;
	cout << "Diem Anh: " << anh << endl;
	cout << "Diem trung binh: " << (toan + van + anh) / 3 << endl;
}
int Candidate::tongdiem()
{
	return toan + van + anh;
}