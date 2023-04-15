//The header file you have to use for rand() function is either #include<stdlib.h> or #include<cstdlib>

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main()
{
    for(int i=0;i<5;i++)
    {
        int rand_num= rand()%5+1;
        cout<<rand_num<<endl;
    }

    getch();

}

//The header file you have to use for rand() function is either #include<stdlib.h> or #include<cstdlib>
