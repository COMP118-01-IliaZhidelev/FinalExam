/** \file Test.cpp
* \brief tests the matrix  functions
* \author Ilia Zhidelev
* \date 27.05.2024
*/


#include "pch.h"
#include "CppUnitTest.h"
#include  "../src/Matrix.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test
{
	TEST_CLASS(Test)
	{
		double matrix[4][3] = { 1,1,1,   0,0,0, 1,1,1, 0,1,0 };
	public:
		/**
		* countes ones in the matrix
		*/
		TEST_METHOD(count_ones)
		{
			auto count = countOnes(matrix);
			Assert::AreEqual(count, 7);
		}
	};
}
