#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define m 1000000007
void solve()
{
    ll n;
    cin>>n;
    vector<bool>v(n+1);
    fill(v.begin(),v.end(),true);
    for(int i=2;i*i<=n;i++)
        if(v[i])
            for(int j=i*i;j<=n;j+=i)
                v[j]=false;
    for(int i=2;i<=n;i++)
        if(v[i])
            cout<<i<<" ";
    cout<<"\n";
return;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
