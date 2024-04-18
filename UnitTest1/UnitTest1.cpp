#include "pch.h"
#include "CppUnitTest.h"
#include"../3.6/D1.cpp"
#include"../3.6/D2.cpp"
#include"../3.6/B.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			D1 o1(111, 222);
			D2 o2(1000, 2000);
			Assert::AreEqual(sizeof(D2), sizeof(D1));
		}
	};
}
