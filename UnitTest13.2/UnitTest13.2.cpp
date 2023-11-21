#include "pch.h"
#include "CppUnitTest.h"
#include "../Project13.2/Macros.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest132
{
	TEST_CLASS(UnitTest132)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int x = 5, y = 10, z = 8;
			int result = MAX(x, y, z);
			Assert::AreEqual(225, result);
		}
	};
}
