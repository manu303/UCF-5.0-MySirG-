/*
in ques1,define a method to sort Time object array .
*/
#include <iostream>
using namespace std;

class Time {
private:
    int hr, min, sec;

public:
    Time() : hr(0), min(0), sec(0) {}

    void setTime(int hr, int min, int sec) {
        if (hr >= 0 && hr < 24 && min >= 0 && min < 60 && sec >= 0 && sec < 60) {
            this->hr = hr;
            this->min = min;
            this->sec = sec;
        } else {
            cout << "Invalid time input. Please ensure hour is 0-23, minute 0-59, and second 0-59." << endl;
        }
    }

    void showTime() {
        cout << hr << " hr:" << min << " min:" << sec << " sec" << endl;
    }

    void sethr(int hr) {
        if (hr >= 0 && hr < 24) {
            this->hr = hr;
        } else {
            cout << "Invalid hour value. Hour must be between 0 and 23." << endl;
        }
    }

    void setmin(int min) {
        if (min >= 0 && min < 60) {
            this->min = min;
        } else {
            cout << "Invalid minute value. Minute must be between 0 and 59." << endl;
        }
    }

    void setsec(int sec) {
        if (sec >= 0 && sec < 60) {
            this->sec = sec;
        } else {
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

    static Time* createTimeArray(int size) {
        if (size <= 0) {
            cout << "Error: Array size must be positive." << endl;
            return nullptr; 
        }
        cout << "Creating a dynamic array of " << size << " Time objects." << endl;
        return new Time[size]; 
    }
    static Time* sorttime(Time* timeArrayPtr,int size)
    {
        for(int i=0;i<size;i++)
        {
            for(int j=i+1;j<size;j++)
            {
                if(timeArrayPtr[i].hr > timeArrayPtr[j].hr)
                {
                    Time temp;
                    temp= timeArrayPtr[i];
                    timeArrayPtr[i] = timeArrayPtr[j];
                    timeArrayPtr[j] = temp; 
                }
                if((timeArrayPtr[i].hr == timeArrayPtr[j].hr)&&(timeArrayPtr[i].min > timeArrayPtr[j].min))
                {
                    Time temp;
                    temp= timeArrayPtr[i];
                    timeArrayPtr[i] = timeArrayPtr[j];
                    timeArrayPtr[j] = temp;
                }
                if((timeArrayPtr[i].hr == timeArrayPtr[j].hr)&&(timeArrayPtr[i].min == timeArrayPtr[j].min)&&(timeArrayPtr[i].sec > timeArrayPtr[j].sec))
                {
                    Time temp;
                    temp= timeArrayPtr[i];
                    timeArrayPtr[i]= timeArrayPtr[j];
                    timeArrayPtr[j]= temp;
                }
            }
            
        }
        return timeArrayPtr;
    }

};

int main() {
    int arraySize = 3;
    Time* timeArrayPtr = nullptr; 

    timeArrayPtr = Time::createTimeArray(arraySize);
    for(int i =0;i<arraySize;i++)
    {
        cout<<"Enter "<<i+1<<"time object values(hr,min,sec):";
        int hr,min,sec;
        cin>>hr>>min>>sec;
        timeArrayPtr[i].setTime(hr,min,sec);
    }
    timeArrayPtr = Time::sorttime(timeArrayPtr,arraySize);
    delete []timeArrayPtr;
    return 0;
}