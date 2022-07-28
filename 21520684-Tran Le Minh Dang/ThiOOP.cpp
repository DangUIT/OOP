#include"Henuoc.h"
#include"Heco.h"
#include"Hedat.h"
#include"Helua.h"
#include<vector>
int main()
{
	vector<Pokemon*>dsPokemon;
	int stt;
	do
	{
		// He lua nhap la 'lua', he nuoc nhap la 'nuoc', he dat nhap la 'dat', he co nhap la 'co'
		cout << "Chon thao tac" << endl;
		cout << "1.Nhap Pokemon he nuoc" << endl;
		cout << "2.Nhap Pokemon he lua" << endl;
		cout << "3.Nhap Pokemon he dat" << endl;
		cout << "4.Nhap Pokemon he co" << endl;
		cout << "5.Xuat danh sach Pokemon" << endl;
		cout << "6.Chon 2 pokemon danh nhau" << endl;
		cin >> stt;
		if (stt == 1)
		{
			Pokemon* Pk = new Henuoc;
			cin.ignore();
			Pk->nhap();
			dsPokemon.push_back(Pk);
		}
		if (stt == 2)
		{
			Pokemon* Pk = new Helua;
			cin.ignore();
			Pk->nhap();
			dsPokemon.push_back(Pk);
		}
		if (stt == 3)
		{
			Pokemon* Pk = new Hedat;
			cin.ignore();
			Pk->nhap();
			dsPokemon.push_back(Pk);
		}
		if (stt == 4)
		{
			Pokemon* Pk = new Heco;
			cin.ignore();
			Pk->nhap();
			dsPokemon.push_back(Pk);
		}
		if (stt == 5)
		{
			cout <<" ---------------- - Danh sach Pokemon----------------------" << endl;
			for (int i = 0; i < dsPokemon.size(); i++)
			{
				dsPokemon[i]->xuat();
			}
			cout << "-------------------------------------------------------------" << endl;
		}
		if (stt == 6)
		{
			if (dsPokemon.size() < 2)
				cout << "Khong du Pokemon de danh nhau" << endl;
			else
			{
				int a;
				int b;
				cout << "Chon Pokemon thu nhat: ";
				cin >> a;
				cout << "Chon Pokemon thu hai: ";
				cin >> b;
				cout << "--------------Pokemon danh nhau-----------------------------" << endl;
				dsPokemon[a-1]->attack(dsPokemon[b-1]);
				cout << "------------------------------------------------------------" << endl;
				fstream output;
				output.open("WINNER.OUT.txt");
				if (dsPokemon[a - 1]->getHp() > 0)
					output << "Pokemon " << dsPokemon[a - 1]->getName() << " win" << endl;
				if (dsPokemon[b - 1]->getHp() > 0)
					output << "Pokemon " << dsPokemon[b - 1]->getName() << " win" << endl;
				output.close();
				break;
			}
		}
	} while (true);
	return 0;
}



