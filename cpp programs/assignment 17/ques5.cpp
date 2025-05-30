/*
Define a class String with char pointer and length of the string as instance member variables.Define a method to dynamically create an array of char type and hold the input string in such a way that the array length is just enough to accommodate the input string. 
*/
#include<iostream>
using namespace std;
class String
{
    private:
        char *ptr;
        int length;
    public:
        char * createarr(string s)
        {
            length = s.length();
            ptr = new char[length];
            for(int i=0;i<length;i++)
            {
                ptr[i] = s[i];
            }
            return ptr;
        }
        void displayarr(char *ptr)
        {
            for(int i=0;i<length;i++)
            {
                cout<<ptr[i];
            }
            cout<<endl;
        }
};

int main()
{
    String s;
    string inp;
    cout<<"Enter a string:";
    getline(cin,inp);
    char *ptr=nullptr;
    ptr = s.createarr(inp);
    s.displayarr(ptr);
    delete []ptr;
    ptr=nullptr;
    return 0;
}