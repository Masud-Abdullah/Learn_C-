#include<iostream>
#include<conio.h>
using namespace std;

void display_array(int num[],int sizee)
{
    for(int i=0;i<sizee;i++)
    {
        cout<<num[i]<<endl;
    }
}

int main()
{
    int arr[8]={1,2,3,4,5,6,7,8};
    display_array(arr,8);

    getch();
}

/*#include<iostream>
#include<conio.h>
using namespace std;

void display_array(int num[])
{
    for(int i=0;i<5;i++)
    {
        cout<<num[i]<<endl;
    }
}

int main()
{
    int tamim[]={10,20,30,40,50};
    display_array(tamim);

    getch();
}
*/
