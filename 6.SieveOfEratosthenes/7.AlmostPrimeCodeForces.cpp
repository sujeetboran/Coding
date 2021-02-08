#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define m 1000000007
int a[3001];
int primedivisior(int x)
{
    int i=2;
    int count=0;
    while(x>1)
    {
        if(x%i==0)
        {
            count++;
            while(x%i==0)
                x/=i;
        }
        i++;
    }
    return count;
}
void solve()
{
    a[0]=a[1]=0;
    for(int i=2;i<3001;i++)
        a[i]=1;
    for(int j=2;j<3001;j++)
        if(primedivisior(j)!=2)
            a[j]=0;
    for(int i=1;i<3001;i++)
        a[i]+=a[i-1];
    return;
}
int main()
{
    solve();
        int n;
        cin>>n;
        cout<<a[n]<<"\n";
    return 0;
}
