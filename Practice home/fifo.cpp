#include<iostream>
#include<stdio.h>
using namespace std;

class Process
{
    public:
    int art,brt,tat,wt;

    void getProcess(int a)
    {
        cout<<"Enter Arrival time of process "<<a<<":"<<endl;
        cin>>art;
        cout<<"Enter Burst time of process "<<a<<":"<<endl;
        cin>>brt;
    }
};



main()
{
    int nop,timer=0,i;

    cout<<"Enter the number of processes:"<<endl;
    cin>>nop;

    Process p[nop];

    for(i=0;i<nop;i++)
    {
        p[i]=Process();
        p[i].getProcess(i+1);
    }

    for(i=0;i<nop;i++)
    {
        if(p[i].art<p[i+1].art)
        {

        }
    }
}

void swapper(Process a,Process B)
{
    Process temp;
    temp.art=a.art
}
