#pragma once
#include<iostream>
using namespace std;
class Mangsonguyen
{
private:
	int* dulieu;
	int kichthuoc;
public:
	Mangsonguyen(int);
	~Mangsonguyen();
	Mangsonguyen& operator=(const Mangsonguyen&);
	Mangsonguyen operator+(const Mangsonguyen&);
	Mangsonguyen& operator++();
	Mangsonguyen operator++(int x);
	friend istream& operator>>(istream& is, const Mangsonguyen&);
	friend ostream& operator<<(ostream& os, const Mangsonguyen&);
};