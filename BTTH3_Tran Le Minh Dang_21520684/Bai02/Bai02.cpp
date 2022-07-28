#include"Lophoc.h"
int main()
{
	lophoc a;
	ifstream myfile;
	myfile.open("Lophoc.txt", ios::in);
	vector< hocsinh> dshs;
	a.docfileds(myfile, dshs);
	a.xuat(dshs);
	myfile.close();
	return 0;
}