#include "LorenzWheel.h"

LorenzWheel::LorenzWheel (int newWheelSize = 0, bool *newPins)
{
	wheelPosition = 0;
	wheelSize = newWheelSize;
	for (int i = 0; i < wheelSize; i++)
	{
		wheelPins[i] = newPins[i];
	}
}