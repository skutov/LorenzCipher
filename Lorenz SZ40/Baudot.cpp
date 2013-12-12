#include "Baudot.h"
#include <iostream>
#include <cctype>

using namespace std;

unsigned char Baudot::charAsciiToBaudot (char asciiCharacter = 0)
{
	switch (asciiCharacter)
	{
	case 'A':
	case 'a':
		return 0x03;
		break;

	case 'B':
	case 'b':
		return 0x19;
		break;

	case 'C':
	case 'c':
		return 0x0E;
		break;

	case 'D':
	case 'd':
		return 0x09;
		break;

	case 'E':
	case 'e':
		return 0x01;
		break;

	case 'F':
	case 'f':
		return 0x0D;
		break;

	case 'G':
	case 'g':
		return 0x1A;
		break;

	case 'H':
	case 'h':
		return 0x14;
		break;

	case 'I':
	case 'i':
		return 0x06;
		break;

	case 'J':
	case 'j':
		return 0x0B;
		break;

	case 'K':
	case 'k':
		return 0x0F;
		break;

	case 'L':
	case 'l':
		return 0x12;
		break;

	case 'M':
	case 'm':
		return 0x1C;
		break;

	case 'N':
	case 'n':
		return 0x0C;
		break;

	case 'O':
	case 'o':
		return 0x18;
		break;

	case 'P':
	case 'p':
		return 0x16;
		break;

	case 'Q':
	case 'q':
		return 0x17;
		break;

	case 'R':
	case 'r':
		return 0x0A;
		break;

	case 'S':
	case 's':
		return 0x05;
		break;

	case 'T':
	case 't':
		return 0x10;
		break;

	case 'U':
	case 'u':
		return 0x07;
		break;

	case 'V':
	case 'v':
		return 0x1E;
		break;

	case 'W':
	case 'w':
		return 0x13;
		break;

	case 'X':
	case 'x':
		return 0x1D;
		break;

	case 'Y':
	case 'y':
		return 0x15;
		break;

	case 'Z':
	case 'z':
		return 0x11;
		break;

	case ',':
		return 0x08;
		break;

	case '-':
		return 0x02;
		break;

	case '.':
		return 0x1F;
		break;

	case '!':
		return 0x1B;
		break;

	case '*':
	default:
		return 0x00;
	}
};

char Baudot::charBaudotToAscii (char baudotCharacter = 0)
{
		return baudotLettersToAscii[baudotCharacter];
};

Baudot::Baudot ()
{
	baudotLettersToAscii = ".VXM!GBOQPYHWLZTKCFNJRD.UIS A-E*";
};

Baudot::~Baudot ()
{

};