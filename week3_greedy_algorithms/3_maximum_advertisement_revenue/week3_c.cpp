#include<bits/stdc++.h>
using namespace std ;
int main(){
	int n,i;
	cin>>n;
	long long a[n+1],c[n+1];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		cin>>c[i];
	}
	long long sum=0;
	sort(a,a+n);
	sort(c,c+n);
	for(i=0;i<n;i++){
		sum=sum+(a[i]*c[i]);
	}
	cout<<sum<<endl;
	return 0;
}
