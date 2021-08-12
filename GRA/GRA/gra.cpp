

#include "gra.h"

using namespace std;

//POSTACIE 


Wojownik::Wojownik(string n, int lvl, int xp, int xpn, int h, int hpm, int en,int dmgm, int dmgma, int def)
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


void menu()
{


	cout << "WELCOME IN OUR GAME !" << endl;
	cout << "1.START GAME" << endl;
	cout << "2.OPTIONS" << endl;
	cout << "3.INSTRUCTIONS" << endl;
	cout << "4.END THE GAME" << endl;

}