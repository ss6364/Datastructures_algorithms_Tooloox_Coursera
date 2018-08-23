#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n,p=0;
    cin>>n>>p;
    int a[n],b[n],c[p],i;
    for(i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    for(i=0;i<p;i++){
        cin>>c[i];
    }
    for(i=0;i<p;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(c[i]<= b[j] && c[i]>=a[j]){
                    count++;
                }
            }
            cout<<count<<endl;
    }
    return 0;
}
