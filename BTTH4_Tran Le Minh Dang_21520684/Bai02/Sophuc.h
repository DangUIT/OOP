#pragma once
#include<iostream>
using namespace std;
class SoPhuc
{
public:
	SoPhuc();
	SoPhuc(float, float);
	~SoPhuc();
	SoPhuc operator+(const SoPhuc&);
	SoPhuc operator-(const SoPhuc&);
	SoPhuc operator*(const SoPhuc&);
	SoPhuc operator/(const SoPhuc&);
	bool operator==(const SoPhuc&);
	bool operator!=(const SoPhuc&);
	friend istream& operator>>(istream& is, SoPhuc&);
	friend ostream& operator<<(ostream& os, SoPhuc&);
private:
	float ao;
	float thuc;
};

