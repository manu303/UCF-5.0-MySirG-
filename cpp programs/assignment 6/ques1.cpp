//function to sort an array of integers in ascending or descending order depending on bool type argument(true for ascending false for descending) use default argument to implement it.
#include<iostream>
using namespace std;
void sort(int *arr,int size,bool=true);
int main()
{
    int arr[50],size;
    cout<<"Enter size of array:";
    cin>>size;
    for(int i =0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Do you want to choose order(asceding/descending) type 'y' or 'n'"<<endl;
    char ch;
    cin>>ch;
    if(ch=='y'||ch=='Y')
    {
        cout<<"Enter \"1\" to sort in ascending order,\"0\" to sort in descending order:"<<endl;
        int istrue;
        cin>>istrue;
        if(istrue)
        {
            sort(arr,size,true);
        }
        else
        {
            sort(arr,size,false);
        }
    }
    else
    {
        sort(arr,size);
    }
    cout<<"Sorted array:"<<endl;
    for(int i =0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    } 
}

void sort(int *arr,int size,bool istrue)
{
    if(istrue==true)
    {
        int i,j;
        for(i=0;i<size;i++)
        {
            for(j=i+1;j<size;j++)
            {
                if(arr[i]>arr[j])
                {
                    int temp;
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }
    else
    {
        int i,j;
        for(i=0;i<size;i++)
        {
            for(j=i+1;j<size;j++)
            {
                if(arr[i]<arr[j])
                {
                    int temp;
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }
}
