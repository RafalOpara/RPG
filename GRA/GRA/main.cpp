#include "gra.h"

using namespace std;

int running = 1;
Heros* heros;

int main()
{
	while (running)
		menu();
	delete heros;
	return 0;
} 