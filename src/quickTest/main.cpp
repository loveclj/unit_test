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
using namespace testing;

class QuickTest: public Test
{
    protected:

    virtual void SetUp()
    {
        start_time =  time(NULL);
    }

    virtual void TearDown()
    {
        const time_t end_time = time(NULL);
        EXPECT_TRUE(end_time - start_time <= 2) << "take too long time";
    }
    time_t start_time;

};

class SleepBySencondsTest: public QuickTest
{
    
};



TEST_F(SleepBySencondsTest, Sleep)
{
    SleepBySenconds s;
    EXPECT_TRUE(s.zz());
    s.set_sleepTime(1);
    EXPECT_TRUE(s.zz());
    s.set_sleepTime(3);
    EXPECT_TRUE(s.zz());

}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
