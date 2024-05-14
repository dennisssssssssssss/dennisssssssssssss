#include <bits/stdc++.h>

using namespace std;

ifstream f("date.in");
    int n,m,v[100000],a,x;

int main()
{
    f>>a;
    while(f>>x)
    {
        int copie=x;
        while(copie%a==0)
            copie/=a;
        if(copie==1)
            cout<<x<<" ";
    }
    return 0;
}
