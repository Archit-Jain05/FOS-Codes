#include<iostream>
using namespace std;

int main()
{
    int da,hra,salary,final;
    cout << "Give basic salary";
    cin >> salary;

    da=(50*salary)/100;
    hra=(40*salary)/100;

    final = da+hra+salary;

    cout << final;
}
