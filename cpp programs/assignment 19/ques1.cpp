/*
Define a class Game with an array of 5 int variables as instance member to store score of each of 5 rounds.Provide method to setScore(int round,int score).Also provide method getScore(int round).
*/
#include<iostream>
using namespace std;
class Game
{
    private:
        int arr[5];
    public:
        void setScore(int round,int score)
        {
            round = round-1;
            if(round>-1 && round<5)
                arr[round]=score;
            else
                throw 1;
        }
        int getScore(int round)
        {
            round=round-1;
            if(round>-1 && round<5)
                return arr[round];
            else
                throw 2;
        }
};
int main()
{
    Game obj;
    try
    {
        obj.setScore(1,10);
        obj.setScore(2,20);
        obj.setScore(3,30);
        obj.setScore(4,40);
        obj.setScore(5,50);
        cout<<"Scores:";
        cout<<obj.getScore(1)<<" "<<obj.getScore(2)<<" "<<obj.getScore(3)<<" "<<obj.getScore(4)<<" "<<obj.getScore(5)<<" "<<endl;
    
    }
    catch(int e)
    {
        if(e==1||e==2)
            cout<<"Invalid round number."<<endl;
    }
    return 0;
    
}