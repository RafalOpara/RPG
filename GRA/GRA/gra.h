#include <iostream>
#include <string>

using namespace std;

void menu();
void start();
void interface();

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

public:
	explicit Heros(string = "n", int = 1, int = 1, int = 1, int = 1, int = 1, int = 1, int = 1, int = 1, int = 1);
	virtual ~Heros();

	virtual void attack() = 0; //czysta funkcja wirtualna
	virtual void ucieczka() = 0;
	virtual void powitanie() = 0;
	friend void interface(const Heros* heros);
};
//

class Wojownik :public Heros
{
	int* wsk = nullptr;

public:
	Wojownik(string = "Wojownik", int = 1, int = 1, int = 1, int = 1, int = 1, int = 1, int = 1, int = 1, int = 1);
	~Wojownik();

	void attack();
	void ucieczka();
	void powitanie();




};
//

//2KLASA

class Mag :public Heros
{

public:
	Mag(string = "Mag", int = 1, int = 1, int = 1, int = 1, int = 1, int = 1, int = 1, int = 1, int = 1);
	~Mag();

	void attack();
	void ucieczka();
	void powitanie();


};
//





