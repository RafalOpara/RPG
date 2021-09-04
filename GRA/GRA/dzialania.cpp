#include "gra.h"

void staty(const Heros* heros)


{
	cout << "Poziom: " << heros->level << endl;
	cout << "Exp: " << heros->exp << "/" << heros->expNext << endl;
	cout << "Hp: " << heros->hp << "/" << heros->hpMax << endl;
	cout << "Energia: " << heros->energy << endl;
	cout << "Obrona: " << heros->defence << endl;
	cout << "Obrazenia: " << heros->damageMin << "-" << heros->damageMax << endl;

}

void powitanie(const Heros* heros)


{
	cout << "Witaj, jestem bohaterem klasy: " << heros->klasa << endl;


}


void sklep(const Heros* heros)
{
	cout << "Witaj w naszym sklepie, oto nasze towary:" << endl;

	cout << "pieniedze:" << heros->pieniadze << endl;


	cout << "1.STALKA +9 (+100hp)" << endl;
	cout << "2.Miecz (+100dmg)" << endl;

	int zakup;

	cout << "Wybierz nr przemdiotu ktory chcesz kupic" << endl;

	cin >> zakup;


	if (zakup == 1)
	{
		
		
		heros->zbroja = "stalka";
		
	}

	else if (zakup == 2)
	{
		
		
		heros->bron = "mieczor giganior";
		
	}
	else if (zakup == 0)
	{
		poczatek();
	}
	
	else
	{
		cout << "Musisz wybrac cos ze sklepu !" << endl;

	}


}

void ewkipunek(const Heros* heros)
{
	cout << heros->zbroja << endl;
	cout << heros->bron << endl;

}