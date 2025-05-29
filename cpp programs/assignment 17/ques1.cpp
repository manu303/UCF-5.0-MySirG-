/*
Define a class Time with instance variables hr,min and sec.Provide instance methods setTime() and showTime().setTime() method has formal arguments with the same name as instance variables .Also define setters and getters.
*/
#include <iostream>
using namespace std;

class Time {
private:
    int hr, min, sec;

public:
    Time() : hr(0), min(0), sec(0) {}

    void setTime(int hr, int min, int sec) {
        if (hr >= 0 && hr < 24 && min >= 0 && min < 60 && sec >= 0 && sec < 60) 
        {
            this->hr = hr;
            this->min = min;
            this->sec = sec;
        } 
        else 
        {
            cout << "Invalid time input. Please ensure hour is 0-23, minute 0-59, and second 0-59." << endl;
        }
    }

    void showTime() {
        cout << hr << " hr:" << min << " min:" << sec << " sec" << endl;
    }

    void sethr(int hr) {
        if (hr >= 0 && hr < 24) 
        {
            this->hr = hr;
        } 
        else 
        {
            cout << "Invalid hour value. Hour must be between 0 and 23." << endl;
        }
    }

    void setmin(int min) {
        if (min >= 0 && min < 60) 
        {
            this->min = min;
        } 
        else 
        {
            cout << "Invalid minute value. Minute must be between 0 and 59." << endl;
        }
    }

    void setsec(int sec) {
        if (sec >= 0 && sec < 60) {
            this->sec = sec;
        } 
        else 
        {
            cout << "Invalid second value. Second must be between 0 and 59." << endl;
        }
    }

    int gethr() {
        return hr;
    }

    int getmin() {
        return min;
    }

    int getsec() {
        return sec;
    }
};

int main() {
    Time t1, t2;

    t1.setTime(13, 50, 55);
    cout << "Time t1: ";
    t1.showTime();

    t2.setTime(5, 50, 55);
    cout << "Time t2: ";
    t2.showTime();

    Time t3;
    cout << "\nTesting invalid time input for t3:" << endl;
    t3.setTime(25, 10, 5); 
    cout << "Time t3: ";
    t3.showTime(); 

    Time t4;
    t4.sethr(22);
    t4.setmin(30);
    t4.setsec(0);
    cout << "\nTime t4 (set individually): ";
    t4.showTime();

    t4.sethr(30); 
    cout << "Time t4 after invalid sethr: ";
    t4.showTime(); 

    return 0;
}