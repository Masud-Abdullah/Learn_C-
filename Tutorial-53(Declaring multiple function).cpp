#include<iostream>
using namespace std;

void add(int,int);
void sub(int,int);
void mul(int,int);
void division(int,int);


int main()
{
    add(10,3);
    sub(10,3);
    mul(10,3);
    division(10,3);

    return 0;
}

void add(int a,int b)
{
    int ans=a+b;
    cout<<ans<<endl;
}


void sub(int a,int b)
{
    int ans = a-b;
    cout<<ans<<endl;
}

void mul(int a,int b)
{
    int ans=a*b;
    cout<<ans<<endl;
}
void division(int a,int b)
{
    float ans = (float)a/b;
    cout<<ans<<endl;
}

