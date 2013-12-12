#ifndef LorenzWheel_h
#define LorenzWheel_h

class LorenzWheel
{
private:
	int wheelPosition;
	int wheelSize;
	bool wheelPins[];

public:

	// Constructor and Destructor
	LorenzWheel (int newWheelSize);
	~LorenzWheel ();
};
#endif