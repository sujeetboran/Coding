#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define m 1000000007
#define len 1000001
int one[1000001];
int two[1000001];
int three[1000001];
int four[1000001];
int five[1000001];
int six[1000001];
int seven[1000001];
int eight[1000001];
int nine[1000001];
int ten[1000001];
vector<int>primes;
void preprocess()
{
    int a[1000001];
    for(int i=0;i<1000001;i++)
    {
        a[i]=0;
        one[i]=0;two[i]=0;three[i]=0;
        four[i]=0;five[i]=0;six[i]=0;
        seven[i]=0;eight[i]=0;nine[i]=0;ten[i]=0;
    }
    for(int i=2;i*i<1000001;i++)
    {
        if(a[i])
            continue;
        for(int j=i*i;j<1000001;j+=i)
            a[j]=1;
    }
    for(int i=2;i<1000001;i++)
        if(!a[i])
            primes.push_back(i);
    
    
    for(int i:primes)
    {
        for(int j=i;j<1000001;j+=i)
        {
            one[j]++;
            two[j]++;
            three[j]++;
            four[j]++;
            five[j]++;
            six[j]++;
            seven[j]++;
            eight[j]++;
            nine[j]++;
            ten[j]++;
        }
    }
    for(int i=1;i<1000001;i++)
    {
        if(one[i]==1)
            one[i]=one[i-1]+1;
        else
            one[i]=one[i-1];
    }
    
    for(int i=1;i<1000001;i++)
    {
        if(two[i]==2)
            two[i]=two[i-1]+1;
        else
            two[i]=two[i-1];
    }
    
    for(int i=1;i<1000001;i++)
    {
        if(three[i]==3)
            three[i]=three[i-1]+1;
        else
            three[i]=three[i-1];
    }
    
    for(int i=1;i<1000001;i++)
    {
        if(four[i]==4)
            four[i]=four[i-1]+1;
        else
            four[i]=four[i-1];
    }
    
    for(int i=1;i<1000001;i++)
    {
        if(five[i]==5)
            five[i]=five[i-1]+1;
        else
            five[i]=five[i-1];
    }
    
    for(int i=1;i<1000001;i++)
    {
        if(six[i]==6)
            six[i]=six[i-1]+1;
        else
            six[i]=six[i-1];
    }
    
    for(int i=1;i<1000001;i++)
    {
        if(seven[i]==7)
            seven[i]=seven[i-1]+1;
        else
            seven[i]=seven[i-1];
    }
    
    for(int i=1;i<1000001;i++)
    {
        if(eight[i]==8)
            eight[i]=eight[i-1]+1;
        else
            eight[i]=eight[i-1];
    }
    
    for(int i=1;i<1000001;i++)
    {
        if(nine[i]==9)
            nine[i]=nine[i-1]+1;
        else
            nine[i]=nine[i-1];
    }
    
    for(int i=1;i<1000001;i++)
    {
        if(ten[i]==10)
            ten[i]=ten[i-1]+1;
        else
            ten[i]=ten[i-1];
    }
    /*for(int i=0;i<1000;i++)
        cout<<i<<"  "<<one[i]<<"      ";
    cout<<"\n";
    for(int i=0;i<1000;i++)
        cout<<i<<"  "<<two[i]<<"      ";
    cout<<"\n";
    for(int i=0;i<1000;i++)
        cout<<i<<"  "<<three[i]<<"      ";
    cout<<"\n";
    for(int i=0;i<1000;i++)
        cout<<i<<"  "<<four[i]<<"      ";
    cout<<"\n";
    for(int i=0;i<1000;i++)
        cout<<i<<"  "<<five[i]<<"      ";
    cout<<"\n";
    for(int i=0;i<1000;i++)
        cout<<i<<"  "<<six[i]<<"      ";
    cout<<"\n";
    for(int i=0;i<1000;i++)
        cout<<i<<"  "<<seven[i]<<"      ";
    cout<<"\n";
    for(int i=0;i<1000;i++)
        cout<<i<<"  "<<eight[i]<<"      ";
    cout<<"\n";
    for(int i=0;i<1000;i++)
        cout<<i<<"  "<<nine[i]<<"      ";
    cout<<"\n";
    for(int i=0;i<1000;i++)
        cout<<i<<"  "<<ten[i]<<"      ";
    cout<<"\n";*/
}
void solve()
{
    int a,b,n;
    cin>>a>>b>>n;
    if(n==0)
    {
        if(a==1)
            cout<<1;
        else
            cout<<0;
    }
    if(n==1)
        cout<<one[b]-one[a-1];
    if(n==2)
        cout<<two[b]-two[a-1];
    if(n==3)
        cout<<three[b]-three[a-1];
    if(n==4)
        cout<<four[b]-four[a-1];
    if(n==5)
        cout<<five[b]-five[a-1];
    if(n==6)
        cout<<six[b]-six[a-1];
    if(n==7)
        cout<<seven[b]-seven[a-1];
    if(n==8)
        cout<<eight[b]-eight[a-1];
    if(n==9)
        cout<<nine[b]-nine[a-1];
    if(n==10)
        cout<<ten[b]-ten[a-1];
    cout<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    preprocess();
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
