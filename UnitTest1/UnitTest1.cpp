#include "pch.h"
#include "CppUnitTest.h"
#include "../lab.8.1.rec/lab.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char row[] = "neoniontonsonyo";
			int k = 5;
			int t = Count(row,1);
			Assert::AreEqual(t, k);
		}
	};
}
