#include<bits/stdc++.h>
using namespace std ;
int main(){
	long long n=0,m=0;
	cin>>m>>n;
	n=(n+1)%60;
	m=(m)%60;
	long long fib[n+1],res=0;
	fib[0]=0;
	fib[1]=1;
	for(int i=2;i<n;i++){
		fib[i]=fib[i-1]+fib[i-2];
		if(i>=m){
			res=res+fib[i];
		}
	}
	if(m==1 ){
		res+=1;
	}
	if(m==0 && n>1){
		res+=1;
	}
	cout<<res%10<<endl;
	return 0 ;
}
