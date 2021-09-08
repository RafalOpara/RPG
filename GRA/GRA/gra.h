#include <iostream>
#include <string>
#include <windows.h>

using namespace std;



void menu();
void start();
void staty();
void powitanie();
void poczatek();
void sklep();
void ekwipunek();
void rozgrywa();
void miasto();



//FUNCKJA WIRTUALNA DLA BOHETEROW GLOWNYCH
class Heros
{
protected:
	string name;
	int level;
	int exp;
	int expNext;
	int hp;
	int hpMax;
	int energy;
	int damageMin;
	int damageMax;
	int defence;
	string klasa;
public:
	int pieniadze;
	string zbroja;
	string bron;






public:
	explicit Heros(string = "n", int = 1, int = 1, int = 1, int = 1, int = 1, int = 1, int = 1,
		int = 1, int = 1, string = "klasa", int = 1, string = "brak", string = "brak");
	virtual ~Heros();

	friend void powitanie(const Heros* heros);
	friend void staty( Heros* heros);
	friend void sklep(Heros* heros);
	friend void ewkipunek(const Heros* heros);
	friend void rozgrywka(Heros* heros);
	friend void miasto( Heros* heros);





};
//

class Wojownik :public Heros
{
	int* wsk = nullptr;

public:
	Wojownik(string = "Wojownik", int = 1, int = 1, int = 1, int = 1, int = 1, int = 1, int = 1,
		int = 1, int = 1, string = "Wojownik", int = 1, string = "brak", string = "brak");
	~Wojownik();







};
//

//2KLASA

class Mag :public Heros
{

public:
	Mag(string = "Mag", int = 1, int = 1, int = 1, int = 1, int = 1, int = 1,
		int = 1, int = 1, int = 1, string = "Mag", int = 1, string = "brak", string = "brak");
	~Mag();




};
//