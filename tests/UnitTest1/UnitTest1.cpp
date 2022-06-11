#include "pch.h"
#include "CppUnitTest.h"
#include "..\..\src\Fibonacci.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTestFibonacci)
	{
	public:
		
        TEST_METHOD(TestMethodRecurssive)
        {
            Fibonacci f;
            f.setN(0);
            f.Calc();
            Assert::AreEqual(0, f.GetResult());

            f.setN(8);
            f.Calc();
            Assert::AreEqual(21, f.GetResult());

            f.setN(10);
            f.Calc();
            Assert::AreEqual(55, f.GetResult());
        };

        TEST_METHOD(TestMethodDynamic)
        {

            Fibonacci f(DynamicAlgo);
            f.setN(0);
            f.Calc();
            Assert::AreEqual(0, f.GetResult());

            f.setN(8);
            f.Calc();
            Assert::AreEqual(21, f.GetResult());

            f.setN(10);
            f.Calc();
            Assert::AreEqual(55, f.GetResult());
        }
	};
}
