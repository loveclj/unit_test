/*************************************************************************
	> File Name: 2_stringCmp.cpp
	> Author:lizhifeng 
	> Mail:lizhifeng2009@126.com 
	> Created Time: 2015年08月13日 星期四 16时31分46秒
 ************************************************************************/

#include<iostream>
#include<string>
#include"gtest/gtest.h"

using namespace std;


TEST(StringCmpTest, Demo)
{
    const  char *str = "testString";
    EXPECT_STREQ(str, "test");
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();

}
