#include "myString.h"

myString::myString():str(0)
{
    str= new char[1];
    strcpy(str,"");
}
myString::myString(const char* ptr):str(0)
{
    str=new char[strlen(ptr)+1];
    strcpy(str,ptr);
}
myString::~myString()
{
    delete[] str;
}
myString::myString(const myString& s)
{
    str = new char[s.length()+1];
    strcpy(str,s.Getstr());
}
myString operator+(const char *q,const myString& s)
{
    char *p = new char[strlen(q)+s.length()+1];
    strcpy(p,q);
    strcat(p,s.Getstr());
    myString temp(p);
    delete[] p;
    return temp;
}
myString myString::operator+(const myString& s)
{
    char *p = new char[length()+s.length()+1];
    strcpy(p,str);
    strcat(p,s.str);
    myString temp(p);
    delete[] p;
    return temp;
}
void myString::operator+=(const myString& s)
{
    char *temp= str;
    str = new char[length()+s.length()+1];
    strcpy(str,temp);
    strcat(str,s.str);
    delete[] temp;
}

myString myString::operator=(const myString& s)
{
    if(str)delete[] str;
    str = new char[s.length()+1];
    strcpy(str,s.str);
    return *this;
}
myString myString::operator=(const char* s)
{
    if(str)delete[] str;
    str = new char[strlen(s)+1];
    strcpy(str,s);
    return *this;
}
bool myString::operator!()
{
    if(length())return false;
    else return true;
}

std::ostream & operator<<(std::ostream & out, myString & s)
{
    for(int i=0;i<s.length();i++)
       out<<s.str[i];
    return out;
}
