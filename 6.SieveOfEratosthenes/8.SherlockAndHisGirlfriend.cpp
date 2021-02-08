#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define m 1000000007
void solve(int n)
{
    vector<bool>v(n);
    fill(v.begin(),v.end(),true);
    for(int i=2;i*i<n;i++)
        if(v[i])
            for(int j=i*i;j<n;j+=i)
                v[j]=false;
    for(int i=2;i<n;i++)
    {
        if(v[i])
            cout<<2<<" ";
        else
            cout<<1<<" ";
    }
    cout<<"\n";
return;
}
int main()
{
    int t;
    cin>>t;
    if(t==1)
        cout<<1<<"\n"<<1;
    else if(t==2)
        cout<<1<<"\n"<<"1 1";
    else
        {cout<<2<<"\n";
    solve(t+2);}
    return 0;
}
