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

public:

	// Constructor and Destructor
	Baudot ();
	~Baudot ();

	unsigned char charAsciiToBaudot (char baudotCharacter);
	char charBaudotToAscii (char asciiCharacter);

};
#endif