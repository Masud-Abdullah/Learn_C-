#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter any integer: "<<endl;
    cin>>num;

    if(num>0) cout<<"Positive\n";
    else if(num<0)cout<<"Negative\n";
    else cout<<"Zero\n";

    getch();
}

