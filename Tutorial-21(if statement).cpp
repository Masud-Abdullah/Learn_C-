#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter any integer: "<<endl;
    cin>>num;

    if(num>0) cout<<"Positive\n";

    if(num==0) cout<<"Zero\n";

    if(num<0) cout<<"Negative\n";

    getch();
}
