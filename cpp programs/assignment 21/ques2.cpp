/*
write a c++ program to read and display content of a file.
*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("file1.txt",ios::in);
    if(!fin)
        cout<<"file not found"<<endl;
    else{
        char ch=fin.get();
        while(!fin.eof())
        {
            cout<<ch;
            ch=fin.get();
        }
    }
    fin.close();
    return 0;
}