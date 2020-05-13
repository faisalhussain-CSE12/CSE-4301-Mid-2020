#include "Library.h"

Library::Library():username("admin"),password("123"),tIncome(0),totalNoofBook(0)
{

}
bool Library::sellBook(int b_id,int quant)
{
    bool flag=false;
    for(int i=0;i<totalNoofBook;i++)
    {
        if(books[i].Getbook_id()==b_id)
        {
            books[i].Setquantity(books[i].Getquantity()-quant);
            tIncome+=books[i].Getquantity()*books[i].Getunit_price();
            break;
            flag=true;
        }
    }
    return flag;
}
void Library::checkShortage()
{
    for(int i=0;i<totalNoofBook;i++)
    {
        if(books[i].Getquantity()<10)
        {
            std::cout<<books[i].Getbook_name()<<"\t"<<books[i].Getauthor()<<"\t"<<books[i].Getquantity()<<std::endl;
        }
    }
}
void Library::updateInventory(int b_id, int quant)
{
    for(int i=0;i<totalNoofBook;i++)
    {
        if(books[i].Getbook_id()==b_id)
        {
            books[i].Setquantity(books[i].Getquantity()+quant);
            break;
        }
    }
}
void Library::newBooks(Book& b)
{
    books[totalNoofBook++]=b;
}
float Library::totalIncome()
{
    return tIncome;
}
