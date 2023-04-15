/*#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num1=50,num2=40;

    int max=(num1>num2)?num1:num2;

    cout<<max;


    getch();
}
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num;

    cout<<"Enter any integer: ";
    cin>>num;

    (num%2==0)? cout<<"Even" : cout<<"Odd";

    getch();
}
