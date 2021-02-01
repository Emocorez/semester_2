#include "pch.h"
#include "CppUnitTest.h"

#include "../pasko_01/Calculator.h"
#include "../pasko_01/Calculator.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace pasko01test
{
	TEST_CLASS(pasko01test)
	{
	public:
		
		TEST_METHOD(TestMultiply)
		{
			int a = 5, b = 10;
			int res = 50;

			Assert::AreEqual(multiply(a, b), res);
		}
	};
}
