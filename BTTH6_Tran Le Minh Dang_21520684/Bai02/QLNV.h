#pragma once
#include"Giangvien.h"
#include"Nhanvien.h"
#include"Nghiencuuvien.h"
#include"Nhanvienvanphong.h"
#include<vector>
class QLNV
{
private:
	vector<Nhanvien*>ds;
public:
	friend istream& operator>>(istream& is, QLNV& qlnv);
	friend ostream& operator<<(ostream& os, QLNV& qlnv);
};
