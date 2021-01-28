#include <iostream>
using namespace std;
#define m 1000000007
int main() {
	long long int a,b,ans=0;
	cin>>a>>b;
	while(a>0)
	{
	    if(a&1)
	        ans=(ans+b)%m;
	    b=(b*2)%m;
	    a>>=1;
	}
	cout<<ans<<"\n";
	return 0;
}

