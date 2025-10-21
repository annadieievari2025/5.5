#include "pch.h"
#include "CppUnitTest.h"
#include "../5.4/5.4.cpp"  

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:
		
		TEST_METHOD(TestAllProductsEqual)
		{
			// Тестові дані
			int K = 2;
			int N = 5;

			// Очікуваний результат — ітераційний спосіб
			double expected = ProductIter(K, N);

			// Перевіряємо збіг усіх способів
			Assert::AreEqual(expected, Product1(N, K, N), 1e-6, L"Product1 не збігається");
			Assert::AreEqual(expected, Product2(K, K, N), 1e-6, L"Product2 не збігається");
			Assert::AreEqual(expected, Product3(N, K, N), 1e-6, L"Product3 не збігається");
			Assert::AreEqual(expected, Product4(K, K, N), 1e-6, L"Product4 не збігається");
		}
	};
}
