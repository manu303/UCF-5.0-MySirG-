//Define a class Array,define constructor to allocate an array of given size(size is given through parameter).Define a subscript operator to access element at given index.Define destructor to deallocates the memory of array.
#include<iostream>
using namespace std;
class Array
{
    private:
        int *ptr;
        int size;
    public:
        Array(int size=0)
        {
            this->ptr=nullptr;
            this->size = size;
            this->ptr = new int[size];
        }
        ~Array()
        {
            delete []ptr;
        }
        int& operator[](int index)
        {
            if(index >= 0 && index < size)
            {
                return ptr[index];
            }
            else
            {
                cout << "Array index out of bounds!" << endl;
                // Return a reference to a static dummy variable to avoid undefined behavior
                static int dummy = 0;
                return dummy;
            }
        }
        void input_array()
        {
            int i;
            for(i=0;i<size;i++)
            {
                cout<<"Enter element at "<<i<<"th index:";
                cin>>ptr[i];
            }
        }
};
int main()
{
    Array arr(5);
    arr.input_array();
    // arr[1]=10;
    cout<<"Result is "<<arr[1]<<endl;
    return 0;
}