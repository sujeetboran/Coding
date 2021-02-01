#include<bits/stdc++.h>
using namespace std;

long long int GCD(long long int a,long long int b,long long int &x,long long int &y)
{
    if(b==0)
    {
        x=1;
        y=0;
        return a;
    }
    long long int x1,y1;
    int g=GCD(b,a%b,x1,y1);
    x=y1;
    y=x1-(a/b)*y1;
    return g;
}

void solve()
{
    long long int a,b,c,x,y,Xreal,Yreal;
    cin>>a>>b>>c;
    long long int g=GCD(a,b,x,y);
    //cout<<g<<"  "<<x<<"   "<<y<<"\n";
    if(c%g!=0)
    {
        cout<<"No solution of equation"<<"\n";
        return;
    }
    Xreal=x*(c/g);
    Yreal=y*(c/g);
    cout<<"Solution is:- "<<Xreal<<" "<<Yreal<<"\n";
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
