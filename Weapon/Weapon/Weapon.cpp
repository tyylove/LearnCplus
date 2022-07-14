#include"Weapon.h"
int main()
{
	Weapon* w = new Cannon;
	w->test();
	Weapon* An = new Antigrenade;
	An->test();
	Gun* hand = new HandGun;
	hand->test();
	Gun* Sniper = new SniperGun;
	Sniper->test();
}