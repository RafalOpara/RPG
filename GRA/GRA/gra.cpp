
#include "gra.h"



using namespace std;

extern int running;
  Heros* heros;
 

string imie;



//POSTACIE 


Heros::Heros(string n, int lvl, int xp, int xpn, int h, int hpm, int en, int dmgm, int dmgma, int def, string k, int pi, string br, string zbr)
	: name(n), level(lvl), exp(xp), expNext(xpn), hp(h), hpMax(hpm), energy(en), damageMin(dmgm), damageMax(dmgma), defence(def), klasa(k), pieniadze(pi), bron(br), zbroja(zbr)
{
}

Heros::~Heros()
{
	cout << "Heros: kasuje dane" << endl;
}




/// /////////////////////////////




Wojownik::Wojownik(string n, int lvl, int xp, int xpn, int h, int hpm, int en, int dmgm, int dmgma, int def, string k, int pi, string br, string zbr)
	: Heros(n, lvl, xp, xpn, h, hpm, en, dmgm, dmgma, def, k, pi, br, zbr)
{
	wsk = new int;
}

Wojownik::~Wojownik()
{
	delete wsk;
	cout << "wojo: kasuje dane" << endl;
}







///////////////////////////////////

Mag::Mag(string n, int lvl, int xp, int xpn, int h, int hpm, int en, int dmgm, int dmgma, int def, string k, int pi, string br, string zbr)
	: Heros(n, lvl, xp, xpn, h, hpm, en, dmgm, dmgma, def, k, pi, br, zbr)
{
}

Mag::~Mag()
{
	cout << "kasuje dane" << endl;
}




////////////////


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
		powitanie(heros);
		staty(heros);


	}


	else if (wybor_bohatera == 2)
	{
		cout << "Podaj imie dla swojego bohatera: " << endl;
		cin >> imie;
		heros = new Mag(imie);
		powitanie(heros);
		staty(heros);




	}

	int potwierdzenie;

	cout << "Wybierz 1 aby zaczac przygode wybranym bohaterem" << endl;
	cout << "Wybierz 2 aby wrocic do wyboru bohatera" << endl;

	cin >> potwierdzenie;

	if (potwierdzenie == 1)
	{
		poczatek();
	}
	else
	{
		start();

	}
}





void poczatek()

{
	heros;

	cout << "Gra dla uzytkownika " << imie << " rozpocznie sie za:" << endl;

	Sleep(1000);

	system("cls");

	Sleep(1000);

	for (int i = 3; i > 0; i--)
	{
		cout << i << "." << endl;
		Sleep(1000);
		system("cls");







	}



	

	rozgrywka(heros);
	
}

void rozgrywka(Heros* heros)
{
	while (heros->hp > 0)
	{
		staty(heros);
		miasto(heros);
		
	}
	return ;
}	


