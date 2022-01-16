#include <iostream>
#include "../RecMult.h"
#include "../Fibonacci.h"
int main( void )
{

    Fibonacci f;
    f.setN(0);
    f.calc();
    std::cout<<"Working and result is: "<<f.getResult()<<std::endl;

    f.setN(8);
    f.calc();
    std::cout<<"Working and result is: "<<f.getResult()<<std::endl;

    f.setN(10);
    f.calc();
    std::cout<<"Working and result is: "<<f.getResult()<<std::endl;

    Fibonacci d("D");
    std::cout<<d.getM()<<"method is !!!!\n";
    d.setN(0);
    d.calc();
    std::cout<<"Working and result is: "<<d.getResult()<<std::endl;

    d.setN(8);
    d.calc();
    std::cout<<"Working and result is: "<<d.getResult()<<std::endl;

    d.setN(10);
    d.calc();
    std::cout<<"Working and result is: "<<d.getResult()<<std::endl;


    return 0;
}