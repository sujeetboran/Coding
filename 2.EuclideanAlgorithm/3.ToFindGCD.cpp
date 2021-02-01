#include<bits/stdc++.h>
using namespace std;
int GCD(long long int a,long long int b)
{
    cout<<a<<"   "<<b<<"\n";
    if(a==0)
        return b;
    if(!(a&1)&&!(b&1))
    {
        a>>=1;
        b>>=1;
        return 2*GCD(a,b);
    }
    if(!b&1)
    {
        b>>=1;
        return GCD(min(a,b),max(a,b));
    }
    if(!a&1)
    {
        a>>=1;
        return GCD(min(a,b),max(a,b));
    }
   return GCD(min(a,b-a),max(a,b-a));
}
void solve()
{
    long long int a,b;
    cin>>a>>b;
    cout<<GCD(min(a,b),max(a,b))<<"\n";
    return;
}
int main()
{
    int t=1;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
