#include "gra.h"

void staty( Heros* heros)


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


void sklep(Heros* heros)
{
	cout << "Witaj w naszym sklepie, oto nasze towary:" << endl;

	cout << "pieniedze:" << heros->pieniadze << endl;


	cout << "1.STALKA +9 (+100hp)/100 monet" << endl;
	cout << "2.Miecz (Maxdmg +100dmg/Mindmg 80)/100 monet" << endl;
	cout << "3.Opusc sklep" << endl;



	int zakup;

	cout << "Wybierz nr przemdiotu ktory chcesz kupic" << endl;

	cin >> zakup;


	if (zakup == 1 && heros->pieniadze>100)
	{


		heros->zbroja = "stalka";
		heros->defence = heros->defence+ 100;
		heros->pieniadze=heros->pieniadze -100;

	}

	else if (zakup == 2 && heros->pieniadze > 100)
	{


		heros->bron = "mieczor giganior";
		heros->damageMax = heros->damageMax + 100;
		heros->damageMin = heros->damageMin + 80;
		heros->pieniadze = heros->pieniadze -100;

	}
	else if (zakup == 3)
	{
		void miasto();
	}

	else if (zakup != 1 && zakup != 2 && zakup != 3)
	{
		cout << "Musisz wybrac cos ze sklepu !" << endl;
		sklep(heros);
	}
	
	else
	{
		cout << "Masz za malo pieniedzy !" << endl;
		sklep(heros);
	}


}

void ewkipunek(const Heros* heros)
{
	cout << heros->zbroja << endl;
	cout << heros->bron << endl;
	cout << heros->defence << endl;

}

void medyk(Heros* heros)
{
	cout << heros->hp << endl;

	cout << "Wybierz co chcesz kupic" << endl;

	cout << "1.Mala potka +20hp - 10 monet" << endl;
	cout << "2.Srednia potka +40hp - 18 monet" << endl;
	cout << "3.Duza potka +80hp - 35 monet" << endl;
	cout << "4.Opusc medyka" << endl;


	int zakup;

	cin >> zakup;

	if (zakup == 1 && heros->pieniadze>10)
	{
		heros->hp=heros->hp+20;
		heros->pieniadze=heros->pieniadze -10;
	}
	else if(zakup == 2 && heros->pieniadze > 18)
	{
		heros->hp=heros->hp  +40;
		heros->pieniadze=heros->pieniadze -18;
	}
	else if (zakup == 3 && heros->pieniadze > 35)
	{
		heros->hp = heros-> hp+80;
		heros->pieniadze = heros->pieniadze -35;
	}
	else if (zakup == 4)
	{
		 miasto(heros);
	}
	else if(zakup !=1 && zakup!=2 && zakup!=3)
	{
		cout << "Musisz wybrac numer z podanej listy !" << endl;
		medyk(heros);
	}
	else
	{
		cout << "Nie masz wystarczajacej liczby pieniedzy" << endl;
		medyk(heros);

	}





}

void przygoda(Heros *heros)
{
	
	cout << "Witaj, wybierz gdzie chcialbys sie udac: " << endl;
	cout << "1:Wzgorze orkow " << endl;
	cout << "2:Dolina smokow " << endl;
	cout << "3:Kraina demonow " << endl;
	cout << "4:Powrot do miasta " << endl;
	

	int wybor;

	cin >> wybor;

	if (wybor == 1)
	{
		wzgorze_orkow(heros);
	}

	else if (wybor == 2)
	{
		;//dolina_smokow(heros);
	}


	else if (wybor == 3)
	{
		;//kraina_demonow(heros);
	}

	else if (wybor == 4)
	{
		miasto(heros);
	}

	else 

	{
		cout << "Musisz wybrac jedna podanych opcji!" << endl;
		przygoda(heros);
	}


}

void walka(Heros*heros, Enemys*enemys)
{
	;
}

