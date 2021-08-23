#include "gra.h"

void interface(const Heros* heros)
{
	cout << "Twoj heros:\n\tImie: " << heros->name << "\n\tPoziom: " << heros->level << "\n\tZdrowie: " << heros->hp << '\n';
}