/*************************************************************************
	> File Name: class.cpp
	> Author:lizhifeng 
	> Mail:lizhifeng2009@126.com 
	> Created Time: 2015年08月17日 星期一 17时33分01秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<unistd.h>

using namespace std;

class  SleepBySenconds
{
    public:
    SleepBySenconds():sleepSeconds(0){}
    SleepBySenconds(int init):sleepSeconds(init){}
    void set_sleepTime(int n)
    {
        sleepSeconds = n;
    }

    bool zz()
    {
        sleep(sleepSeconds);
        return true;
    }
    private:
    int sleepSeconds;
};
