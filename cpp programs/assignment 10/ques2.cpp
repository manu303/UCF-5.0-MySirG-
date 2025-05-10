/*
Define a class Customer with instance members cust_id,name,email,mobile.Define non parameterised constructor and parameterised constructor in the class.
*/
#include <iostream>
#include <cstring> 

using namespace std;

class Customer
{
private:
    int cust_id;
    char name[50];
    char email[50];
    long long mobile;  

public:
    // Non-parameterized constructor (initializes default values)
    Customer()
    {
        cust_id = 0;
        strcpy(name, "N/A");
        strcpy(email, "N/A@gmail.com");
        mobile = 1000000000;  
    }

    // Parameterized constructor (initializes with given values)
    Customer(int id, const char* namearg, const char* emailarg, long long mob)
    {
        cust_id = id;
        strncpy(name, namearg, 49);  
        name[49] = '\0';  
        strncpy(email, emailarg, 49);
        email[49] = '\0';
        mobile = mob;
    }

    // Display customer details
    void display()
    {
        cout << "Customer ID: " << cust_id << endl;
        cout << "Customer Name: " << name << endl;
        cout << "Customer Email: " << email << endl;
        cout << "Customer Mobile: " << mobile << endl;
        cout << endl;
    }
};

int main()
{
    Customer c1;  // Uses non-parameterized constructor
    Customer c2(5, "Manoj", "manoj123@gmail.com", 1234972259);  // Uses parameterized constructor

    c1.display();
    c2.display();

    return 0;
}