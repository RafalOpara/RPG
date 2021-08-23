

#include "gra.h"



using namespace std;

int wybor;
int wybor_bohatera;
Heros* wsk;
Heros* heros;
string imie;



//POSTACIE 


Heros::Heros(string n, int lvl, int xp, int xpn, int h, int hpm, int en,int dmgm, int dmgma, int def)
{
	name = n;
	level = lvl;
	exp = xp;
	expNext = xpn;
	hp = h;
	hpMax = hpm;
	energy=en;
	damageMin = dmgm;
	damageMax = dmgma;
	defence=def;


	
}
Heros::~Heros()
{
	cout << "kasuje dane" << endl;
}




/// /////////////////////////////




Wojownik::Wojownik(string n, int lvl, int xp, int xpn, int h, int hpm, int en, int dmgm, int dmgma, int def)
{
	name = n;
	level = lvl;
	exp = xp;
	expNext = xpn;
	hp = h;
	hpMax = hpm;
	energy = en;
	damageMin = dmgm;
	damageMax = dmgma;
	defence = def;



}
Wojownik::~Wojownik()
{
	cout << "kasuje dane" << endl;
}




void Wojownik::attack()
{
	;
}


void Wojownik::ucieczka()
{
	;
}

void Wojownik::powitanie()
{
	cout << "Witaj jestem Wojownikiem " << endl;
}

void Wojownik::interface()
{
	;
}

///////////////////////////////////

Mag::Mag(string n, int lvl, int xp, int xpn, int h, int hpm, int en, int dmgm, int dmgma, int def)
{
	name = n;
	level = lvl;
	exp = xp;
	expNext = xpn;
	hp = h;
	hpMax = hpm;
	energy = en;
	damageMin = dmgm;
	damageMax = dmgma;
	defence = def;



}
Mag::~Mag()
{
	cout << "kasuje dane" << endl;
}



void Mag::attack()
{
	;
}


void Mag::ucieczka()
{
	;
}

void Mag::powitanie()
{
	cout << "Witaj jestem magiem " << endl;
}

void Mag::interface()
{
	;
}













void menu()
{

	cout << "WELCOME IN OUR GAME !" << endl;
	cout << "1.START GAME" << endl;
	cout << "2.OPTIONS" << endl;
	cout << "3.INSTRUCTIONS" << endl;
	cout << "4.END THE GAME" << endl;
	
	cin >> wybor;

	switch (wybor)
	{
	case 1:
		start();
		break;
	default:
		break;
	}

}








void start()
{
	cout << "Witaj !!! Wybierz klase jaka chcesz grac" << endl;

	cout << "1.Wojownik" << endl;
	cout << "2.Mag" << endl;

	cout << "Wybor:";
	cin >> wybor_bohatera;

	if (wybor_bohatera == 1)
	{
		cout << "Podaj imie dla swojego bohatera: " << endl;
		cin >> imie;

		Wojownik imie(imie);

		wsk = &imie;
		wsk->powitanie();

	}

	else if (wybor_bohatera == 2)
	{
		cout << "Podaj imie dla swojego bohatera: " << endl;
		cin >> imie;
		

		 Mag imie(imie);

		
		heros->powitanie();
		heros->interface();

		
	}

}



