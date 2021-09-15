#include "gra.h"

 Enemys* enemys;

Enemys::Enemys(string n, int h, int hm, int dmg)
	: name(n), hp(h), hpMax(hm), damage(dmg)
{
}	

Enemys::~Enemys()
{
}



Ogr::Ogr(string n, int h, int hm, int dmg)
	:Enemys (n,h,hm,dmg)
{
}

Ogr::~Ogr()
{

}


////////////////////


Smok::Smok(string n, int h, int hm, int dmg)
	:Enemys(n, h, hm, dmg)

{

}

Smok::~Smok()
{
}


/////////////////////

Demon::Demon(string n, int h, int hm, int dmg)
	:Enemys(n, h, hm, dmg)
{

}

Demon::~Demon()
{

}