#include "./Fibonacci.h"
#include <iostream>
#include <string>

int Fibonacci::GetResult()
{
	return this->m_lResult;

}

void Fibonacci::setN(int n)
{
	this->m_lN = n;
}

int Fibonacci::ReccursiveAlgorithm(int const N)
{
	if (N < 2) { return N; }
	else
	{
		return (ReccursiveAlgorithm(N - 1) + ReccursiveAlgorithm(N - 2));
	}
}

void Fibonacci::Calc()
{
	switch (this->m_lMethod)
	{
	case DynamicAlgo:
		std::cout << "calling dynamic method" << std::endl;
		this->m_lResult = DynamicAlgorithm(this->m_lN);
		break;
	case Reccursive:
		std::cout << "calling recursive method" << std::endl;
		this->m_lResult = ReccursiveAlgorithm(this->m_lN);
		break;
	}

}


int Fibonacci::DynamicAlgorithm(int const N)
{
	auto F_i_m2 = 1;
	auto F_i_m1 = 0;
	auto F_i = 0;
	if (N < 2) { return N; }
	else
	{
		for (int i = 2; i < N + 1; i++)
		{
			F_i = F_i_m1 + F_i_m2;
			F_i_m1 = F_i_m2;
			F_i_m2 = F_i;
		}
	}

	return F_i;
}

Fibonacci::Fibonacci(void)
{
	m_lMethod = Reccursive;
}

Fibonacci::Fibonacci(int const method)
{
	m_lMethod = method;
}

int Fibonacci::getN()
{
	return this->m_lN;

}

int Fibonacci::getMethod()
{
	return this->m_lMethod;

}