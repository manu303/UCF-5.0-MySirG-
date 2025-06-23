/*
1. Define a class DynArray to implement dynamic array data structure with member
variables to store capacity of array, last index of the last filled block of the array and a pointer to hold the address of the first block of the dynamically created array.

2. In question 1, define a parameterised constructor to create an array of specified
size.

3. In question 1, define a method doubleArray() to increase the size of the array by
double of its size.

4. In question 1, define a method halfArray() to decrease the size of the array by half
of its size.

5. In question 1, define a method which returns the current capacity of the array.

6. Inthe question 1, add a method to check whether an array is empty or not by
returning True or False.

7. In question 1, define a method to append a new element in the array

8. In question 1, define a method to insert a new element at specified index

9. In question 1, define a method to edit an element at specified index.

10. In question 1, define a method to delete an element at specified index.

11. In question 1, define a method to check if the array is full by returning true or false.

12. In question 1, define a method to get element at specified index.

13. In question 1, define a method to count number of elements present in the array.

14. In question 1, define a destructor to deallocate the memory of array.

15. In question 1, define a method to find an element in the array. Return index if the
element found, otherwise return -1.
*/

#include<iostream>
#define ARRAY_OVERFLOW 1
#define INVALID_INDEX 2
using namespace std;
class DynArray
{
    private:
        int capacity;
        int lastIndex;
        int *ptr;
    protected:
        void doubleArray()
        {
            capacity = capacity*2;
            int* tempptr = new int[capacity];
            for(int i=0;i<=lastIndex;i++)
            {
                tempptr[i]=ptr[i];
            }
            delete []ptr;
            ptr=tempptr;

        }
        void halfArray()
        {
            capacity = capacity/2;
            int* tempptr = new int[capacity];
            for(int i=0;i<=lastIndex;i++)
            {
                tempptr[i]=ptr[i];
            }
            delete []ptr;
            ptr=tempptr;
        }
    public:
        DynArray(int);
        bool isEmpty();
        bool isFull();
        void append(int);
        void insert(int,int);
        void edit(int,int);
        void del(int);
        int get(int);
        int count();
        int find(int);
        DynArray(const DynArray &arr);
        DynArray& operator=(const DynArray &arr);
        int currentCapacity();
        ~DynArray();

};
DynArray::DynArray(int cap)
{
    if(cap<=0)
        cap=10;
    capacity=cap;
    lastIndex=-1;
    ptr = new int[capacity];
}

bool DynArray::isEmpty()
{
    return lastIndex==-1;
}

bool DynArray::isFull()
{
    return lastIndex+1==capacity;
}

void DynArray::append(int data)
{
    if(isFull())
        doubleArray();
    ptr[lastIndex+1]=data;
    lastIndex++;
}

void DynArray::insert(int index,int data)
{
    if(index<0 || index>lastIndex+1)
        throw INVALID_INDEX;
    if(isFull())
        doubleArray();
    int i;
    for(i=lastIndex;i>=index;i--)
    {
        ptr[i+1] = ptr[i];
    }
    ptr[index]=data;
    lastIndex++;
}

void DynArray::edit(int index,int data)
{
    if(index<0 || index>lastIndex)
        throw INVALID_INDEX;
    ptr[index] = data;
}

void DynArray::del(int index)
{
    if(index<0||index>lastIndex)
        throw INVALID_INDEX;
    int i;
    for(i=index;i<lastIndex;i++)
    {
        ptr[i]=ptr[i+1];
    }
    lastIndex--;
    if(count()==capacity/2 && capacity>1)
        halfArray();
    
}

int DynArray::get(int index)
{
    if(index<0||index>lastIndex)
        throw INVALID_INDEX;
    return ptr[index];
}

int DynArray::count()
{
    return lastIndex+1;
}

DynArray::~DynArray()
{
    delete []ptr;
    ptr=nullptr;
}

int DynArray::find(int data)
{
    for(int i=0;i<=lastIndex;i++)
    {
        if(ptr[i]==data)
            return i;
    }
    return -1;
}

DynArray::DynArray(const DynArray &arr)
{
    capacity = arr.capacity;
    lastIndex = arr.lastIndex;
    ptr = new int [capacity];
    for(int i=0;i<=lastIndex;i++)
    {
        ptr[i] = arr.ptr[i];
    }
}

DynArray& DynArray:: operator=(const DynArray &arr)
{
    if(&arr!=this)
    {
        capacity = arr.capacity;
        lastIndex = arr.lastIndex;
        delete []ptr;
        ptr = new int[capacity];
        for(int i=0;i<=lastIndex;i++)
        {
            ptr[i] = arr.ptr[i];
        }
        return *this;
    }
    return *this;
}

int DynArray::currentCapacity()
{
    return capacity;
}
