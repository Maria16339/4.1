#include "pch.h"
#include "CppUnitTest.h"
#include"C://Users/User/source/repos/4.1/4.1/Progression_Amount.h"
#include"C://Users/User/source/repos/4.1/4.1/Progression_Amount.cpp"
#include"C://Users/User/source/repos/4.1/4.1/ArithmeticProgression.h"
#include"C://Users/User/source/repos/4.1/4.1/ArithmeticProgression.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest42
{
	TEST_CLASS(UnitTest42)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Arithmecic z(1.0, 3.0, 2.0, 1);
			Assert::AreEqual(z.Sum_progression(), 4.0);
		}
	};
}
