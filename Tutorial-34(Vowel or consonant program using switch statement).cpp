#include<iostrea /m>
#include<conio.h>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter any charracter: ";
    cin>>ch;

    ch=tolower(ch);

    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout<<"Vowel";
            break;
        default:
            cout<<"Consonant";

    }

    getch();
}
