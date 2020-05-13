#ifndef BOOK_H
#define BOOK_H
#include<string>
#include<iostream>

class Book
{
    public:
        Book();
        Book(int b_id,std::string b_name,std::string b_author, int b_quantity,int b_price);
        int Getbook_id() { return book_id; }
        void Setbook_id(int val) { book_id = val; }
        std::string Getbook_name() { return book_name; }
        void Setbook_name(std::string val) { book_name = val; }
        std::string Getauthor() { return author; }
        void Setauthor(std::string val) { author = val; }
        int Getquantity() { return quantity; }
        void Setquantity(int val) { quantity = val; }
        float Getunit_price() { return unit_price; }
        void Setunit_price(float val) { unit_price = val; }
    protected:
    private:
        int book_id;
        std::string book_name;
        std::string author;
        int quantity;
        float unit_price;
};

#endif // BOOK_H
