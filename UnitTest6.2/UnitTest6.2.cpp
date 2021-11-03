#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.2/lab6.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62
{
	TEST_CLASS(UnitTest62)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[5] = { -1, 5, 4, 8, 9 };
			int t = Amount(a, 5);
			Assert::AreEqual(t, 3);
		}
	};
}
