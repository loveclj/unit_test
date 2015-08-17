/*************************************************************************
	> File Name: main.cpp
	> Author:lizhifeng 
	> Mail:lizhifeng2009@126.com 
	> Created Time: 2015年08月17日 星期一 16时30分29秒
 ************************************************************************/

#include<iostream>
#include<string>
#include"MyString.h"

#include"gtest/gtest.h"

using namespace std;

char initString[] = "hello world";

TEST(MyString, DefaultConstruction)
{
    MyString s;
    EXPECT_STREQ(NULL, s.get_string() );
}

TEST(MyString, ParameterConstruction)
{
    MyString s(initString);
    EXPECT_STREQ(initString, s.get_string());
    MyString s2(s);
    EXPECT_STREQ(s.get_string(), s2.get_string());
}

using namespace std;

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

