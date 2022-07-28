#include"Candidate.h"
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap so thi sinh: ";
	cin >> n;
	cout << endl;
	Candidate* a = new Candidate[100];
	for (int i = 1; i <= n; i++)
	{
		cout << "Thi sinh " << i << endl;
		a[i].nhap();
		cout << endl;
		a[i].xuat();
		cout << endl;
	}
	cout << "Thi sinh co tong diem lon hon 15: " << endl;
	for (int i = 1; i <= n; i++)
	{
		if (a[i].tongdiem() > 15)
		{
			cout << endl;
			a[i].xuat();
		}
	}
	delete[]a;
	return 0;
}