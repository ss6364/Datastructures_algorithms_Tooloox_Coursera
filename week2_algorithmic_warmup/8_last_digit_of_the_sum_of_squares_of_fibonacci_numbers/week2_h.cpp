#include<bits/stdc++.h>
using namespace std ;
int main(){
	long long n=0;
	cin>>n;
	n=(n+1)%60;
	long long fib[n+1],res=0;
	fib[0]=0;
	fib[1]=1;
	for(int i=2;i<=n;i++){
		fib[i]=((fib[i-1]%10)+(fib[i-2]%10))%10;
	}
	res = (fib[n]*fib[n-1])%10;
	cout<<res<<endl;
	return 0 ;
}
