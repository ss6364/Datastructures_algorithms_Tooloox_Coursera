#include<bits/stdc++.h>
using namespace std ;
int gcd(int a,int b){

        if(a>b && a!=0 && b!=0){
            return gcd(a%b,b);
        }
        if(a<b && a!=0 && b!=0){
            return gcd(a,b%a);
        }
        else {
        	if(a!=0){
        		return a;
        	}
        	else return b;

        }
 }
 int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0 ;
 }
