//function to print a substring from startindex(inclusive) to endindex(exclusive).define function in such a way that if second argument is not provided,string will print till the last possible index.
#include<iostream>
#include<stdlib.h>
#include<string.h>
void substr(char *arr, int start, int end=-1);
using namespace std;

int main()
{
    //Dma to take input from user
    char *arr=NULL;
    int size=1, i=0;
    arr = (char*)malloc(size*sizeof(char));
    if(arr==NULL)
    {
        cout<<"Memory allocation failed";
        return 0;
    }
    cout<<"Enter a string:";
    while(1)
    {
        char ch;
        ch = getchar();
        if(ch =='\n')
            break;
        arr[i]=ch;
        i++;
        if(size==i)
        {
            size++;
            arr = (char*)realloc(arr,size*sizeof(char));
            if(arr==NULL)
            {
                cout<<"Memory allocation failed";
                return 0;
            }
        }
    }
    arr[i] = '\0';
    //taking choice from user to print according to their need.
    int start, end;
    cout<<"Do you want to print upto end of string? type 'y' or 'n'"<<endl;
    char choice;
    cin>>choice;
    if(choice=='y'||choice=='Y')
    {
        cout<<"Enter starting index to print substring:";
        cin>>start;
        if(start>=0 && start<=strlen(arr))
            substr(arr,start);
        else
            cout<<"Enter valid index, make sure that index is within the range of length of string.";
    }
    else
    {
        cout<<"Enter starting and ending index to print substring:";
        cin>>start>>end;
        if(start>=0 && end<=strlen(arr) && start <= end)
            substr(arr,start,end);
        else
            cout<<"Enter valid index, make sure that index is within the range of length of string.";
    }
    free(arr); 
    return 0;
}
//function substring definition
void substr(char *arr, int start, int end)
{
    int i;
    cout<<endl<<"Resulted string:";
    if(end == -1)
    {
        for(i=start; arr[i]; i++)
            cout<<arr[i];
    }
    else
    {
        for(i=start; i<end; i++)
            cout<<arr[i];
    }
}