#include "Book.h"

Book::Book()
{
    //ctor
}
Book::Book(int b_id,std::string b_name,std::string b_author, int b_quantity,int b_price):
    book_name(b_name),book_id(b_id),author(b_author),quantity(b_quantity),unit_price(b_price)
{
    //ctor
}
