#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab10.2.A/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            const int N = 3;
            Student students[N] = {
                {"c", 2, MATEMATYKA_EKONOMIKA, 4, 3, 4},
                {"a", 1, KOMP_NAUKY, 5, 5, 5},
                {"b", 3, INFORMATYKA, 5, 5, 5}
            };
            SortArray(students, N);

            Assert::AreEqual(students[0].prizv.c_str(), "a");
            Assert::AreEqual(students[1].prizv.c_str(), "b");
            Assert::AreEqual(students[2].prizv.c_str(), "c");
        }
    };
}
