#include"Sophuc.h"
int main()
{
	SoPhuc a = SoPhuc(1, 2);
	SoPhuc b = SoPhuc(2, 3);
	SoPhuc c;
	cout << "Tong 2 so phuc: ";
	c = a + b;
	cout << c;
	cout << "Hieu 2 so phuc: ";
	c = a - b;
	cout << c;
	cout << "Tich 2 so phuc: ";
	c = a * b;
	cout << c;
	cout << "Thuong 2 so phuc: ";
	c = a / b;
	cout << c;
	if (a == b)cout << "a bang b" << endl;
	if (a != b)cout << "a khong bang b" << endl;

	cout << "Nhap so phuc thu 1" << endl;
	cin >> a;
	cout << "Nhap so phuc thu 2" << endl;
	cin >> b;
	cout << "Tong 2 so phuc: ";
	c = a + b;
	cout << c;
	cout << "Hieu 2 so phuc: ";
	c = a - b;
	cout << c;
	cout << "Tich 2 so phuc: ";
	c = a * b;
	cout << c;
	cout << "Thuong 2 so phuc: ";
	c = a / b;
	cout << c;
	if (a == b)cout << "a bang b" << endl;
	if (a != b)cout << "a khong bang b" << endl;

}