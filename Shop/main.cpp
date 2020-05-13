#include <iostream>
#include <Book.h>
#include <Library.h>
using namespace std;

int main()
{
    Library lib;
    Book b(1,"Fundamentals","Faisal Hussain",12,250);
    lib.newBooks(b);
    lib.sellBook(1,5);
    lib.checkShortage();
    cout<<lib.totalIncome();
}
