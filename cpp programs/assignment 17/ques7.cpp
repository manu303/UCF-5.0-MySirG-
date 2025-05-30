/*
in ques5,define methods to print string,return string,return length of string.
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
        char * uppercase(char* ptr)
        {
            for(int i=0;i<length;i++)
            {
                if(ptr[i]>='a' && ptr[i]<='z')
                {
                    ptr[i] = ptr[i] - 32;
                }
            }
            return ptr;
        }
        char * lowercase(char* ptr)
        {
            for(int i=0;i<length;i++)
            {
                if(ptr[i]>='A' && ptr[i]<='Z')
                {
                    ptr[i] = ptr[i] + 32;
                }
            }
            return ptr;
        }
        char* returnstr()
        {
            return ptr;
        }
        int returnlenofstr()
        {
            return length;
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
    ptr = s.lowercase(ptr);
    s.displayarr(ptr);
    ptr = s.uppercase(ptr);
    s.displayarr(ptr);
    ptr = s.returnstr();
    s.displayarr(ptr);
    cout<<"length of string:"<<s.returnlenofstr()<<endl;
    delete []ptr;
    ptr=nullptr;
    return 0;
}