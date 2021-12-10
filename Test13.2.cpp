#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab13.2\Lab13.2.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int a = MAX(POW2(-3), 2);
			Assert::AreEqual(a, 9);
		}
	};
}
