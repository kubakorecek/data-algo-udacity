#include <cmath>

class RecMult
{
public:
    long long int result;

    long long int x,y,a,b,c,d,n, res;

    RecMult(long long int x)
    {
        res = x;
        x = x;
        n = NumberDigits(x);
    }

    void Calc(long long int , long long int);

    long long int NumberDigits(long long int);
};


void RecMult::Calc(long long int, long long int)
{
    
};

long long int RecMult::NumberDigits(long long int x)
{
    long long int n = 0;
    while (x)
    {
        n++;
        x = floor(x/10);
    }
    return x;
};