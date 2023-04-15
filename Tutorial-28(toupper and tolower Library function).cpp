#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter any charracter: "<<endl;
    cin>>ch;

    ch = toupper(ch);
    cout<<ch<<endl;

    ch=tolower(ch);
    cout<<ch<<endl;

    getch();
}
