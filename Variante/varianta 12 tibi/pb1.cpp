#include <bits/stdc++.h>

using namespace std;

ifstream f("date.in");

void descomp(int n,int d,int &p,int &e)
{
    p=1;
    e=0;
    while(n%d==0)
    {
        e++;
        p=p*d;
        n=n/d;
    }
}

int main()
{
    int n,p=1,e=0;
    cin>>n;
    int d=2;
    for(int d=2;d*d<=n;d++)
    {
        if(n%d==0)
        {
            descomp(n,d,p,e);
            cout<<p<<" "<<e<<" ";
            n=n/p;
        }
    }
    if(n!=1)
        cout<<n<<" ";

    return 0;
}
