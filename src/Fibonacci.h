#ifndef FIBONACCI_H
#define FIBONACCI_H
#include <string>
#include "../Methods.h"
class Fibonacci
{
    private:
        int result= {0};
        int n = {0};
        int reccursiveAlgo(int N);
        int dynamicAlgo(int N);
        

    public:
        int method;
        Fibonacci(int method);
        Fibonacci();
        int getResult();
        int getM();
        void setN(int n);
        void calc();

};



#endif