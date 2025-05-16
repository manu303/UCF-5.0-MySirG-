//Define a class Room for a hotel management project with room number,room type,is_AC,price as instance variables.Initialise instance variables using constructor.
#include<iostream>
using namespace std;
class Room
{
    private:
        int room_num;
        char *room_type;
        bool is_AC;
        float price;
    public:
        Room(int room_num,char *room_type,bool is_AC,float price):room_num(room_num),room_type(room_type),is_AC(is_AC),price(price)
        {}
        void display()
        {
            cout<<endl;
            cout<<"Room Number:"<<room_num<<endl;
            cout<<"Room Type:"<<room_type<<endl;
            if(is_AC)
                cout<<"AC:"<<"True"<<endl;
            else
                cout<<"AC:"<<"False"<<endl;
            cout<<"Price:"<<price<<endl;
        }
};
int main()
{
    Room r1(1,"Deluxe",1,1500.50);
    Room r2(2,"Suite",0,2500.50);
    r1.display();
    r2.display();
    return 0;
}