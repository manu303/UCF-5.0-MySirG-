/*
Define a Actor class with name,age as instance variables and setters,getters as instance methods.Define a class TVActor as a derived class of Actor with instance variable to store number of Tv projects done or running and define setter,getter.Also define setTVActor() and showTVActor(). Define a class MOvieActor as a derived class of Actor with instance variable to store number of movies done or running and define setter,getter.Also define setMovieActor() and showMovieActor().Derive a class AllScreenActor from TVActor and MovieActor.Define a method to setActorData() and showActorData().
*/
#include<iostream>
#include<string>
using namespace std;
class Actor
{
    private:
        string name;
        int age;
    public:
        Actor():name("n/a"),age(0)
        {}
        Actor(string name,int age):name(name),age(age)
        {}
        void setname(string name)
        {
            this->name=name;
        }
        void setage(int age)
        {
            this->age=age;
        }
        string getname()
        {
            return name;
        }
        int getage()
        {
            return age;
        }
};
class TVActor:virtual public Actor
{
    private:
        int num_tv_proj;
    public:
        TVActor():num_tv_proj(0)
        {}
        TVActor(int num):num_tv_proj(num)
        {}
        void set_num_tv_proj(int num)
        {
            num_tv_proj=num;
        }
        int get_num_tv_proj()
        {
            return num_tv_proj;
        }
        void setTVActor(string name,int age,int num)
        {
            setname(name);
            setage(age);
            set_num_tv_proj(num);
        }
        void showTVActor()
        {
            cout<<"TV Actor Name:"<<getname()<<endl;
            cout<<"TV Actor Age:"<<getage()<<endl;
            cout<<"Number of TV projects:"<<get_num_tv_proj()<<endl;
        }
};
class MovieActor:virtual public Actor
{
    private:
        int num_mov_proj;
    public:
        MovieActor():num_mov_proj(0)
        {}
        MovieActor(int num):num_mov_proj(num)
        {}
        void set_num_mov_proj(int num)
        {
            num_mov_proj=num;
        }
        int get_num_mov_proj()
        {
            return num_mov_proj;
        }
        void setMovieActor(string name,int age,int num)
        {
            setname(name);
            setage(age);
            set_num_mov_proj(num);
        }
        void showMovieActor()
        {
            cout<<"Movie Actor Name:"<<getname()<<endl;
            cout<<"Movie Actor Age:"<<getage()<<endl;
            cout<<"Number of Movie projects:"<<get_num_mov_proj()<<endl;
        }
};
class AllScreenActor:public TVActor,public MovieActor
{
    public:
        AllScreenActor():Actor(),TVActor(),MovieActor()
        {}

        AllScreenActor(string name,int age,int numtv,int nummov):
        Actor(name,age),TVActor(numtv),MovieActor(nummov)
        {}

        void setActorData(string name,int age,int numtv,int nummov)
        {
            setname(name);
            setage(age);
            set_num_tv_proj(numtv);
            set_num_mov_proj(nummov);
        }

        void showActorData()
        {
            cout<<"Actor Name:"<<getname()<<endl;
            cout<<"Actor Age:"<<getage()<<endl;
            cout<<"Actor projects in Tv:"<<get_num_tv_proj()<<endl;
            cout<<"Actor projects in Movie:"<<get_num_mov_proj()<<endl;
        }
};
int main()
{
    AllScreenActor obj;
    obj.setActorData("manu",23,2,5);
    obj.showActorData();
    return 0;
}