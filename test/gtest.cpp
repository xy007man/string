#include "gtest/gtest.h"
#include "String.h"
#include <iostream>
#include <list>

TEST(testcase, TestAddOperator01)
{
	String s1("abc");
	String s2("efg");

	s1 += s2;
	ASSERT_STREQ(s1.c_str(), "abcefg");
}

TEST(testcase, TestAddOperator02)
{
        String s1;
        String s2("efg");

        s1 += s2;
        ASSERT_STREQ(s1.c_str(), "efg");
}

TEST(testcase, TestAddOperator03)
{
        String s1("abc");
        String s2("");

        s1 += s2;
        ASSERT_STREQ(s1.c_str(), "abc");
}

TEST(testcase, TestReverseString01) 
{
	String s1("abc");
	s1.reverse();
	ASSERT_STREQ(s1.c_str(), "cba");

	String s2("abcd");
        s2.reverse();
        ASSERT_STREQ(s2.c_str(), "dcba");
}

TEST(testcase, TestReverseString02) 
{
        String s("");
        s.reverse();
        ASSERT_STREQ(s.c_str(), "");
}

TEST(testcase, TestReverseString03) 
{
        String s;
        s.reverse();
        ASSERT_STREQ(s.c_str(), "");
}

TEST(testcase, TestSplitString01)
{
        String s("  abc    ef g  ");
	std::list<String> l = s.split(' ');
	std::list<String> ans{"abc", "ef" , "g"};

	auto it1 = l.begin();
	auto it2 = ans.begin();
	for (int i = 0; i < 3; i++) {
		ASSERT_STREQ(it1->c_str(), it2->c_str());
		++it1;
		++it2;
	}
}

