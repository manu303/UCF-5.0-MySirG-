//function to print pascal triangle upto n lines.
#include<iostream>
using namespace std;
void pascal(int n);
inline int ncr(int row,int r);
inline int fact(int num);
int main()
{
    int n;
    cout<<"Enter no of lines";
    cin>>n;
    pascal(n);
    return 0;
}

void pascal(int n)
{
    int row,col;
    for(row=0;row<n;row++)
    {
        int flag=1,r=0;
        for(col=0;col<(n*2)-1;col++)
        {
            if( (col>((n-2)-row)) && (col<(n+row)) && flag)
            {
                flag=0;
                cout<<ncr(row,r)<<"   ";
                r++;
            }
            else
            {
                flag=1;
                cout<<"    ";
            }
        }
        cout<<endl;
    }
}

int ncr(int row,int r)
{
    return (fact(row))/(fact(row-r)*fact(r));
}

int fact(int num)
{
    int fact=1;
    if(num==0)
        return fact;
    else
    {
        for(num;num>1;num--)
        {
            fact = fact * num;
        }
    }
    return fact;
    
}