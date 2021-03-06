#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll GCD(ll a,ll b,ll& x, ll& y)
{
    if(b==0)
    {
        x=1;
        y=0;
        return a;
    }
    ll x1,y1;
    ll g=GCD(b,a%b,x1,y1);
    x=y1;
    y=x1-(a/b)*y1;
    return g;
}
void solve()
{
    ll a,b,x,y,c;
    cin>>a>>b>>c;
    ll g=GCD(a,b,x,y);
    ll Xreal,Yreal;
    if(c%g!=0)
    {
        cout<<"No solution exist"<<"\n";
        return;
    }
    Xreal=x*(c/g);
    Yreal=y*(c/g);
    cout<<"first solution is "<<Xreal<<"  "<<Yreal<<"\n";
    cout<<"For infinite solution"<<"\n";
    for(ll k=-100;k<=100;k++)
        cout<<Xreal-k*(b/g)<<"   "<<Yreal+k*(a/g)<<"\n";
    cout<<"done"<<"\n";
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
