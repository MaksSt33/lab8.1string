#include "pch.h"
#include "CppUnitTest.h"
#include "../lab8.1 string/lab8.1 string.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81string
{
	TEST_CLASS(UnitTest81string)
	{
	public:
		
		TEST_METHOD(TestContainsTripleStars_StandardCpp)
		{
			std::string str1 = "abc***def";
			std::string str2 = "abc**def";
			Assert::IsTrue(ContainsTripleStars(str1));
			Assert::IsFalse(ContainsTripleStars(str2));
		}

		TEST_METHOD(TestReplaceTripleStars_StandardCpp)
		{
			std::string str1 = "abc***def***ghi";
			std::string str2 = "abc**def";
			Assert::AreEqual(std::string("abc!!def!!ghi"), ReplaceTripleStars(str1));
			Assert::AreEqual(std::string("abc**def"), ReplaceTripleStars(str2));
		}
	};
}
