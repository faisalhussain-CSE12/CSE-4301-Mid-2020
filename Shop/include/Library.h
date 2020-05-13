#ifndef LIBRARY_H
#define LIBRARY_H
#include<string>
#include<iostream>
#include<Book.h>
class Library
{
    public:
        Library();
        bool sellBook(int b_id,int quant);
        void checkShortage();
        void updateInventory(int b_id, int quant);
        void newBooks(Book& b);
        float totalIncome();

    protected:
    private:
        Book books[100];
        std::string username;
        std::string password;
        float tIncome;
        int totalNoofBook;
};

#endif // LIBRARY_H
