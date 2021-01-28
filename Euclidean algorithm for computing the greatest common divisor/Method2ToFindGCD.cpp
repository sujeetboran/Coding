#include <bits/stdc++.h>
using namespace std;
#define m 1000000007
int main() {
	long long int a,b;
	cin>>a>>b;
	while(b)
	{
	    a%=b;
	    swap(a,b);
	}
	cout<<a<<"\n";
	return 0;
}

