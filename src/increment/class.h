/*************************************************************************
	> File Name: class.cpp
	> Author:lizhifeng 
	> Mail:lizhifeng2009@126.com 
	> Created Time: 2015年08月17日 星期一 17时33分01秒
 ************************************************************************/

#include<iostream>
#include<string>

using namespace std;

class Inc 
{
    public:
    Inc():increment(0){}
    Inc(int init):increment(init){}
    int increase()
    {
        return ++increment;
    }
    int get_inc()
    {
        return  increment;
    }
    
    private:
    int increment;
};
