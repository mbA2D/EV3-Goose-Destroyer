#include "initialization.c"
#include "fire.c"
#include "tankMovements.c"

#ifndef DEFENSE
#define DEFENSE

void defend (Tank tank0, int ammoRemaining)
{
	float turn = 2 * 3.14159 / ammoRemaining;
	bool isAttacked = true;
	for (int shots = 0; shots < ammoRemaining; shots ++)
	{
		turnAngle(tank0, turn + tank0.angle, isAttacked);
		fire(isAttacked);
	}

}

#endif isAttacked); rue; "  |� |� � ���n�vE� ��nh   |� HF�vE0� ,��n�wE�/�   \� <��nC��n-f6r    �0HF|� l� l�  �Z    O�T �vE �0�� ɂY     �T �vE   �0   C : \ U s e r s \ C a l e b   D u e c k \ D o c u m e n t s   a s t e r \ d e f e n s e . c                                                                                                                   
