//add all numbers of an array of size 10.
#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int i,sum=0;
    cout<<"Enter 10 numbers:"<<endl;
    for(i=0;i<10;i++)
    {
        cout<<"Enter "<<i+1<<"number:";
        cin>>arr[i];
    }
    for(i=0;i<10;i++)
    {
        sum = sum + arr[i];
    }
    cout<<"Sum of all elements in given array is "<<sum;
    return 0;
}