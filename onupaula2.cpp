#include <iostream>

using namespace std;

int n,x,y;

int cmmdc(int a, int b)
{
    if(b==0)
        return a;
    else
        return cmmdc(b,a%b);
}

int main()
{

    cin >> n >> x >> y;

    int k=cmmdc(x,y);
    for(int i=3;i<=n and k!=1;i++)
    {
        cin >> x;
        k=cmmdc(k,x);
    }
        cout << k;

    return 0;

}
