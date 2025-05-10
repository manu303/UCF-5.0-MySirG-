/*
Define a class Book with bookid,title and price as instance member variables.Define non parameterised and parameterised constructor in the class.
*/
#include<iostream>
#include<cstring>
using namespace std;
class Book
{
    private:
        int bookid;
        char title[50];
        float price;
    public:
        Book()
        {
            bookid=0;
            strncpy(title,"N/A",49);
            title[49]='\0';
            price = 0;
        }
        Book(int x,const char *titlearg,float y)
        {
            bookid=x;
            strncpy(title,titlearg,49);
            title[49]='\0';
            price = y;
        }
        void display()
        {
            cout<<"BookId: "<<bookid<<endl;
            cout<<"Title: "<<title<<endl;
            cout<<"Price: "<<price<<endl;
            cout<<endl;
        }
};

int main()
{
    Book b1,b2(1,"c++",500);
    b1.display();
    b2.display();
    return 0;
}