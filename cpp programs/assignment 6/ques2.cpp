//function to sort an array of strings in ascending or descending order depending on bool type argument(true of ascending and false for descending )use default arguments to implement it.
#include<iostream>
#include<string.h>
using namespace std;

// Function prototype with default argument
void sort(char arr[][50], int n, bool istrue=true);

int main()
{
    int n;
    cout<<"Enter number of strings/words/sentences you want to enter:"<<endl;
    cin>>n;
    char arr[n][50];
    cout<<"Enter "<<n<<" strings"<<endl;
    
    // Clear input buffer
    while (getchar() != '\n');
    
    for(int i=0; i<n; i++)
    {
        cout<<"Enter "<<i+1<<" string: ";
        fgets(arr[i], 50, stdin);
        // Remove the newline character that fgets captures
        int len = strlen(arr[i]);
        if (len > 0 && arr[i][len-1] == '\n')
            arr[i][len-1] = '\0';
    }
    
    cout<<"Do you want to choose order(ascending/descending) type 'y' or 'n'"<<endl;
    char ch;
    cin>>ch;
    
    if(ch=='y'||ch=='Y')
    {
        cout<<"Enter \"1\" to sort in ascending order,\"0\" to sort in descending order:"<<endl;
        int choice;
        cin>>choice;
        if(choice)
        {
            sort(arr, n, true);
        }
        else
        {
            sort(arr, n, false);
        }
    }
    else
    {
        sort(arr, n); // Uses default argument (true = ascending)
    }
    
    cout<<"Sorted array:"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    } 
    
    return 0;
}

void sort(char arr[][50], int n, bool istrue)
{
    // Temporary string for swapping
    char temp[50];
    
    if(istrue) // Ascending order
    {
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(strcmp(arr[i], arr[j]) > 0) // Use > 0 for ascending
                {
                    strcpy(temp, arr[i]);
                    strcpy(arr[i], arr[j]);
                    strcpy(arr[j], temp);
                }
            }
        }
    }
    else // Descending order
    {
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(strcmp(arr[i], arr[j]) < 0) // Use < 0 for descending
                {
                    strcpy(temp, arr[i]);
                    strcpy(arr[i], arr[j]);
                    strcpy(arr[j], temp);
                }
            }
        }
    }
}