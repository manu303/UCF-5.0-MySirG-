/*
1. Define a copy constructor in Array class to perform deep copy.
2. Define a copy assignment operator in Array class to perform deep copy.
*/
#include<iostream>
#define ARRAY_OVERFLOW 1
#define INVALID_INDEX 2
using namespace std;
class Array
{
    private:
        int capacity;
        int lastIndex;
        int *ptr;
    public:
        Array(int);
        bool isEmpty();
        bool isFull();
        void append(int);
        void insert(int,int);
        void edit(int,int);
        void del(int);
        int get(int);
        int count();
        int find(int);
        Array(const Array &arr);
        Array& operator=(const Array &arr);
        ~Array();

};
Array::Array(int cap)
{
    if(cap<=0)
        cap=10;
    capacity=cap;
    lastIndex=-1;
    ptr = new int[capacity];
}

bool Array::isEmpty()
{
    return lastIndex==-1;
}

bool Array::isFull()
{
    return lastIndex+1==capacity;
}

void Array::append(int data)
{
    if(isFull())
        throw ARRAY_OVERFLOW;
    ptr[lastIndex+1]=data;
    lastIndex++;
}

void Array::insert(int index,int data)
{
    if(index<0 || index>lastIndex+1)
        throw INVALID_INDEX;
    if(isFull())
        throw ARRAY_OVERFLOW;
    int i;
    for(i=lastIndex;i>=index;i--)
    {
        ptr[i+1] = ptr[i];
    }
    ptr[index]=data;
    lastIndex++;
}

void Array::edit(int index,int data)
{
    if(index<0 || index>lastIndex)
        throw INVALID_INDEX;
    ptr[index] = data;
}

void Array::del(int index)
{
    if(index<0||index>lastIndex)
        throw INVALID_INDEX;
    int i;
    for(i=index;i<lastIndex;i++)
    {
        ptr[i]=ptr[i+1];
    }
    lastIndex--;
}

int Array::get(int index)
{
    if(index<0||index>lastIndex)
        throw INVALID_INDEX;
    return ptr[index];
}

int Array::count()
{
    return lastIndex+1;
}

Array::~Array()
{
    delete []ptr;
    ptr=nullptr;
}

int Array::find(int data)
{
    for(int i=0;i<=lastIndex;i++)
    {
        if(ptr[i]==data)
            return i;
    }
    return -1;
}

Array::Array(const Array &arr)
{
    capacity = arr.capacity;
    lastIndex = arr.lastIndex;
    ptr = new int [capacity];
    for(int i=0;i<=lastIndex;i++)
    {
        ptr[i] = arr.ptr[i];
    }
}

Array& Array:: operator=(const Array &arr)
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



