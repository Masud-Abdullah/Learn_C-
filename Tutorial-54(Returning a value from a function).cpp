#include<iostream>
using namespace std;

int addition(int a,int b)
{
    int sum=a+b;
    return sum;
}
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<addition(x,y)<<endl;

    return 0;
}

/*int main()
{
    int x,y;
    cin>>x>>y;
    int result=addition(x,y);
    cout<<result<<endl;
    return 0;
}*/
