#include<iostream>
using namespace std;
int rotate_arr(int *arr,int n,int *res,int dir=1,int pos=1);
int main()
{
    int arr[50];
    cout<<"Enter size of array:";
    int n;
    cin>>n;
    int i;
    int res[n],check;
    //taking input into array
    for(i=0;i<n;i++)
    {
        cout<<"Enter "<<i+1<<" element:";
        cin>>arr[i];
    }
    //asking no of positions
    
    //choose direction
    cout<<"Do you want to choose direction(left/right) type 'y' or 'n'"<<endl;
    char ch;
    cin>>ch;
    int choice;
    if(ch=='y'||ch=='Y')
    {
        cout<<"Enter \"-1\" to rotate arr in left direction,\"1\" to rotate arr in right direction:"<<endl;
        cin>>choice;

        int pos;
        cout<<"Enter valid number of positions within(0 to "<<n<<")";
        cin>>pos;

        if(choice==-1)
        {
            check = rotate_arr(arr,n,res,choice,pos);
        }
        else if(choice == 1)
        {
            check = rotate_arr(arr,n,res,choice,pos);
        }
    }
    else
    {
        check = rotate_arr(arr,n,res); // Uses default argument (pos=1,dir=1)
    }
    if((check<=n) && (check>=0))
    {
        cout<<"Rotated array:"<<endl;
        for(int i=0; i<n; i++)
        {
            cout<<res[i]<<" ";
        } 
    }
    else
        cout<<"Enter valid position";
    return 0;

}

int rotate_arr(int *arr,int n,int *res,int dir,int pos)
{
    int i;
    
    if(dir == 1 && (pos<=n) && (pos>=0)) //for right direction
    {
        for(i=0;i<n;i++)
        {
            if((n-pos+i) < n)
            {
                res[i] = arr[n-pos+i];
            }
            else
            {
                res[i] = arr[(n-pos+i)%n];
            }
        }
    }
    else if (dir==-1 && (pos<=n) && (pos>=0)) //for left direction
    {
        for(i=0;i<n;i++)
        {
            if((pos+i) < n)
            {
                res[i] = arr[pos+i];
            }
            else
            {
                res[i]=arr[(pos+i)%n];
            }
        }
    }
    return pos;
}