#ifndef RECMULT_H
#define RECMULT_H

class RecMult
{
public:
    long long int result;

    long long int x, y, a, b, c, d, nx, ny, res;

    //RecMult();

    RecMult(long long int x);

    RecMult(long long int x,long long int y);

    void Calc(long long int , long long int);

    long long int NumberDigits(long long int);
};

#endif