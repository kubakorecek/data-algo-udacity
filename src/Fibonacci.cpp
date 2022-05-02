#include "./Fibonacci.h"
#include <iostream>
#include <string>
int Fibonacci::getResult()
{
   return this->result; 

}

void Fibonacci::setN(int n)
{
    this->n = n;
}

int Fibonacci::reccursiveAlgo(int N)
{
    if(N<2 ){return N;}
    else
    {
        return ( reccursiveAlgo(N-1) + reccursiveAlgo(N-2) );
    }
}

void Fibonacci::calc()
{
    switch(this->method)
    {
        case  DynamicAlgo :
            std::cout<<"calling dynamic method"<<std::endl;
            this->result = dynamicAlgo(this->n); 
            break;
        case Reccursive:
            std::cout<<"calling recursive method"<<std::endl;
            this->result = reccursiveAlgo(this->n); 
            break;
    }
   
}


int Fibonacci::dynamicAlgo(int N)
{
    int F_i_m2 = 0;
    int F_i_m1 = 1;
    int tmpF_i_m1 = 1;
    int F_i = 0;
    if(N<2 ){return N;}
    else
    {for(int i = 2; i < N+1; i++)
       {
          F_i = F_i_m1 + F_i_m2;
          tmpF_i_m1 = F_i_m1;
          F_i_m1 = F_i_m2;
          F_i_m2 = tmpF_i_m1;
       }
    }

    return F_i;
}

Fibonacci::Fibonacci()
{
    method = Reccursive;
}

Fibonacci::Fibonacci(int method)
{
    method = method;
}

int Fibonacci::getM()
{
   return this->method; 

}