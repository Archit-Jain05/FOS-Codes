#include<iostream>
using namespace std;

main()
{
    int n,counter,wt,wait,twait=0,ptr;

    cout<<"Enter the number of processes"<<endl;
    cin>>n;
    int AT[n],extc[n],BT[n],tat[n],orderstack[n];
    //Input AT
    for(counter=0;counter<n;counter++)
    {
        cout<<"Enter the AT of process "<<counter+1<<" :"<<endl;
        cin>>AT[counter];
        cout<<"Enter the BT of process "<<counter+1<<" :"<<endl;
        cin>>BT[counter];
    }
    int timer=AT[0];
    ptr=NULL;
    for(counter=0;counter<n;counter++)
    {

    }

}
