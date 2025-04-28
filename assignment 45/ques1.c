//program to calculate difference between two time periods.
#include<stdio.h>
//function declarations
struct timeperiod input();
struct timeperiod tmp_diff(int start_secs,int end_secs,int time_diff_secs);
//structure definition
struct timeperiod
{
    int hrs,mins,secs;
};
//main functtion
int main()
{
    struct timeperiod start,end,res;
    printf("Starting time:\n");
    start=input();
    printf("Ending time:\n");
    end=input();
    int time_diff_secs,end_secs,start_secs;
    end_secs = ((end.hrs*3600)+(end.mins*60)+(end.secs));
    start_secs = ((start.hrs*3600)+(start.mins*60)+(start.secs));
    time_diff_secs = ( end_secs - start_secs );
    res = tmp_diff(start_secs,end_secs,time_diff_secs);
    printf("Difference between two time periods is:%d hrs:%d mins:%d secs",res.hrs,res.mins,res.secs);
    return 0;
}
//definition of function input
struct timeperiod input()
{
    struct timeperiod tmp;
    printf("Enter hrs,mins and seconds:");
    scanf("%d %d %d",&tmp.hrs,&tmp.mins,&tmp.secs);
    return tmp;
}
//definition of function tmp_diff
struct timeperiod tmp_diff(int start_secs,int end_secs,int time_diff_secs)
{
    int hrs,mins,secs;
    if(time_diff_secs>=0)
    {
        hrs = time_diff_secs/3600;
        time_diff_secs = time_diff_secs%3600;
        mins = time_diff_secs/60;
        time_diff_secs = time_diff_secs%60;
        secs = time_diff_secs;
    }
    else
    {
        time_diff_secs = ((24*3600)-start_secs)+end_secs;
        hrs = time_diff_secs/3600;
        time_diff_secs = time_diff_secs%3600;
        mins = time_diff_secs/60;
        time_diff_secs = time_diff_secs%60;
        secs = time_diff_secs;
    }
    struct timeperiod tmp;
    tmp.hrs = hrs;
    tmp.mins = mins;
    tmp.secs = secs;
    return tmp;
}