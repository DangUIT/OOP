#pragma once
class Candidate
{
private:
	char ma[100], ten[100];
	int ngay, thang, nam;
	float toan, van, anh;
public:
	void nhap();
	void xuat();
	int tongdiem();
	
};
