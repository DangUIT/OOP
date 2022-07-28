#pragma once
#include"Hocsinh.h"
#include<iostream>
#include<string>
#include<vector>
#include<fstream>
using namespace std;
class lophoc
{
private:
	vector<hocsinh>dshs;
public:
	void docfile(ifstream&, hocsinh&);
	void docfileds(ifstream&, vector<hocsinh>& ds);
	void xuat(vector<hocsinh>&ds);
};
