#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a;
    float f;
    double d;             //introducing with special operators(comma(,) and sizeof())
    char ch;
    char name[20];

    int c = sizeof(a);
    cout<<c<<endl;

    c = sizeof(f);
    cout<<c<<endl;

    c = sizeof(d);
    cout<<c<<endl;

    c = sizeof(ch);
    cout<<c<<endl;

    c = sizeof(name);
    cout<<c<<endl;

    int x,y,sum;
    sum = (x=20,y=30,sum=x+y);
    cout<<sum<<endl;

    getch();
}
