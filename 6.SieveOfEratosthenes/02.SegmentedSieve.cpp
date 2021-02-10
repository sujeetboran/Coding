#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define m 1000000007
// s is the size of block for finding prime
#define s 10000
void solve()
{
    ll n;
    cin>>n;
    int nsqrt=sqrt(n);
    vector<bool>v(nsqrt+1,true);
    vector<int>prime;
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
    vector<bool>blocks(s);
    int valuek=(n+s-1)/s;
    for(int k=0;k<=valuek;k++)
    {
        fill(blocks.begin(),blocks.end(),true);
        int value=k*s;
        for(int p:prime)
        {
            int j=max((value+p-1)/p,p)*p-value;
            for(;j<s;j+=p)
                blocks[j]=false;
        }
        if(k==0)
        {
            blocks[0]=false;blocks[1]=false;
        }
        for(int i=0;i<s && value+i<=n;i++)
        {
            if(blocks[i])
            {
                result++;
                cout<<value+i<<" ";
            }
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
