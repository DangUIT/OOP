#include"Mangsonguyen.h"
Mangsonguyen::Mangsonguyen(int size)
{
	kichthuoc = size;
	dulieu = new int[kichthuoc];
	for (int i = 0; i < size; i++)
		dulieu[i] = 0;
}
Mangsonguyen::~Mangsonguyen() {}
Mangsonguyen& Mangsonguyen::operator=(const Mangsonguyen& array)
{
	if (this == &array)
		return *this;
	else
	{
		for (int i = 0; i < kichthuoc; i++)
		{
			dulieu[i] = array.dulieu[i];
		}
		return *this;
	}
}
Mangsonguyen Mangsonguyen:: operator+(const Mangsonguyen& array)
{
	int a = this->kichthuoc > array.kichthuoc ? this->kichthuoc : array.kichthuoc;
	Mangsonguyen ketqua(a);
	if (this->kichthuoc == array.kichthuoc)
	{
		for (int i = 0; i < this->kichthuoc; i++)
		{
			ketqua.dulieu[i] = this->dulieu[i] + array.dulieu[i];
		}
		return ketqua;
	}
	else
	{
		int kich_thuoc_mang_tong = this->kichthuoc > array.kichthuoc ? this->kichthuoc : array.kichthuoc;
		int kich_thuoc_mang_nho = this->kichthuoc < array.kichthuoc ? this->kichthuoc : array.kichthuoc;
		for (int i = 0; i < kich_thuoc_mang_nho; i++)
		{
			ketqua.dulieu[i] = this->dulieu[i] + array.dulieu[i];
		}
		for (int i = kich_thuoc_mang_nho; i < kich_thuoc_mang_tong; i++)
		{
			if (this->kichthuoc < array.kichthuoc)
				ketqua.dulieu[i] = array.dulieu[i];
		}
		return ketqua;
	}
}
Mangsonguyen& Mangsonguyen::operator++()
{
	for (int i = 0; i < kichthuoc; i++)
	{
		this->dulieu[i]++;
	}
	return *this;
}
Mangsonguyen Mangsonguyen:: operator++(int x)
{
	Mangsonguyen result(this->kichthuoc);
	for (int i = 0; i < kichthuoc; i++)
		result.dulieu[i] = this->dulieu[i];
	for (int i = 0; i < kichthuoc; i++)
		this->dulieu[i]++;
	return result;
}
istream& operator>>(istream& is, const Mangsonguyen& array)
{
	for (int i = 0; i < array.kichthuoc; i++)
	{
		is >> array.dulieu[i];
	}
	return is;
}
ostream& operator<<(ostream& os, const Mangsonguyen& array)
{
	for (int i = 0; i < array.kichthuoc; i++)
	{
		os << array.dulieu[i] << " ";
	}
	return os;
}
