/*
in ques6,derive a class GameResult with an array of 5 int type variables to store the result in each round.Result value is 2 for win,0 for loose,1 for draw.Provide methods to setResult and getResult.write method to calculate final result of the game.
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
class GameResult:public Game
{
    private:
        int res[5];
    public:
        void setResult(int result,int round)
        {
            round=round-1;
            if((result>-1 && result<3)&&(round>-1 && round<5))
                res[round]=result;
            else
                throw 3;
        }
        int getResult(int round)
        {
            round=round-1;
            if(round>-1 && round<5)
                return res[round];
            else
                throw 4;
        }
        void finalresult()
        {
            int sum=0;
            for(int i=0;i<5;i++)
            {
                sum = sum + res[i];
            }
            if(sum>=6 && sum<=10)
                cout<<"final result is:won"<<endl;
            else if(sum>=0 && sum<=4)
                cout<<"final rsult is:lost"<<endl;
            else if(sum==5)
                cout<<"final result is:draw"<<endl;
        }
};

int main()
{
    GameResult obj;
    try
    {
        obj.setResult(2,1);
        obj.setResult(0,2);
        obj.setResult(2,3);
        obj.setResult(0,4);
        obj.setResult(2,5);
        cout<<"Results:";
        cout<<obj.getResult(1)<<" "<<obj.getResult(2)<<" "<<obj.getResult(3)<<" "<<obj.getResult(4)<<" "<<obj.getResult(5)<<" "<<endl;
        obj.finalresult();
    }
    catch(int e)
    {
            cout<<"Invalid round/result number."<<endl;
    }
    return 0;
}