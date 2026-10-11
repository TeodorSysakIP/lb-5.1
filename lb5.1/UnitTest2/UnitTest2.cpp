#include "pch.h"
#include "CppUnitTest.h"
#include "../lb5.1/lb5.1.cpp"
#include <cmath>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
    TEST_CLASS(UnitTest2)
    {
    public:
        TEST_METHOD(TestMethod1)
        {
            double result = h(2.0, 3.0);
            double expected = 4.0 - sin(3.0) * cos(2.0) + 9.0;

            Assert::AreEqual(expected, result, 0.001);
        }
    };
}