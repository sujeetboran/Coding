#include<bits/stdc++.h>
using namespace std;
int GCD(int a,int b,int &x,int &y)
{
    if(b==0)
    {
        x=1;
        y=0;
        return a;
    }
    int x1, y1;
    int d=GCD(b,a%b,x1,y1);
    x=y1;
    y=x1-(a/b)*y1;
    return d;
}
void solve()
{
    int a,b,x,y;
    cin>>a>>b;
    int d=GCD(a,b,x,y);
    cout<<d<<"  "<<x<<"  "<<y<<"\n";
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
