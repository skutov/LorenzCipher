#include <stdio.h>
#include <fstream>
#include <string>
#include <iostream>

#ifndef Baudot_h
#define Baudot_h

class Baudot
{
private:
	std::string baudotLettersToAscii;

	char charAsciiToBaudot (char baudotCharacter);

public:

	// Constructor and Destructor
	Baudot ();
	~Baudot ();


};
#endif