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
	cout << "Witaj, dotarles na wzgorze orkow" << endl;

	cout << "Aby zmierzyc sie z krolem orkow musisz wygrac z jego slugami!!!" << endl;

	cout << "Otwo twoj pierwszy przeciwnik:" << endl;

	enemys = new Ogr();
	staty_enemys(heros, enemys);


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

	cout << "Otwo twoj pierwszy przeciwnik:" << endl;








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

	cout << "Otwo twoj pierwszy przeciwnik:" << endl;







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