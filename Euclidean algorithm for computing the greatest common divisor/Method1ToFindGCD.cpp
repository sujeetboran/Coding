#include <bits/stdc++.h>
using namespace std;
#define m 1000000007

// Can use STL library fro finding GCD Directly by __gcd(a,b)

long long int solve(long long int a,long long int b)
{
    if(a==0)
        return b;
    return solve(b%a,a);
}
int main() {
	long long int a,b;
	cin>>a>>b;
	cout<< solve(a,b);
	return 0;
}

