//in ques4,define a friend operator + to concatenate two array objects.
#include<iostream>
using namespace std;
class Array
{
    private:
        int *p;
        int size;
    public:
        Array():p(nullptr),size(0)
        {}
        void input_arr(int size)
        {
            this->size = size;
            p = new int [this->size];
            for(int i=0;i<this->size;i++)
            {
                cout<<"Enter element at "<<i<<"th index"<<endl;
                cin>>p[i];
            }
        }
        void display_arr()
        {
            for(int i=0;i<size;i++)
                cout<<p[i]<<" ";
            cout<<endl;  
        }
        ~Array()
        {
            delete []p;
        }
        // Assignment operator for deep copy
        Array& operator=(const Array& a)
        {
            // Self-assignment check
            if(this == &a)
                return *this;
            
            // Free existing resources
            delete[] p;
            
            // Allocate new memory and copy data
            size = a.size;
            p = new int[size];
            
            for(int i = 0; i < size; i++)
            {
                p[i] = a.p[i];
            }
            
            return *this;
        }

        friend Array operator+(Array a1,Array a2);
};

Array operator+(Array a1,Array a2)
{
    Array temp;
    temp.size = a1.size+a2.size;
    temp.p = new int [temp.size];
    int i;
    
    // Copy first array
    for(i=0;i<a1.size;i++)
    {
        temp.p[i] = a1.p[i];
    }
    
    // Copy second array (i is already at the right position)
    for(int j=0;j<a2.size;j++)
    {
        temp.p[i+j] = a2.p[j];
    }
    return temp;  
}

int main()
{
    Array arr1,arr2,arr3;
    cout<<"Enter values for 1st array:"<<endl;
    arr1.input_arr(5);
    cout<<"Enter values for 2nd array:"<<endl;
    arr2.input_arr(5);
    arr3 = arr1+arr2;
    arr3.display_arr();
    return 0;
}