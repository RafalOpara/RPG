#include "gra.h"

int wynik = 0; 
int poziom_ork = 1;
int poziom_smok = 1;
int poziom_demon = 1;

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

	

	if (poziom_ork==1)
	{
		cout << "Witaj, dotarles na wzgorze orkow" << endl;

		cout << "Aby zmierzyc sie z krolem orkow musisz wygrac z jego slugami!!!" << endl;

		cout << "Otwo twoj pierwszy przeciwnik:" << endl;

		cout << endl;
		cout << endl;
		cout << endl;

		enemys = new Ogr("Pierwszy sluga",50,50,10);
		staty_enemys(heros, enemys);

		cout << endl;
		cout << endl;
		cout << endl;
		walka(heros, enemys);

		if (wynik == 1)
		{
			poziom_ork=poziom_ork+1;
		}

		cout << endl;
		cout << endl;
		cout << endl;

		miasto(heros, enemys);
	}
	else if (poziom_ork==2)
	{
		cout << "WZGORZE ORKOW" << endl;
		cout << "OTO TWOJ KOLEJNY PRZECIWNIK" << endl;

		enemys = new Ogr("Drugi sluga", 100, 100, 20);

		cout << endl;
		cout << endl;
		cout << endl;

		staty_enemys(heros, enemys);

		cout << endl;
		cout << endl;
		cout << endl;

		walka(heros, enemys);
		if (wynik == 1)
		{
			poziom_ork++;
		}

		cout << endl;
		cout << endl;
		cout << endl;
		
		miasto(heros, enemys);
	}
	else if (poziom_ork==3)
	{
		cout << "WZGORZE ORKOW" << endl;
		cout << "OTO TWOJ KOLEJNY PRZECIWNIK" << endl;

		enemys = new Ogr("Trzeci sluga", 200, 200, 30);

		cout << endl;
		cout << endl;
		cout << endl;


		staty_enemys(heros, enemys);

		cout << endl;
		cout << endl;
		cout << endl;

		walka(heros, enemys);
		if (wynik == 1)
		{
			poziom_ork++;
		}

		cout << endl;
		cout << endl;
		cout << endl;

		miasto(heros, enemys);
	}
	else
	{
		cout << "Pokonales juz  wszystkich Orkow!" << endl;
		cout << "Udaj sie w inne miejsce aby pokonac kolejnych wrogow" << endl;

		cout << endl;
		cout << endl;
		cout << endl;

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
	if (poziom_smok == 1)
	{
		cout << "Witaj, dotarles na wzgorze orkow" << endl;

		cout << "Aby zmierzyc sie z krolem orkow musisz wygrac z jego slugami!!!" << endl;

		cout << "Otwo twoj pierwszy przeciwnik:" << endl;

		enemys = new Ogr("Pierwszy sluga", 50, 50, 10);

		cout << endl;
		cout << endl;
		cout << endl;


		staty_enemys(heros, enemys);

		cout << endl;
		cout << endl;
		cout << endl;

		walka(heros, enemys);
		if (wynik == 1)
		{
			poziom_smok++;
		}

		cout << endl;
		cout << endl;
		cout << endl;


		miasto(heros, enemys);
	}
	else if (poziom_smok == 2)
	{
		cout << "WZGORZE ORKOW" << endl;
		cout << "OTO TWOJ KOLEJNY PRZECIWNIK" << endl;

		enemys = new Ogr("Drugi sluga", 100, 100, 20);

		cout << endl;
		cout << endl;
		cout << endl;


		staty_enemys(heros, enemys);

		cout << endl;
		cout << endl;
		cout << endl;

		walka(heros, enemys);
		if (wynik == 1)
		{
			poziom_smok++;
		}

		cout << endl;
		cout << endl;
		cout << endl;


		miasto(heros, enemys);
	}
	else if (poziom_smok == 3)
	{
		cout << "WZGORZE ORKOW" << endl;
		cout << "OTO TWOJ KOLEJNY PRZECIWNIK" << endl;

		enemys = new Ogr("Trzeci sluga", 200, 200, 30);

		cout << endl;
		cout << endl;
		cout << endl;


		staty_enemys(heros, enemys);

		cout << endl;
		cout << endl;
		cout << endl;


		walka(heros, enemys);
		if (wynik == 1)
		{
			poziom_smok++;
		}

		cout << endl;
		cout << endl;
		cout << endl;


		miasto(heros, enemys);
	}
	else
	{
		cout << "Pokonales juz  wszystkich Orkow!" << endl;
		cout << "Udaj sie w inne miejsce aby pokonac kolejnych wrogow" << endl;

		cout << endl;
		cout << endl;
		cout << endl;

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




void kraina_demonow(Heros* heros, Enemys* enemys)
{
	if (poziom_demon == 1)
	{
		cout << "Witaj, dotarles na wzgorze orkow" << endl;

		cout << "Aby zmierzyc sie z krolem orkow musisz wygrac z jego slugami!!!" << endl;

		cout << "Otwo twoj pierwszy przeciwnik:" << endl;

		enemys = new Ogr("Pierwszy sluga", 50, 50, 10);

		cout << endl;
		cout << endl;
		cout << endl;


		staty_enemys(heros, enemys);

		cout << endl;
		cout << endl;
		cout << endl;


		walka(heros, enemys);
		if (wynik == 1)
		{
			poziom_demon++;
		}

		miasto(heros, enemys);
	}
	else if (poziom_demon == 2)
	{
		cout << "WZGORZE ORKOW" << endl;
		cout << "OTO TWOJ KOLEJNY PRZECIWNIK" << endl;

		enemys = new Ogr("Drugi sluga", 100, 100, 20);

		cout << endl;
		cout << endl;
		cout << endl;


		staty_enemys(heros, enemys);

		cout << endl;
		cout << endl;
		cout << endl;


		walka(heros, enemys);
		if (wynik == 1)
		{
			poziom_demon++;
		}

		cout << endl;
		cout << endl;
		cout << endl;


		miasto(heros, enemys);
	}
	else if (poziom_demon == 3)
	{
		cout << "WZGORZE ORKOW" << endl;
		cout << "OTO TWOJ KOLEJNY PRZECIWNIK" << endl;

		enemys = new Ogr("Trzeci sluga", 200, 200, 30);

		cout << endl;
		cout << endl;
		cout << endl;


		staty_enemys(heros, enemys);

		cout << endl;
		cout << endl;
		cout << endl;


		walka(heros, enemys);
		if (wynik == 1)
		{
			poziom_demon++;
		}

		cout << endl;
		cout << endl;
		cout << endl;

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

