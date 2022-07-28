#include"Pokemon.h"
Pokemon::Pokemon() {}
Pokemon::~Pokemon() {}
float Pokemon::getHp()
{
	return hp;
}
string Pokemon::getName()
{
	return ten;
}
void Pokemon::nhap()
{
	cout << "Nhap ten Pokemon: ";
	getline(cin, ten);
	cout << "Nhap he cua Pokemon: ";
	getline(cin, he);
	cout << "Nhap hp cua Pokemon: ";
	cin >> hp;
	cout << "Nhap sat thuong cua Pokemon: ";
	cin >> dame;
}
void Pokemon::xuat()
{
	cout << "Ten Pokemon: " << ten << endl;
	// He lua nhap la 'lua', he nuoc nhap la 'nuoc', he dat nhap la 'dat', he co nhap la 'co'
	cout << "He Pokemon: " << he << endl;
	cout << "Hp cua Pokemon: " << hp << endl;
	cout << "Sat thuong cua Pokenmon: " << dame << endl;
}
bool Pokemon::khacHe(Pokemon& pk)
{
	if (this->he == "nuoc" && pk.he == "lua")
		return true;
	if (this->he == "lua" && pk.he == "co")
		return true;
	if (this->he == "co" && pk.he == "dat")
		return true;
	if (this->he == "dat" && pk.he == "nuoc")
		return true;
	if (this->he == "co" && pk.he == "nuoc")
		return true;
	if (this->he == "dat" && pk.he == "lua")
		return true;
}
float Pokemon::dameKhacHe(Pokemon& pk)
{
	if (this->he == "nuoc" && pk.he == "lua")
	{
		this->dame += this->dame * 20 / 100;
	}
	if (this->he == "lua" && pk.he == "co")
	{
		this->dame += this->dame * 25 / 100;
	}
	if (this->he == "co" && pk.he == "dat")
	{
		this->dame += this->dame * 15 / 100;
	}
	if (this->he == "dat" && pk.he == "nuoc")
	{
		this->dame += this->dame * 30 / 100;
	}
	if (this->he == "co" && pk.he == "nuoc")
	{
		this->dame += this->dame * 10 / 100;
	}
	if (this->he == "dat" && pk.he == "lua")
	{
		this->dame += this->dame * 35 / 100;
	}
	return this->dame;
}
bool Pokemon::operator>(Pokemon& pk)
{
	return ((this->hp > pk.hp && this->dame > pk.dame) || (this->hp > pk.hp && this->khacHe(pk)) || (this->dame > pk.dame && this->khacHe(pk)));
}
void Pokemon::attack(Pokemon* (&pk))
{
	int luot = 1;
	if (this->khacHe(*pk))
	{
		cout << this->ten << " khac he " << pk->ten << endl;
		this->dame = this->dameKhacHe(*pk);
		cout << this->ten << " duoc buff dame len thanh: " << this->dame << endl;
	}
	if (pk->khacHe(*this))
	{
		cout << pk->ten << " khac he " << this->ten << endl;
		pk->dame = pk->dameKhacHe(*this);
		cout << pk->ten << " duoc buff dame len thanh: " << pk->dame << endl;
	}
	if (*this > *pk)
	{
		cout << "Pokemon " << pk->ten << " danh truoc" << endl;
		while (true)
		{
			cout << "Danh luot " << luot << ": " << endl;
			pk->hp -= this->dame;
			this->hp -= pk->dame;
			cout << "Pokemon " << this->ten << " con " << this->hp << " hp" << endl;
			cout << "Pokemon " << pk->ten << " con " << pk->hp << " hp" << endl;
			if (this->hp <= 0)
			{
				cout << "Pokemon " << pk->ten << " win" << endl;
				cout << "Pokemon " << pk->ten << " con " << pk->hp << " hp" << endl;
				break;
			}
			else if (pk->hp <= 0)
			{
				cout << "Pokemon " << this->ten << " win" << endl;
				cout << "Pokemon " << this->ten << " con " << this->hp << " hp" << endl;
				break;
			}
			luot++;
		}
	}

	else if (*pk > *this)
	{
		cout << "Pokemon " << this->ten << " danh truoc" << endl;
		while (true)
		{
			cout << "Danh luot " << luot << ": " << endl;
			pk->hp -= this->dame;
			this->hp -= pk->dame;
			cout << "Pokemon " << this->ten << " con " << this->hp << " hp" << endl;
			cout << "Pokemon " << pk->ten << " con " << pk->hp << " hp" << endl;
			if (this->hp <= 0)
			{
				cout << "Pokemon " << pk->ten << " win" << endl;
				cout << "Pokemon " << pk->ten << " con " << pk->hp << " hp" << endl;
				break;
			}
			else if (pk->hp <= 0)
			{
				cout << "Pokemon " << this->ten << " win" << endl;
				cout << "Pokemon " << this->ten << " con " << this->hp << " hp" << endl;
				break;
			}
			luot++;
		}
	}
}