#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define m 100000000
void solve()
{
    int count=0;
    vector<bool>v(m,true);
    for(ll i=2;i*i<m;i++)
    if(v[i])
        for(ll j=i*i;j<m;j+=i)
            v[j]=false;
    for(int i=2;i<m;i++)
    {
        if(v[i])
        {
            count++;
            if(count%100==1)
                cout<<i<<"\n";
        }
    }
    return;
}
int main()
{
    int t=1;
    //cin>>t;
    while(t--)
        solve();
    return 0;
}
