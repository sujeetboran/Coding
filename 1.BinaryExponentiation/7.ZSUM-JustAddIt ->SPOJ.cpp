#include<bits/stdc++.h>
using namespace std;
#define m 10000007
long long int solve(long long int a,long long int b)
{
    long long int ans=1;
    while(b>0)
    {
        if(b&1)
            ans=(ans*a)%m;
        a=(a*a)%m;
        b>>=1;
    }
    ans%=m;
    return ans;
}
int main()
{
    while(1)
    {
        long long int n,k;
        cin>>n>>k;
        if(n==0 && k==0)
            break;
        cout<<((((2*solve(n-1,k))%m+solve(n,k))%m+(2*solve(n-1,n-1))%m)%m+solve(n,n))%m<<"\n";
    }
    return 0;
}
