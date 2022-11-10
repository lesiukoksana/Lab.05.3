#include "pch.h"
#include "CppUnitTest.h"
#include "/Student/Lab_05_3/Lab_05_3/Lab_05_3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double p;
			const double x = 1;
			p = g(x);

			Assert::AreEqual(p, 0,33124836);

		}
	};
}
