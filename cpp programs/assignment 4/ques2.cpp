//function to find the highest value digit in a given number.
#include<iostream>
using namespace std;
int high_val_digit(int num);

int main()
{
    int num,res;
    cout<<"Enter a number:";
    cin>>num;
    res = high_val_digit(num);
    cout<<"The highest value digit in the given number "<<num<<" is "<<res;
    return 0;
}

int high_val_digit(int num)
{
    //finding count
    int forcount=num,count=0;
    while(forcount)
    {
        forcount = forcount/10;
        count++;
    }
    //storing digits in an array
    int arr[count],j=0,i;
    while(num)
    {
        arr[j]= num%10;
        num = num/10;
        j++;
    }
    //sorting array in descending order
    for(i=0;i<count;i++)
    {
        for(j=i+1;j<count;j++)
        {
            if(arr[i]<arr[j])
            {
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    //sending the first element as it is the highest digit
    return arr[0];
}
