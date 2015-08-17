/*************************************************************************
	> File Name: main.cpp
	> Author:lizhifeng 
	> Mail:lizhifeng2009@126.com 
	> Created Time: 2015年08月17日 星期一 17时35分28秒
 ************************************************************************/

#include<iostream>
#include<string>

#include"gtest/gtest.h"
#include"class.h"
using namespace std;

TEST(Inc, Increase)
{
    Inc inc;
    EXPECT_EQ(0, inc.get_inc());
    EXPECT_EQ(1, inc.increase());
    EXPECT_EQ(2, inc.increase());

}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
