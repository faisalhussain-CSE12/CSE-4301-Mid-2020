#include <iostream>
#include<string.h>
#include<myString.h>
using namespace std;

int main()
{
    myString s1 = "Hello";
    myString s2 = " World";
    myString s3=s1+s2;
    cout<<s3.Getstr();
    s1=s3;
    if(!s1)cout<<"Empty String";
    else cout<<s1[2]<<endl;
    cout<<s2;
}
