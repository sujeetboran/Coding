#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve( unordered_map<long long int,long long int>m)
{
    long long int n;
    cin>>n;
    if(m[n])
        cout<<"IsFibo"<<"\n";
    else
        cout<<"IsNotFibo"<<"\n";
    return;
}
int main()
{
    unordered_map<long long int,long long int>m;
    long long int a[60];
    a[0]=1;
    a[1]=1;
    m[0]++;
    m[1]++;
    for(int i=2;i<60;i++)
    {
        a[i]=a[i-1]+a[i-2];
        m[a[i]]++;
    }  
    int t;
    cin>>t;
    while(t--)
        solve(m);
    return 0;
}
