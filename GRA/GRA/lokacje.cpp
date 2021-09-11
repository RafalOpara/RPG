#include "gra.h"


void miasto( Heros* heros)
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
		;
	}

	else if (wybor == 2)
	{
		sklep(heros);
	}

	else if (wybor == 3)
	{
		medyk(heros);
	}

	else
	{

	}
}

