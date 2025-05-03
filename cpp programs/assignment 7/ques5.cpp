//function to merge two sorted arrays of same size
#include<iostream>
using namespace std;

void input(int *arr, int size);
void display(int *res, int size);
int *merge(int *arr1, int *arr2, int size, int *res);
void sort(int *arr, int size);

int main()
{
    int arr1[50];
    int arr2[50];
    int res[100]; 
    int *resptr;
    cout << "Enter size of arr: ";
    int size;
    cin >> size;
    cout << "Array 1:" << endl;
    input(arr1, size);
    cout << endl << "Array 2:" << endl;
    input(arr2, size);
    sort(arr1, size);
    sort(arr2, size);
    
    cout << "\nSorted Array 1: ";
    display(arr1, size);
    cout << "\nSorted Array 2: ";
    display(arr2, size);
    
    resptr = merge(arr1, arr2, size, res);
    cout << endl << "Merged array: ";
    display(resptr, 2*size);
    return 0;
}

void input(int *arr, int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        cout << "Enter " << i+1 << " element: ";
        cin >> arr[i];
    }
}

void sort(int *arr, int size)
{
    int i, j;
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int *merge(int *arr1, int *arr2, int size, int *res)
{
    int i = 0, j = 0, k = 0;
    
    // Compare elements from both arrays and add the smaller one to the result
    while (i < size && j < size)
    {
        if (arr1[i] <= arr2[j])
        {
            res[k] = arr1[i];
            i++;
        }
        else
        {
            res[k] = arr2[j];
            j++;
        }
        k++;
    }
    
    // Copy remaining elements from first array (if any)
    while (i < size)
    {
        res[k] = arr1[i];
        i++;
        k++;
    }
    
    // Copy remaining elements from second array (if any)
    while (j < size)
    {
        res[k] = arr2[j];
        j++;
        k++;
    }
    
    return res;
}

void display(int *res, int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        cout << res[i] << " ";
    }
}
