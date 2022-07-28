#include"Sophuc.h"
SoPhuc::SoPhuc() {}
SoPhuc::SoPhuc(float Thuc, float Ao)
{
	this->ao = Ao;
	this->thuc = Thuc;
}
SoPhuc::~SoPhuc() {}
SoPhuc SoPhuc::operator+(const SoPhuc& sp)
{
	SoPhuc ketqua;
	ketqua.ao = this->ao + sp.ao;
	ketqua.thuc = this->thuc + sp.thuc;
	return ketqua;
}
SoPhuc SoPhuc::operator-(const SoPhuc& sp)
{
	SoPhuc ketqua;
	ketqua.ao = this->ao - sp.ao;
	ketqua.thuc = this->thuc - sp.thuc;
	return ketqua;
}
SoPhuc SoPhuc::operator*(const SoPhuc& sp)
{
	SoPhuc ketqua;
	ketqua.ao = this->thuc * sp.ao + this->ao * sp.thuc;
	ketqua.thuc = this->thuc * sp.thuc - this->ao * sp.ao;
	return ketqua;
}
SoPhuc SoPhuc::operator/(const SoPhuc& sp)
{
	SoPhuc ketqua;
	ketqua.ao = (this->ao * sp.thuc - this->thuc * sp.ao) / (sp.thuc * sp.thuc + sp.ao * sp.ao);
	ketqua.thuc = (this->thuc * sp.thuc + this->ao * sp.ao) / (sp.thuc * sp.thuc + sp.ao * sp.ao);
	return ketqua;
}
bool SoPhuc::operator==(const SoPhuc& sp)
{
	int result = this->thuc - sp.thuc + this->ao - sp.ao;
	if (result == 0)
		return true;
	return false;
}
bool SoPhuc::operator!=(const SoPhuc& sp)
{
	int result = this->thuc - sp.thuc + this->ao - sp.ao;
	if (result != 0)
		return true;
	return false;
}
istream& operator>>(istream& is, SoPhuc& sp)
{
	cout << "Nhap phan thuc: ";
	is >> sp.thuc;
	cout << "Nhap phan ao: ";
	is >> sp.ao;
	return is;
}
ostream& operator<<(ostream& os, SoPhuc& sp)
{
	if (sp.ao < 0)os << sp.thuc <<" "<< sp.ao << "i" << endl;
	else os << sp.thuc << " + " << sp.ao << "i" << endl;
	return os;
}
