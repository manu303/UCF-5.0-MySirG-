/*Define a class Time with appropriate instance variables and member functions.Overload following operators
1.<<insertion operator
2.>>extraction operator
*/
#include<iostream>
using namespace std;

class Time
{
    private:
        int hr, min, sec;
    public:
        Time(): hr(0), min(0), sec(0)
        {}
        
        void set_time(int hr, int min, int sec)
        {
            this->hr = hr;
            this->min = min;
            this->sec = sec;
        }
        
        void show_time()
        {
            cout << *this; // Use the insertion operator internally
        }
        
        friend ostream& operator<<(ostream&, Time);
        friend istream& operator>>(istream&, Time&);
};

ostream& operator<<(ostream &dout, Time T)
{
    dout << T.hr << (T.hr > 1 ? " hrs:" : " hr:") 
         << T.min << (T.min > 1 ? " mins:" : " min:")
         << T.sec << (T.sec > 1 ? " secs" : " sec") << endl << endl;
    return dout;
}

istream& operator>>(istream &din, Time &T)
{
    din >> T.hr >> T.min >> T.sec;
    return din;
}

int main()
{
    Time t1, t2;
    
    cout << "Enter hr, mins and seconds for t1 time object: ";
    cin >> t1;
    cout << t1;
    
    cout << "Enter hr, mins and seconds for t2 time object: ";  // Fixed typo here
    cin >> t2;
    cout << t2;
    
    return 0;
}