/*#include<iostream>
using namespace std;
class student
{
    public:
    int id;
    float gpa;

    public:
        void display()
        {
            cout<<id<<" "<<gpa<<endl;
        }

};
int main()
{
    student tamim,sayem;
    tamim.id=55;
    tamim.gpa=3.55;
    tamim.display();

    sayem.id=56;
    sayem.gpa=3.56;
    sayem.display();

    return 0;
}
*/
/*
#include<iostream>
using namespace std;
class student
{
    public:
    int id;
    float gpa;

    public:
        void setValue(int x,double y)
        {
            id=x;
            gpa=y;
        }
        void display()
        {
            cout<<id<<" "<<gpa<<endl;
        }

};
int main()
{
    student tamim,sayem;

    tamim.setValue(55,3.55);
    tamim.display();

    sayem.setValue(66,3.66);
    sayem.display();

    return 0;
}
*/

#include<iostream>
using namespace std;
class student
{
    public:
    int id;
    float gpa;

    public:
        student(int x,double y)
        {
            id=x;
            gpa=y;
        }
        student()
        {
            cout<<"Default"<<endl;
        }
        void display()
        {
            cout<<id<<" "<<gpa<<endl;
        }

};
int main()
{
    student ob;

    student tamim(55,3.55);
    //tamim.setValue(55,3.55);
    tamim.display();

    student sayem(66,3.66) ;
    //sayem.setValue(66,3.66);
    sayem.display();

    return 0;
}
