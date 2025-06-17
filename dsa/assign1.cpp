/*
Define a class array to implement array data structure with member variables to store capacity of array,last index of the filled block of the array and a pointer to hold the address of the first block of the dynamically created array.
1)define a parameterised constructor to create an array of specified size.
2)add a method to check whether an array is empty or not by returning True or false.abort
3)define a method to append a new element in the array
4)define a method to insert a new element at specified index
5)define a method to edit an element at specified index.
6)define a method to delete an element at specified index.
7)define a method to check if the array is full by returning true or false.
8)define a method to get element at specidfied index.
9)define a method to count number of elements present in the array.
10)define a destructor to deallocate the memory.
11)define a method to find the element in the array.return index if the element found otherwise return -1.
*/
#include<iostream>
using namespace std;
class Array
{
    private:
        int capacity;
        int lastIndex;
        int *ptr;
    public:
        Array()
        {
            capacity=0;
            ptr=nullptr;
            lastIndex=-1;
        }
        Array(int capacity)
        {
            this->capacity=capacity;
            lastIndex=-1;
            if(this->capacity>0)
                ptr = new int[this->capacity];
            else
            {
                capacity=0;
                ptr=nullptr;
                lastIndex=-1;
                cout<<"Enter valid capacity."<<endl;
            }     
        }

        bool isEmpty()
        {
            if(lastIndex==-1)
                return true;
            else
                return false;

        }

        void appendElement(int element)
        {
            lastIndex++;
            if(lastIndex>=0 && lastIndex<capacity)
            {
                ptr[lastIndex]=element;
            }
            else
            {
                lastIndex--;
                cout<<"Array index out of capacity";
            }
        }

        void insertElement(int element,int index)
        {
            lastIndex++;
            if((lastIndex>=0 && lastIndex<capacity) && (index>=0 && index<capacity))
            {
                if(lastIndex==index)
                    ptr[index]=element;
                else if(index<lastIndex)
                {
                    int i;
                    int temp = lastIndex;
                    for(i=lastIndex;i>index;i--)
                    {
                        if((temp>=0 && temp<capacity) && (index>=0 && index<capacity))
                        {
                            ptr[temp]=ptr[temp-1];
                            temp--;
                        }
                        else
                        {
                            break;
                        }
                    }
                    if((temp>=0 && temp<capacity) && (index>=0 && index<capacity))
                        ptr[temp] = element;
                    else
                        cout<<"Array index out of capacity"<<endl;
                    
                }
                else
                {
                    cout<<"insertion can happen sequentially not randomly make sure you enter index sequentially.";
                    lastIndex--;
                }
            }
            else
            {
                cout<<"Array index out of capacity"<<endl;
                lastIndex--;
            }
        }

        void editElement(int element,int index)
        {
            if(index>=0 && index<=lastIndex)
            {
                ptr[index]=element;
            }
            else
            {
                cout<<"Array index out of capacity(or)editing an element which did not exist."<<endl;
            }
        }

        void deleteElement(int index)
        {
            if(index>=0 && index<=lastIndex)
            {
                int i;
                int temp = index;
                for(i=0;i<(lastIndex-index);i++)
                {
                    
                    ptr[temp] = ptr[temp+1];
                    temp++;
                }
                lastIndex--;
            }
            else
            {
                cout<<"Array index out of capacity(or)editing an element which did not exist."<<endl;
            }
        }

        bool isFull()
        {
            if(capacity==lastIndex+1)
                return true;
            else
                return false;
        }

        int getElement(int index)
        {
            if(index>=0 && index<=lastIndex)
                return ptr[index];
            else
                return -999;
        }

        int countElements()
        {
            return lastIndex+1;
        }

        ~Array()
        {
            delete []ptr;
        }

        int findIndexOfElement(int element)
        {
            for(int i =0;i<=lastIndex;i++)
            {
                if(ptr[i]==element)
                    return i;
            }
            return -1;
        }

        void printArray()
        {
            for(int i=0;i<=lastIndex;i++)
            {
                cout<<ptr[i]<<" ";
            }
        }

};


int main()
{
    Array arr(5);
    
    // Test isEmpty
    if(arr.isEmpty())
        cout << "Array is empty" << endl;
    else
        cout << "Array is not empty" << endl;
    
    // Test append
    arr.appendElement(10);
    arr.appendElement(20);
    arr.appendElement(30);
    cout << "After appending 10, 20, 30:" << endl;
    arr.printArray();
    
    // Test insert
    arr.insertElement(15, 1); // Insert 15 at index 1
    cout << "After inserting 15 at index 1:" << endl;
    arr.printArray();
    
    // Test edit
    arr.editElement(100, 0); // Change first element to 100
    cout << "After editing element at index 0 to 100:" << endl;
    arr.printArray();
    
    // Test delete
    arr.deleteElement(2); // Delete element at index 2
    cout << "After deleting element at index 2:" << endl;
    arr.printArray();
    
    // Test isFull
    if(arr.isFull())
        cout << "Array is full" << endl;
    else
        cout << "Array is not full" << endl;
    
    // Test getElement
    int element = arr.getElement(0);
    if(element != -999)
        cout << "Element at index 0: " << element << endl;
    
    // Test count
    cout << "Number of elements in array: " << arr.countElements() << endl;
    
    // Test find
    int index = arr.findIndexOfElement(100);
    if(index != -1)
        cout << "Index of element 100: " << index << endl;
    else
        cout << "Element 100 not found" << endl;
    
    return 0;
}