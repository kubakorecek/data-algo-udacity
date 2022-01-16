#ifndef FIBONACCI_H
#define FIBONACCI_H
#include <string>


class Fibonacci
{
    private:
        int result= {0};
        int n = {0};
        int reccursiveAlgo(int N);
        int dynamicAlgo(int N);
        

    public:
        string method;
        Fibonacci(std::string method);
        Fibonacci();
        int getResult();
        std::string getM();
        void setN(int n);
        void calc();

};



#endif