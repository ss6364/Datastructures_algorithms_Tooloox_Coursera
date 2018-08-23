#include <bits/stdc++.h>
using namespace std ;
int main(){
	long long int n,i;
	cin>>n;
	long long int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	long long int max=0,index=0,max2=0;
	for(i=0;i<n;i++){
		if(max<a[i]){
			max=a[i];
			index=i;
		}
	}
	for(i=0;i<n;i++){
		if(max2<a[i] && i!=index){
			max2=a[i];
		}
	}
	cout<<max*max2<<endl;
	return 0;

}
