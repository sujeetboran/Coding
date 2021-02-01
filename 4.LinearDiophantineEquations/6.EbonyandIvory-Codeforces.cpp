#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m,c;
    cin>>n>>m>>c;
    int temp=max(n,m);
    n=n+m-temp;
    m=temp;
    if(c%__gcd(n,m)!=0)
    {
        cout<<"No";
        return;
    }
    if(c%n==0)
    {
        cout<<"Yes";
        return;
    }
    else if(c%m==0)
    {
        cout<<"Yes";
        return;
    }
    else
    {
        while(c>0)
        {
           c-=m;
           if(c<0)
            break;
           if(c%n==0)
           {
               cout<<"Yes";
               return;
           }
        }
    }
    cout<<"No";
}    
int main()
{
    int t=1;
    //cin>>t;
    while(t--)
        solve();
    return 0;
}
