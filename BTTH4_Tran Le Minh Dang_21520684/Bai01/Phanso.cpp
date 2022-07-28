#include"Phanso.h"
PhanSo::PhanSo()
{
	tuso = new int;
	mauso = new int;
}
PhanSo::~PhanSo() {}
PhanSo& PhanSo::operator=(const PhanSo& ps)
{
	*this->tuso = *ps.tuso;
	*this->mauso = *ps.mauso;
	return *this;
}
PhanSo PhanSo::operator+(const PhanSo& ps)
{
	PhanSo ketqua;
	*ketqua.tuso = *this->tuso * *ps.mauso + *this->mauso * *ps.tuso;
	*ketqua.mauso = *this->mauso * *ps.mauso;
	return ketqua;
}
PhanSo PhanSo::operator-(const PhanSo& ps)
{
	PhanSo ketqua;
	*ketqua.tuso = *this->tuso * *ps.mauso - *this->mauso * *ps.tuso;
	*ketqua.mauso = *this->mauso * *ps.mauso;
	return ketqua;
}
PhanSo PhanSo::operator*(const PhanSo& ps)
{
	PhanSo ketqua;
	*ketqua.tuso = *this->tuso * *ps.tuso;
	*ketqua.mauso = *this->mauso * *ps.mauso;
	return ketqua;
}
PhanSo PhanSo::operator/(const PhanSo& ps)
{
	PhanSo ketqua;
	*ketqua.tuso = *this->tuso * *ps.mauso;
	*ketqua.mauso = *this->mauso * *ps.tuso;
	return ketqua;
}
PhanSo& PhanSo::operator+=(const PhanSo& ps)
{
	*this->tuso = *this->tuso * *ps.mauso + *this->mauso * *ps.tuso;
	*this->mauso = *this->mauso * *ps.mauso;
	return *this;
}
PhanSo& PhanSo::operator-=(const PhanSo& ps)
{
	*this->tuso = *this->tuso * *ps.mauso - *this->mauso * *ps.tuso;
	*this->mauso = *this->mauso * *ps.mauso;
	return *this;
}
PhanSo& PhanSo::operator*=(const PhanSo& ps)
{
	*this->tuso = *this->tuso * *ps.tuso;
	*this->mauso = *this->mauso * *ps.mauso;
	return *this;
}
PhanSo& PhanSo::operator/=(const PhanSo& ps)
{
	*this->tuso = *this->tuso * *ps.mauso;
	*this->mauso = *this->mauso * *ps.tuso;
	return *this;
}
bool PhanSo::operator==(const PhanSo& ps)
{
	int result = *this->tuso * *ps.mauso - *this->mauso * *ps.tuso;
	if (result == 0)return true;
	return false;
}
bool PhanSo::operator>(const PhanSo& ps)
{
	int result = *this->tuso * *ps.mauso - *this->mauso * *ps.tuso;
	if (result > 0)return true;
	return false;
}
bool PhanSo::operator<(const PhanSo& ps)
{
	int result = *this->tuso * *ps.mauso - *this->mauso * *ps.tuso;
	if (result < 0)return true;
	return false;
}
bool PhanSo::operator>=(const PhanSo& ps)
{
	int result = *this->tuso * *ps.mauso - *this->mauso * *ps.tuso;
	if (result >= 0)return true;
	return false;
}
bool PhanSo::operator<=(const PhanSo& ps)
{
	int result = *this->tuso * *ps.mauso - *this->mauso * *ps.tuso;
	if (result <= 0)return true;
	return false;
}
bool PhanSo::operator!=(const PhanSo& ps)
{
	int result = *this->tuso * *ps.mauso - *this->mauso * *ps.tuso;
	if (result != 0)return true;
	return false;
}
PhanSo& PhanSo:: operator++()
{
	*this->tuso = *this->tuso + *this->mauso;
	return *this;
}
PhanSo PhanSo::operator++(int x)
{
	PhanSo result;
	*result.tuso = *this->tuso;
	*result.mauso = *this->mauso;
	*this->tuso = *this->tuso + *this->mauso;
	return result;
}
PhanSo& PhanSo:: operator--()
{
	*this->tuso = *this->tuso - *this->mauso;
	return *this;
}
PhanSo PhanSo::operator--(int x)
{
	PhanSo result;
	*result.tuso = *this->tuso;
	*result.mauso = *this->mauso;
	*this->tuso = *this->tuso - *this->mauso;
	return result;
}
istream& operator>>(istream& is, const PhanSo& ps)
{
	cout << "Nhap tu so: ";
	is >> *ps.tuso;
	do
	{
		cout << "Nhap mau so: ";
		is >> *ps.mauso;
		if (*ps.mauso == 0)
			cout << "Mau so khac 0" << endl;
	} while (*ps.mauso == 0);
	return is;
}
ostream& operator<<(ostream& os, const PhanSo& ps)
{
	int a = abs(*ps.tuso);
	int b = abs(*ps.mauso);
	for (int i = min(a, b); i >= 1; i--)
		if (a % i == 0 && b % i == 0)
		{
			*ps.tuso /= i;
			*ps.mauso /= i;
			break;
		}
	if (*ps.mauso < 0)
	{
		*ps.mauso *= -1;
		*ps.tuso *= -1;
	}
	os << *ps.tuso << "/" << *ps.mauso << endl;
	return os;
}
