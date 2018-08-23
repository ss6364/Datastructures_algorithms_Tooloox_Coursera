#include<bits/stdc++.h>
using namespace std ;
int main(){
	int n;
	cin>>n;
	int i,a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int c=1,max=0;

	for(i=1;i<n;i++){

		if(a[i]==a[i-1]){
			c++;
		}
		else {
			c=1;
		}
		if(c>max){
			max=c;
		}
		//cout<<a[i]<<":a i     ::  max="<<max<<"  c="<<c<<endl;
	}
	if(max > (n/2)){
		cout<<"1"<<endl;

	}
	else {
		cout<<0<<endl;
	}
	return 0 ;
}
