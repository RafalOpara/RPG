#include <iostream>
#include <string>
#include <windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int wynik = 0;

class Enemys;
class Heros;




void staty_enemys(Heros* heros, Enemys* enemys);
void menu();
void start();
void staty(Heros* heros, Enemys* enemys);
void powitanie();
void poczatek();
void sklep();
void ekwipunek();
void rozgrywa();
void miasto(Heros* heros, Enemys* enemys);
void medyk(Heros* heros, Enemys* enemys);
void przygoda(Heros* heros, Enemys* enemys);
void wzgorze_orkow(Heros* heros, Enemys* enemys);
void dolina_smokow(Heros* heros, Enemys* enemys);
void kraina_demonow(Heros* heros, Enemys* enemys);
void tura_herosa(Heros* heros, Enemys* enemys);
void lvl_up(Heros* heros, Enemys* enemys);
void walka(Heros* heros, Enemys* enemys);



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

	friend void staty_enemys(Heros* heros, Enemys* enemys);
	friend void powitanie(const Heros* heros);
	friend void staty(Heros* heros, Enemys* enemys);
	friend void sklep(Heros* heros);
	friend void ewkipunek(const Heros* heros);
	friend void rozgrywka(Heros* heros);
	friend void miasto(Heros* heros, Enemys* enemys);
	friend void medyk(Heros* heros, Enemys* enemys);
	friend void przygoda(Heros* heros, Enemys* enemys);
	friend void wzgorze_orkow(Heros* heros, Enemys* enemys);
	friend void dolina_smokow(Heros* heros, Enemys* enemys);
	friend void kraina_demonow(Heros* heros, Enemys* enemys);
	friend void walka(Heros* heros, Enemys* enemys);
	friend void tura_herosa(Heros* heros, Enemys* enemys);
	friend void lvl_up(Heros* heros, Enemys* enemys);





};
//

class Wojownik :public Heros
{
	int* wsk = nullptr;

public:
	Wojownik(string = "Wojownik", int = 1, int = 1, int = 100, int = 30, int = 30, int = 1, int = 1,
		int = 11, int = 30, string = "Wojownik", int = 1000, string = "brak", string = "brak");
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
	friend void wzgorze_orkow(Heros* heros, Enemys* enemys);
	friend void dolina_smokow(Heros* heros, Enemys* enemys);
	friend void kraina_demonow(Heros* heros, Enemys* enemys);
	friend void przygoda(Heros* heros, Enemys* enemys);
	friend void miasto(Heros* heros, Enemys* enemys);
	friend void medyk(Heros* heros, Enemys* enemys);
	friend void staty(Heros* heros, Enemys* enemys);
	friend void tura_herosa(Heros* heros, Enemys* enemys);
	friend void staty_enemys(Heros* heros, Enemys* enemys);
	friend void lvl_up(Heros* heros, Enemys* enemys);

	
};

class Ogr :public Enemys
{


public:

	Ogr(string = "Org", int = 50, int = 50, int = 10);
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