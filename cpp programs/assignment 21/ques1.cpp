/*
write a c++ program to copy content of file and store in another file.
*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("file1.txt");
    fout<<"Hi,this is the first file and i will copy this this content to another file";
    fout.close();
    ifstream fin;
    fin.open("file1.txt",ios::in);
    if(!fin)
        cout<<"file not found"<<endl;
    else
    {
        char ch = fin.get();
        fout.open("file2.txt");
        while(!fin.eof())
        {
            fout<<ch;
            ch = fin.get();
        }
        fin.close();
        fout.close();
        
    }
    return 0;
}
