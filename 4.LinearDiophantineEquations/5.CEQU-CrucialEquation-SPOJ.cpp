#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        if(c%__gcd(a,b)==0)
            cout<<"Case "<<i<<": "<<"Yes"<<"\n";
        else
            cout<<"Case "<<i<<": "<<"No"<<"\n";
    }
    return 0;
}

