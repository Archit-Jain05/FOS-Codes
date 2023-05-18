#include<iostream>
#include<fstream>
#include<stdio.h>
#include<string.h>
#include<String>

using namespace std;

main()
{
    fstream f1,f2;
    char a[100],b[100];
    string s1,cpy;

    f1.open("file1.txt",ios::out|ios::in);
    cout<<"Enter message: ";
    gets(a);
    //cout<<a;
    f1<<a;


     f2.open("file2.txt",ios::out|ios::in);
     while(f1)
    {
        getline(f1,cpy);
        cout<<cpy;
        f2<<cpy;
    }

cout<<"Message :-"<<endl;
    while(f2)
    {
        getline(f2,s1);
        cout<<s1;
    }
    f1.close();
    f2.close();
}
