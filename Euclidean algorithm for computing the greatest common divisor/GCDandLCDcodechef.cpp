#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long int a,b;
    cin>>a>>b;
    cout<<__gcd(a,b)<<" "<<((a*b)/__gcd(a,b))<<"\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
