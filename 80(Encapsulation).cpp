#include<iostream>
using namespace std;

class student
{
   // public:
    int id;
    string name;
public:

    void seT(int x,string y)
    {
        id=x;
        name=y;
    }
   /* void seT(string x)
    {
        name=x;
    }
    string get()
    {
        return name;
    }*/

    void display()
    {
        cout<<id<<endl;
        cout<<name<<endl;
    }

};
int main()
{
    student s1;
   // s1.seT("tamim");
    //cout<<s1.get()<<endl;
    s1.seT(101,"Tamim");
    //s1.id=101;
  //  s1.name="Tamim";
    s1.display();

    return 0;

}
