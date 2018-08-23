#include<bits/stdc++.h>
using namespace std ;
int main(){
     int n,i ;
    cin>>n;
     int a[n+1];
    a[0]=0;
    a[1]=1;
    for(i=2;i<=n;i++){
    	int d=a[i-1]+a[i-2];
        a[i]=d%10;

    }
    cout<<a[n]
    ;
    return 0;
}
