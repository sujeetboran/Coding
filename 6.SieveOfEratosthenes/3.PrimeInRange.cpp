#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define m 1000000007
void solve()
{
    ll l,r;
    cin>>l>>r;
    int nsqrt=sqrt(r);
    vector<bool>v(nsqrt+1,true);
    vector<ll>prime;
    v[0]=false;v[1]=false;
    for(int i=2;i<=nsqrt;i++)
    {
        if(v[i])
        {
            prime.push_back(i);
            for(int j=i*i;j<=nsqrt;j+=i)
                v[j]=false;
        }
    }
    
    int result=0;
    vector<bool>totalprime(r-l+1,true);
    for(ll p:prime)
    {
        int j=max((l+p-1)/p,p)*p;
        for(;j<=r;j+=p)
            totalprime[j-l]=false;
    }
    if(l==1)
        totalprime[0]=false;
    for(int i=0;i<=r-l;i++)
    {
        if(totalprime[i])
        {
                result++;
                cout<<l+i<<" ";
        }
    }
    cout<<"\n";
    cout<<"total prime:- ";
    cout<<result<<"\n";
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
