//Define a class Numbers with size and arr pointer as instance variables.Provide constructor to initialise instance members,dynamically allocate an  array of given size and store adress in arr variable of object.Also define a destructor to deallocate memory of array.Implement deep copy using copy construtor to avoid memory issues.
#include<iostream>
using namespace std;

class Numbers
{
    private:
        int size;
        int *arr;
    public:
        // Default constructor
        Numbers()
        {
            size = 0;
            arr = NULL;
        }
        
        // Parameterized constructor to initialize with size
        Numbers(int s)
        {
            size = s;
            arr = (int *)malloc(size*sizeof(int)); // Dynamically allocate array and store address in arr
        }
        
        // Destructor to deallocate memory
        ~Numbers()
        {
            free(arr);
        }
        
        // Copy constructor for deep copy
        Numbers(Numbers &num)
        {
            size = num.size;
            arr = (int *)malloc(size*sizeof(int)); // Allocate new memory
            
            // Copy each element from source array
            for(int i = 0; i < size; i++)
            {
                arr[i] = num.arr[i];
            }
        }
        
        // Set size and allocate memory if needed
        void set_size(int s)
        {
            if(arr != NULL)
            {
                free(arr); // Free existing memory
            }
            size = s;
            arr = (int *)malloc(size*sizeof(int));
        }
        
        // Additional methods for demonstration
        void input_data()
        {
            cout << "Enter " << size << " integers: ";
            for(int i = 0; i < size; i++)
            {
                cin >> arr[i];
            }
        }
        
        void display()
        {
            cout << "Array elements: ";
            for(int i = 0; i < size; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};

// Sample main function to demonstrate usage
int main()
{
    // Create a Numbers object with size 5
    Numbers num1(5);
    
    // Input data
    num1.input_data();
    
    // Display data
    cout << "Original array: ";
    num1.display();
    
    // Test deep copy with copy constructor
    Numbers num2 = num1;
    
    // Display both arrays to show independent copies
    cout << "After creating a copy:" << endl;
    cout << "Original array: ";
    num1.display();
    cout << "Copied array: ";
    num2.display();
    
    return 0;
}