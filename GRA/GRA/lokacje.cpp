#include "gra.h"



void miasto(Heros* heros, Enemys* enemys)
{
	cout << "Witaj, gre rozpoczynasz w miescie" << endl;
	cout << "Wybierz co chcesz zrobic" << endl;


	cout << "1.Przygoda" << endl;
	cout << "2.Sklep" << endl;
	cout << "3.Medyk" << endl;

	int wybor;

	cin >> wybor;

	if (wybor == 1)
	{
		przygoda(heros, enemys);
	}

	else if (wybor == 2)
	{
		sklep(heros);
	}

	else if (wybor == 3)
	{
		medyk(heros, enemys);
	}

	else
	{
		;
	}
}

void wzgorze_orkow(Heros* heros, Enemys* enemys)
{

	int poziom_ork = 1;

	if (poziom_ork==1)
	{
		cout << "Witaj, dotarles na wzgorze orkow" << endl;

		cout << "Aby zmierzyc sie z krolem orkow musisz wygrac z jego slugami!!!" << endl;

		cout << "Otwo twoj pierwszy przeciwnik:" << endl;

		enemys = new Ogr("Pierwszy sluga",50,50,10);
		staty_enemys(heros, enemys);
		walka(heros, enemys);
		if (wynik == 1)
		{
			poziom_ork++;
		}

		miasto(heros, enemys);
	}
	else if (poziom_ork==2)
	{
		cout << "WZGORZE ORKOW" << endl;
		cout << "OTO TWOJ KOLEJNY PRZECIWNIK" << endl;

		enemys = new Ogr("Drugi sluga", 100, 100, 20);
		staty_enemys(heros, enemys);
		walka(heros, enemys);
		if (wynik == 1)
		{
			poziom_ork++;
		}
		
		miasto(heros, enemys);
	}
	else if (poziom_ork==3)
	{
		cout << "WZGORZE ORKOW" << endl;
		cout << "OTO TWOJ KOLEJNY PRZECIWNIK" << endl;

		enemys = new Ogr("Trzeci sluga", 200, 200, 30);
		staty_enemys(heros, enemys);
		walka(heros, enemys);
		if (wynik == 1)
		{
			poziom_ork++;
		}
		miasto(heros, enemys);
	}
	else
	{
		cout << "Pokonales juz  wszystkich Orkow!" << endl;
		cout << "Udaj sie w inne miejsce aby pokonac kolejnych wrogow" << endl;
		miasto(heros, enemys);
	}
	cout << "Co chcesz zrobic: " << endl;
	cout << "1.Walka " << endl;
	cout << "2.Ucieczka" << endl;
	
	int wybor;
	cin >> wybor;

	if (wybor == 1)
	{
		walka(heros, enemys);
	}

	else if (wybor == 2)
	{
		przygoda(heros, enemys);
	}

	else
	{
		cout << "Musisz wybrac jedna z powyzszych opcji" << endl;
	}

}

void dolina_smokow(Heros* heros, Enemys* enemys)
{
	cout << "Witaj, dotarles do doliny smokow" << endl;

	cout << "Aby zmierzyc sie z krolem smokow musisz wygrac z jego slugami!!!" << endl;

	cout << "Otwo twoj przeciwnik:" << endl;








	cout << "Co chcesz zrobic: " << endl;
	cout << "1.Walka " << endl;
	cout << "2.Ucieczka" << endl;

	int wybor;
	cin >> wybor;

	if (wybor ==1)
	{
		enemys = new Smok();
		walka(heros, enemys);
	}

	else if (wybor == 2)
	{
		przygoda(heros, enemys);
	}

	else
	{
		cout << "Musisz wybrac jedna z powyzszych opcji" << endl;
	}

}


void kraina_demonow(Heros* heros, Enemys* enemys)
{
	cout << "Witaj, dotarles do doliny smokow" << endl;

	cout << "Aby zmierzyc sie z krolem smokow musisz wygrac z jego slugami!!!" << endl;

	cout << "Otwo twoj przeciwnik:" << endl;







	cout << "Co chcesz zrobic: " << endl;
	cout << "1.Walka " << endl;
	cout << "2.Ucieczka" << endl;

	int wybor;
	cin >> wybor;

	if (wybor == 1)
	{
		enemys = new Demon();
		walka(heros, enemys);
	}

	else if (wybor == 2)
	{
		przygoda(heros, enemys);
	}

	else
	{
		cout << "Musisz wybrac jedna z powyzszych opcji" << endl;
	}

}