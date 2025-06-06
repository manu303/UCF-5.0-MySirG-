/*
Define a class Shape with shapeName as instance variable.Provide setter and getter.
*/
#include<iostream>
using namespace std;
class Shape
{
    private:
        string shapeName;
    public:
        Shape():shapeName("n/a")
        {}
        string get_shapeName()
        {
            return shapeName;
        }
        void set_shapeName(string shapeName)
        {
            this->shapeName = shapeName;     
        }
};
int main()
{
    Shape myShape; 

    cout << "Initial shape name: " << myShape.get_shapeName() << endl; 

    myShape.set_shapeName("Circle"); 

    cout << "New shape name: " << myShape.get_shapeName() << endl;   
    Shape anotherShape; 
    anotherShape.set_shapeName("Square");
    cout << "Another shape name: " << anotherShape.get_shapeName() << endl; 

    return 0;
}