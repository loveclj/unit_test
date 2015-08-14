/*************************************************************************
	> File Name: test.cpp
	> Author:lizhifeng 
	> Mail:lizhifeng2009@126.com 
	> Created Time: 2015年08月05日 星期三 14时23分17秒
 ************************************************************************/

#include<iostream>
#include<string>
#include"gtest/gtest.h"

using namespace std;

int Foo(int a, int b)
{
    if( 0 == a || 0 == b )
    {
        throw "don't do that";
    }
    int c =  a%b;
    if(0 == c)
    {
        return b;
    }
    return Foo(b,c);
}

TEST(FooTest, HandlNoneZeroInput)
{
    EXPECT_EQ(2, Foo(4,10)) ;//<< Foo(4,10);
    EXPECT_EQ(2, Foo(30,18));
}
int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
