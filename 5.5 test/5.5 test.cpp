#include "pch.h"
#include "CppUnitTest.h"
#include "../5.5/5.5.cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My55test
{
	TEST_CLASS(My55test)
	{
	public:
		TEST_METHOD(Test_NSD_Basic)
		{
			int result = NSD(48, 18);
			Assert::AreEqual(6, result);  
		}

		TEST_METHOD(Test_NSD_Equal)
		{
			int result = NSD(10, 10);
			Assert::AreEqual(10, result);                
		}
	};
}
