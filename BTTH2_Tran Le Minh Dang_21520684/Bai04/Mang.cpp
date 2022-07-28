#include"Mang.h"
void mang::nhap()
{
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "] = ";
		cin >> a[i];
	}
}
void mang::xuat()
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}
void mang::dem()
{
	int x, dem = 0;
	cout << "\nNhap gia tri can dem: ";
	cin >> x;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
			dem++;
	}
	cout << "So lan xuat hien cua bien x la: " << dem;
}
void mang::kiemtratangdan()
{
	int res = 0;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] >= a[j])
			{
				res = 1;
				break;
			}
		}
	}
	if (res == 0)
		cout << "Mang tang dan";
	else cout << "Mang khong tang dan";
}
int mang::ledau()
{
	int res = -1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 1)
		{
			res = i;
			break;
		}
	}
	return res;
}
void mang::minle()
{
	int vitriledautien = ledau();
	if (vitriledautien == -1)
		cout << "Mang khong ton tai so le";
	else
	{
		int min = a[vitriledautien];
		for (int i = vitriledautien + 1; i < n; i++)
		{
			if (a[i] < a[vitriledautien] && a[i] % 2 == 1)
				min = a[i];
		}cout << "So nguyen le nho nhat la: " << min;
	}

}
int mang::kiemtrasnt(int x)
{
	if (x < 2 || x == 4)
		return 0;
	else if (x == 2 || x == 3 || x == 5)
		return 1;
	else if (x > 5)
	{
		for (int i = 2; i <= n / 2; i++)
		{
			if (x % i == 0)
				return 0;
		}
	}
}
void mang::maxnguyento()
{
	int res = -1;
	for (int i = 0; i < n; i++)
	{
		if (kiemtrasnt(a[i]) != 0)
		{
			res = i;
			break;
		}
	}
	if (res == -1)
		cout << "Mang khong ton tai so nguyen to";
	else
	{
		int max = a[res];
		for (int i = res; i < n; i++)
		{
			if (kiemtrasnt(a[i]) != 0 && a[i] > max)
				max = a[i];
		}
		cout << "So nguyen to lon nhat la: " << max;
	}

}