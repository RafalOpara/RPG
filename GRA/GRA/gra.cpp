#include "gra.h"


using namespace std;

extern int running;
extern Heros* heros;

//POSTACIE 


Heros::Heros(string n, int lvl, int xp, int xpn, int h, int hpm, int en, int dmgm, int dmgma, int def)
	: name(n), level(lvl), exp(xp), expNext(xpn), hp(h), hpMax(hpm), energy(en), damageMin(dmgm), damageMax(dmgma), defence(def)
{
}

Heros::~Heros()
{
	cout << "Heros: kasuje dane" << endl;
}




/// /////////////////////////////




Wojownik::Wojownik(string n, int lvl, int xp, int xpn, int h, int hpm, int en, int dmgm, int dmgma, int def)
	: Heros(n, lvl, xp, xpn, h, hpm, en, dmgm, dmgma, def)
{
	wsk = new int;
}

Wojownik::~Wojownik()
{
	delete wsk;
	cout << "wojo: kasuje dane" << endl;
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

///////////////////////////////////

Mag::Mag(string n, int lvl, int xp, int xpn, int h, int hpm, int en, int dmgm, int dmgma, int def)
	: Heros(n, lvl, xp, xpn, h, hpm, en, dmgm, dmgma, def)
{
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

void menu()
{
	int wybor;

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
	case 4:
		running = 0;
		break;
	default:
		break;
	}

}

void start()
{
	string imie;
	int wybor_bohatera;

	cout << "Witaj !!! Wybierz klase jaka chcesz grac" << endl;

	cout << "1.Wojownik" << endl;
	cout << "2.Mag" << endl;

	cout << "Wybor:";
	cin >> wybor_bohatera;

	if (wybor_bohatera == 1)
	{
		cout << "Podaj imie dla swojego bohatera: " << endl;
		cin >> imie;
		heros = new Wojownik(imie);
	}

	else if (wybor_bohatera == 2)
	{
		cout << "Podaj imie dla swojego bohatera: " << endl;
		cin >> imie;
		heros = new Mag(imie);
	}
	interface(heros);

}



