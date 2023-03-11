#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;

main()
{
    int num;
    int prime;
    int i;
  cout<<"Enter the number"<<endl;
  cin>>num;

    if(num%2==0)
    {
      cout<<"Number is even"<<endl;
    }
    else
    {
        for(i=2;i<num/2;i++)
            {
                if(num%i==0)
                {
                    prime=0;
                    return 0;
                }
                else
                {
                    prime=1;
                }

            }
            if(prime=0)
            {
                cout<<"Number is odd";
            }
            else{
                cout<<"Number is Prime";
            }
    }
}
