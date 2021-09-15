#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

class Enemys;

void menu();
void start();
void staty();
void powitanie();
void poczatek();
void sklep();
void ekwipunek();
void rozgrywa();
void miasto();
void medyk();
void przygoda();
void wzgorze_orkow();
void dolina_smokow();
void kraina_demonow();
void walka();


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
	friend void medyk(Heros* heros);
	friend void przygoda(Heros* heros);
	friend void wzgorze_orkow(Heros* heros);
	friend void dolina_smokow(Heros* heros);
	friend void kraina_demonow(Heros* heros);
	friend void walka(Heros* heros, Enemys*enemys);
	





};
//

class Wojownik :public Heros
{
	int* wsk = nullptr;

public:
	Wojownik(string = "Wojownik", int = 1, int = 1, int = 1, int = 1, int = 1, int = 1, int = 1,
		int = 1, int = 1, string = "Wojownik", int = 1000, string = "brak", string = "brak");
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


//ENEMY


class Enemys
{
protected:

	string name;
	int hp;
	int hpMax;
	int damage;


public:
	explicit Enemys(string = "Org", int = 1, int = 1, int = 1);
	virtual ~Enemys();




	friend void walka(Heros* heros, Enemys* enemys);



};

class Ogr:public Enemys
{


public:
	
	Ogr(string = "Org", int = 1, int = 1, int = 1);
	~Ogr();
};


class Smok :public Enemys
{
protected:


public:

	Smok(string = "Smok", int = 1, int = 1, int = 1);
	~Smok();
};

class Demon :public Enemys
{



public:
	Demon(string = "Demon", int = 1, int = 1, int = 1);
	~Demon();
};