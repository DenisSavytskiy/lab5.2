#define M_PI 3.14159265358979323846
#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab№5.2.1/Lab№5.2.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double eps = 0.00001;
			double s = 0;
			int n = 0;

			S(-1, eps, n, s);
			Assert::AreEqual(s, atan(1 / -1), 0.00001);

			S(-0.5, eps, n, s);в
			Assert::AreEqual(s, atan(1 / -0.5), 0.00001);

			S(0.5, eps, n, s);
			Assert::AreEqual(s, atan(1 / 0.5), 0.00001);

			S(1, eps, n, s);
			Assert::AreEqual(s, atan(1 / 1), 0.00001);
		}
	};
}
