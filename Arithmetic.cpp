#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

main()
{
    int choice;
    double ans,a,b;
    cout<<"Enter number 1:"<<endl;
    cin>>a;
    cout<<"Enter number 2:"<<endl;
    cin>>b;

    cout<<"Enter the operation to perform:"<<endl;
    cout<<"1. Addition \n2. Subtraction \n3. Multiplication \n4. Division \n5.Modulus"<<endl;
    cin>>choice;

    switch(choice)
    {

        case 1:{ans=a+b;
                cout<<"Addition = "<<ans;
                break;}

        case 2:{ans=a-b;
                cout<<"Subtraction = "<<ans;
                break;}

        case 3:{ans=a*b;
                cout<<"Multiplication = "<<ans;
                break;}

        case 4:{ans=a/b;
                cout<<"Division = "<<ans;
                break;}

        case 5:{int x=(int)a;
                int y=(int)b;
                cout<<"Modulus = "<<x%y<<endl;
                break;}

    }





}
