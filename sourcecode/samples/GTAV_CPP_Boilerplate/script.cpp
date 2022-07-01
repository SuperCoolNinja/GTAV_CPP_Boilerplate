#include "script.h"
#include <cmath>
#include <string>

/*Copyright for (C) Alexander Blade (NATIVE TRAINER BASE CODE)*/
/*Script made by SuperCoolNinja*/


static float getDistance(float a_X, float a_Y, float a_Z, float b_X, float b_Y, float b_Z)
{
	auto x = a_X - b_X;
	auto y = a_Y - b_Y;
	auto z = a_Z - b_Z;
	auto sumDist = x * x + y * y + z * z;
	auto res = std::sqrt(sumDist);
	return res;
}


//Main entry :
void ScriptMain()
{
	int timerOptimize{1000};

	while (true)
	{
		WAIT(timerOptimize);
	}
}
