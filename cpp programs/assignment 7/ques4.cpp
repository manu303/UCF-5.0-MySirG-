//function to swap 2 arrays.
#include<iostream>
using namespace std;

void input(int *arr, int size);
void swap(int *arr1, int *arr2, int &size1, int &size2);
void display(int *arr, int size);
void display(int *arr1, int *arr2, int size1, int size2);

int main()
{
    int size1, size2;
    
    cout << "Enter size of array1: ";
    cin >> size1;
    cout << "Enter size of array2: ";
    cin >> size2;
    
    
    int arr1[100], arr2[100];  
    
    cout << "Array 1:" << endl;
    input(arr1, size1);
    cout << "Array 2:" << endl;
    input(arr2, size2);
    
    cout << "Before swapping array 1: ";
    display(arr1, size1);
    cout << endl << "Before swapping array 2: ";
    display(arr2, size2);
    
    // Note that size1 and size2 will be swapped as well
    swap(arr1, arr2, size1, size2);
    
    cout << endl << "After swapping arrays:" << endl;
    display(arr1, arr2, size1, size2);
    
    return 0;
}

void input(int *arr, int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << "Enter " << i+1 << " element: ";
        cin >> arr[i];
    }
}

void swap(int *arr1, int *arr2, int &size1, int &size2)
{
    int temp[100];  // Using a reasonable upper limit
    int tempSize = size1;
    
    // Copy arr1 to temp
    for(int i = 0; i < size1; i++)
        temp[i] = arr1[i];
    
    // Copy arr2 to arr1
    for(int i = 0; i < size2; i++)
        arr1[i] = arr2[i];
    
    // Copy temp to arr2
    for(int i = 0; i < tempSize; i++)
        arr2[i] = temp[i];
    
    // Swap the sizes too
    int tempInt = size1;
    size1 = size2;
    size2 = tempInt;
}

void display(int *arr, int size)
{
    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

void display(int *arr1, int *arr2, int size1, int size2)
{
    cout << "array 1: ";
    for(int i = 0; i < size1; i++)
        cout << arr1[i] << " ";
    
    cout << endl << "array 2: ";
    for(int i = 0; i < size2; i++)
        cout << arr2[i] << " ";
}