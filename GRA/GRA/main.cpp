#include "gra.h"

using namespace std;


int running = 1;
Heros* heros;
Enemys* enemy;


int main()
{

	while (running)
		menu();
	delete heros;
	return 0;
}