
#include <iostream>
#include <string>

using namespace std;

//FUNCKJA WIRTUALNA DLA BOHETEROW GLOWNYCH
class Heros
{
public:
	virtual void attack() = 0; //czysta funkcja wirtualna
	virtual void ucieczka() = 0;
	virtual void powitanie() = 0;
	virtual void interface() = 0;


	friend void interface();
};
//

//1KLASA
class Wojownik :public Heros
{
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

public:
	Wojownik(string = "Wojownik", int = 1, int = 1, int = 1, int = 1, int = 1, int = 1, int = 1, int = 1, int = 1);
	~Wojownik();

	virtual void attack();
	virtual void ucieczka();
	virtual void powitanie();
	virtual void interface();

	

};
//

//2KLASA

class Mag :public Heros
{
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

public:
	Mag(string = "Wojownik", int = 1, int = 1, int = 1, int = 1, int = 1, int = 1, int = 1, int = 1, int = 1);
	~Mag();

	virtual void attack();
	virtual void ucieczka();
	virtual void powitanie();
	virtual void interface();

	
};
//
void menu();
void start();
void interface();






