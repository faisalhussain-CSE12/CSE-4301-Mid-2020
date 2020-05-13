#ifndef MYSTRING_H
#define MYSTRING_H
#include<string.h>
#include<iostream>


class myString
{
public:
    myString(const char* ptr);
    myString();

    ~myString();

    char* Getstr()const
    {
        return str;
    }
    int length()const
    {
        return strlen(str);
    }

    myString(const myString& s);
    myString operator=(const myString& s);
    myString operator+(const myString& s);
    void operator+=(const myString& s);
    myString operator=(const char* s);
    bool operator!();
    char operator[](int index)
    {
        if(index<=length())return str[index];
    }
    friend std::ostream& operator<<(std::ostream& out, myString& s);
protected:

private:
    char *str;
};

#endif // MYSTRING_H
