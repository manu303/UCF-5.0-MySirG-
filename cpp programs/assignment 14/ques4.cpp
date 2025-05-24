/*
Create a class Array and define an operator = to perform deep copy of array objects
*/
#include<iostream>
using namespace std;

class Array {
private:
    int *ptr;
    int size;
public:
    // Constructor
    Array()
    {
        size = 0;
        ptr = nullptr;
    }
    
    // Destructor
    ~Array()
    {
        delete[] ptr;
    }
    
    // Input array elements
    void input_arr(int sz)
    {
        // Update the size member
        size = sz;
        ptr = new int[size];
        
        for(int i = 0; i < size; i++)
        {
            cout << "Enter element at " << i << "th index: ";
            cin >> ptr[i];
        }
    }
    
    // Display array elements
    void show_arr()
    {
        for(int i = 0; i < size; i++)
        {
            cout << ptr[i] << " ";
        }
        cout << endl;
    }
    
    // Assignment operator for deep copy
    Array& operator=(const Array& a)
    {
        // Self-assignment check
        if(this == &a)
            return *this;
        
        // Free existing resources
        delete[] ptr;
        
        // Allocate new memory and copy data
        size = a.size;
        ptr = new int[size];
        
        for(int i = 0; i < size; i++)
        {
            ptr[i] = a.ptr[i];
        }
        
        return *this;
    }
};

int main() {
    Array arr1, arr2;
    arr1.input_arr(5);
    arr2 = arr1;
    arr2.show_arr();
    return 0;
}