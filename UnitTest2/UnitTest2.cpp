#include "pch.h"
#include "CppUnitTest.h"
#include "../LongLong.h"
#include "../LongLong.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			LongLong a(444, 231);
			int f = a.GetLONG2();
			Assert::AreEqual(f, 231);
		}
	};
}
