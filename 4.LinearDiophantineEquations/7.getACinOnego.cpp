#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll a,b;
    cin>>a>>b;
    if(__gcd(a,b)!=1)
    {
        cout<<"-1"<<"\n";
        return;
    }
    cout<<(max(a,b)-1)*(min(a,b)-1)<<"\n";
    //7023596110
    return;
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
