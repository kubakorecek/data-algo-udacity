#include "./RecMult.h"
#include <cmath>
RecMult::RecMult(long long int x)
{
	res = x;
	x = x;
	nx = NumberDigits(x);
}


RecMult::RecMult(long long int x, long long int y)
{
	res = 0;
	x = x;
	nx = NumberDigits(x);
	y = y;
	ny = NumberDigits(y);

}

void RecMult::Calc(long long int, long long int)
{

}

long long int RecMult::NumberDigits(long long int x)
{
	long long int n = 0;
	while (x)
	{
		n++;
		x = floor(x / 10);
	}
	return x;
}