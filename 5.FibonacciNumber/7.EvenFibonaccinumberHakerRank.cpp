#include<bits/stdc++.h>
using namespace std;
vector<unsigned long long int>v;
void doit()
{
    unsigned long long int x1=2,x2=1,x;
    while(x1<400000000000000001)
    {
        if(x1%2==0)
            v.push_back(x1);
        x=x1;
        x1=x1+x2;
        x2=x;
    }
    return;
}
void solve()
{
    unsigned long long int n,sum=0;
    cin>>n;
    unsigned long long int x=n;
    for(unsigned long long int i:v)
    {
        if(i>n)
            break;
        sum+=i;
    }
    cout<<sum<<"\n";
}
int main()
{
    int t;
    cin>>t;
    doit();
    while(t--)
        solve();
    return 0;
}
