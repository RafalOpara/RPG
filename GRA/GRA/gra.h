



#pragma once
#include <iostream>
#include <string>

using namespace std;





class Wojownik
{
	string name;
	int level;
	int exp;
	int expNext;
	int hp;
	int hpMax;
	int energy;
	int damageMin;
	int damageMax;
	int defence;

public:
	Wojownik(string = "Wojownik", int = 1, int = 1, int = 1, int = 1, int = 1, int = 1, int = 1, int = 1, int = 1);
	~Wojownik();

	void attack();
	void ucieczka();

};

void menu();
/*
	switch (wybor)
	{
	case 0:
		;
		break;
	default:
		cout << "Musisz wyrbac z listy !" << endl;
		menu();
	}
}
	*/
//

//HEROS




