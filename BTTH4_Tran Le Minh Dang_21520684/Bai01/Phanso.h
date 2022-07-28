#pragma once
#include<iostream>
#include<cmath>
using namespace std;
class PhanSo
{
public:
	PhanSo();
	~PhanSo();
	PhanSo& operator=(const PhanSo&);
	PhanSo operator+(const PhanSo&);
	PhanSo operator-(const PhanSo&);
	PhanSo operator*(const PhanSo&);
	PhanSo operator/(const PhanSo&);
	PhanSo& operator+=(const PhanSo&);
	PhanSo& operator-=(const PhanSo&);
	PhanSo& operator*=(const PhanSo&);
	PhanSo& operator/=(const PhanSo&);
	bool operator==(const PhanSo&);
	bool operator>(const PhanSo&);
	bool operator<(const PhanSo&);
	bool operator>=(const PhanSo&);
	bool operator<=(const PhanSo&);
	bool operator!=(const PhanSo&);
	PhanSo& operator++();
	PhanSo operator++(int x);
	PhanSo& operator--();
	PhanSo operator--(int x);
	friend istream& operator>>(istream& is, const PhanSo&);
	friend ostream& operator<<(ostream& os, const PhanSo&);
private:
	int* tuso;
	int* mauso;
};
