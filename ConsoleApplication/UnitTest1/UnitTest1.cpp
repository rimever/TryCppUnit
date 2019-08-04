#include "pch.h"
#include "CppUnitTest.h"
#include "../ConsoleApplication/Calculation.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int result = add(2,2);
			Assert::AreEqual(result,4);
		}
	};
}
