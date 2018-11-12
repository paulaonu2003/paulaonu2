#include<iostream>
using namespace std;
int a,b;
int main()
{
    cout<<"introduceti a si b:"<<endl
    cin>>a>>b;
    while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    cout<<"cmmdc="<<a;
}
