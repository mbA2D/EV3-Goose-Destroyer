#include "initialization.c"
#include "fire.c"
#include "tankMovements.c"

#ifndef DEFENSE
#define DEFENSE

void defend (Tank tank0, Stats mission)
{
	float turn = 2 * 3.14159 / mission.ammoRemaining;
	bool isAttackedExtra = true; //this will only run if it has been attacked, but we still need a bool to pass to the firing function
	for (int shots = 0; shots < mission.ammoRemaining; shots ++)
	{
		turnAngle(tank0, turn + tank0.angle, isAttackedExtra);
		fire(isAttackedExtra);
	}
}

#endif