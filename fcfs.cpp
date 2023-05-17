#include<iostream>
using namespace std;

main()
{
    int n,counter,wt,wait,twait=0;

    cout<<"Enter the number of processes"<<endl;
    cin>>n;
    int AT[n],extc[n],BT[n],tat[n];

    //Input AT
    for(counter=0;counter<n;counter++)
    {
        cout<<"Enter the AT of process "<<counter+1<<" :"<<endl;
        cin>>AT[counter];
        cout<<"Enter the BT of process "<<counter+1<<" :"<<endl;
        cin>>BT[counter];
    }
    int timer=AT[0];

    //Timer
    for(counter=0;counter<n;counter++)
    {

        timer=timer+BT[counter];
        tat[counter]=timer-AT[counter];
        wait=timer-AT[counter]-BT[counter];
        cout<<"wait time for process "<<counter<<" :"<<wait<<endl;
        twait=twait+wait;
        cout<<"tat time for process "<<counter<<" :"<<tat[counter]<<endl;
        cout<<endl;

    }
    cout<<"Current timer at :"<<timer<<endl;

    double avgw = twait/n;

    cout<<"Average wait time = "<<avgw<<endl;


}
