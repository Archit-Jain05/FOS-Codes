#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

main()
{
    int a,c,res=1;
    cout<<"Enter number:"<<endl;
    cin>>a;

    for(c=1;c<=a;c++)
    {
       res=res*c;
    }
    cout<<"Factorial = "<<res;
}
