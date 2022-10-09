#include "¿¹Á¦ 14_Adder.h"

Adder::Adder(int a, int b)
{
	op1 = a;
	op2 = b;
}

int Adder::process()
{
	return op1 + op2;
}