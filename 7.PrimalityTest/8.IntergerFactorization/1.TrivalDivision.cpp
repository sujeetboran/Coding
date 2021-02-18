#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    for(int i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            if(n%i==0)
                cout<<i<<" ";
            n/=i;
        }
    }
    if(n>1)
        cout<<n<<"\n";
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
