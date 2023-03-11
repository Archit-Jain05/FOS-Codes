#include<iostream>
#include<math.h>
using namespace std;
int compute(int a, int m, int n)
{
    int r;
    int y = 1;

    while (m > 0)
    {
        r = m % 2;

        // fast exponention
        if (r == 1) {
            y = (y*a) % n;
        }
        a = a*a % n;
        m = m / 2;
    }

    return y;
}

int main()
{
    int p;  //value of alice;
    int g ;//Value of bob;
    int a,b ;// a= alice secret key , b= bob's secret key
    int A,B ;//A= alice public key , B = bob's public key

    cout<<"Enter alice value \n";
    cin>>p;
    cout<<"Enter bob value \n";
    cin>>g;


    int fkey , skey , public_key ;
    cout<<"Enter A's private Key: \n";
    cin>>a;
    A = compute(g, a, p) ;
    cout<<"A"<<A<<endl;

    cout<<"Enter B's private Key: \n";
    cin>>b;

    B =compute(g, b, p);
    cout<<"B"<<B<<endl;


    int KEYA = compute(B,a,p);
    int KEYB= compute(A,b,p);

    cout<<"Secret key of A : "<<KEYA<<endl;
    cout<<"Secret key of B : "<<KEYB<<endl;




}
