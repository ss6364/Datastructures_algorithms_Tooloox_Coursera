#include <bits/stdc++.h>
using namespace std;

int main() {
		int n,i,count=0;
		cin>>n;
		if(n>=10){
			count=n/10+count;
			n=n%10;
		}
		if(n>=5){
			count=n/5+count;
			n=n%5;
		}
		if(n>0){
			count=n/1+count;
			n=n%1;
		}
		cout<<count<<endl;
		return 0;
}
