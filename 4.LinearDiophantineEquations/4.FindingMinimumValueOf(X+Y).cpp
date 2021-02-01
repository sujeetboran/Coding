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
    ll a,b,x,y,c,Xmin,Xmax,Ymin,Ymax;
    cin>>a>>b>>c>>Xmin>>Xmax>>Ymin>>Ymax;
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
    ll KXmin,KXmax,KYmin,KYmax;
    KXmin=(Xmin-Xreal)/(b/g);
    KYmin=(Ymax-Yreal)/(a/g);
    KXmax=(Xmax-Xreal)/(b/g);
    KYmax=(Ymax-Yreal)/(a/g);
    ll Kmin=max(KXmin,KYmin),Kmax=min(KXmax,KYmax);
    if(a>b)
        cout<<min(Xreal+Yreal+Kmax*((b-a)/g),Xreal+Yreal+Kmin*((a-b)/g));
    else if(b>a)
        cout<<min(Xreal+Yreal+Kmax*((a-b)/g),Xreal+Yreal+Kmin*((b-a)/g));
    else
        cout<<Xreal+Yreal;
    cout<<"\n"<<"Done!!"<<"\n";
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
