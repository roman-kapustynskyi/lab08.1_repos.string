#include "pch.h"
#include "CppUnitTest.h"
#include <string>
#include "../PR08.1 string/FileName.cpp" 
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		

                TEST_METHOD(TestMethod_Count)
                {
                    string str = "OGO_test_AGA_test_OGO";
                    int count = Count(str);

                    Assert::AreEqual(3, count);
                }

                TEST_METHOD(TestMethod_Change)
                {
                    string str = "OGO123AGA";
                    string result = Change(str);

        
                    Assert::AreEqual(string("**123**"), result);
                }
            };
        }