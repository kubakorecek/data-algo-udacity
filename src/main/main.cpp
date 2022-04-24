#include <iostream>
#include "../RecMult.h"
#include "../Fibonacci.h"
#include <vector>

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

    Fibonacci d(DynamicAlgo);
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
    
    std::vector<int> sequence = {5,7,4,-3,1,10,4,5,8,9,3};

    return 0;
}