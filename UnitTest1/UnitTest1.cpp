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
            char* str = "n2o4no";
            Assert::AreEqual(Count(str), 1);
        }
    };
}
