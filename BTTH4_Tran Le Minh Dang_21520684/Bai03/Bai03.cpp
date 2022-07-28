#include"Mangsonguyen.h"
int main()
{   // Nhap so phan tu va cac phan tu cua mang A
	int sophantu1, sophantu2;
	cout << "Nhap so phan tu mang A: ";
	cin >> sophantu1;
	cout << "Nhap mang: " << endl;
	Mangsonguyen a(sophantu1);
	cin >> a;

	//Nhap so phan tu va cac phan tu mang B
	cout << "Nhap so phan tu mang B: ";
	cin >> sophantu2;
	cout << "Nhap mang: " << endl;
	Mangsonguyen b(sophantu2);
	cin >> b;

	//Xuat mang A va mang B
	cout << "\nMang A: ";
	cout << a << endl;
	cout << "Mang B: ";
	cout << b << endl;

	// Gan mang
	cout << "\nGan mang C bang mang A" << endl;
	Mangsonguyen c(sophantu1);
	c = a;
	cout << "C: " << c << endl;

	//Tong 2 mang
	int sophantu3 = sophantu1 > sophantu2 ? sophantu1 : sophantu2;
	cout << "\nTong 2 mang" << endl;
	Mangsonguyen tong(sophantu3);
	tong = a + b;
	cout << "A + B: " << tong << endl;

	//Toan tu tien to ++a
	cout << "\nToan tu tien to ++A: ";
	++a;
	cout << a << endl;

	//Toan tu hau to a++ :
	a = c;
	cout << "\nToan tu hau to C= A++" << endl;
	c = a++;
	cout << "C: " << c << endl;
	cout << "A: " << a;
	return 0;
}