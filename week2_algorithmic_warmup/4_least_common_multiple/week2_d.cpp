#include<bits/stdc++.h>
using namespace std ;
int gcd(unsigned long long int a,unsigned long long int b){

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
    unsigned long long int a,b;
    cin>>a>>b;
    cout<<(a*b)/gcd(a,b)<<endl;
    return 0 ;
 }
