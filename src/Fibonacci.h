#ifndef FIBONACCI_H
#define FIBONACCI_H
#include <string>
#include "Methods.h"
class Fibonacci
{
private:
	long int m_lResult = { 0 };
	long int m_lN = { 0 };
	long int m_lMethod;
	int ReccursiveAlgorithm(int const N);
	int DynamicAlgorithm(int const N);


public:

	Fibonacci(int const method);
	Fibonacci(void);
	int GetResult();
	void Calc();
	int getN();
	void setN(int n);
	int getMethod();

};



#endif