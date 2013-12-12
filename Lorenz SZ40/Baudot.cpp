#include "Baudot.h"
#include <iostream>

using namespace std;

char Baudot::charAsciiToBaudot (char baudotCharacter = 0)
{
	return baudotLettersToAscii[baudotCharacter];
};

Baudot::Baudot ()
{
	baudotLettersToAscii = "*E-A SIU,DRJNFCKTZLWHYPQOBG!MXV.";

};

Baudot::~Baudot ()
{

};