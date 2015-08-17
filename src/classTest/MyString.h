/*************************************************************************
	> File Name: MyString.cpp
	> Author:lizhifeng 
	> Mail:lizhifeng2009@126.com 
	> Created Time: 2015年08月17日 星期一 16时22分36秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<cstring>
#include<cstdlib>

using namespace std;

class MyString
{
    public:
    
    MyString():m_string(NULL){}
    MyString(char * initString)
    {
        if(NULL == initString)
        {
            m_string = NULL;
        }
        else
        {
            int len = strlen(initString);
            m_string= (char *)malloc(sizeof(char)*(len+1));
            memcpy(m_string, initString, sizeof(char)*(len +1));
        }
    }
    MyString(MyString &initString)
    {
        size_t len =  initString.get_string_len();
        if( 0 == len )
        {
            m_string = NULL;
        }
        else
        {
            m_string   =  (char *)malloc(sizeof(char)*(len +1));
            memcpy(m_string, initString.get_string(), (sizeof(char)*(len + 1)));
        }
    }

    size_t get_string_len()
    {
        return  (NULL == m_string)?0:strlen(m_string);
    }

    char *get_string()
    {
        return m_string;
    }
    ~MyString()
    {
        if(NULL != m_string)
        {
            free(m_string);
        }

    }
    private:

    char *m_string;
};

