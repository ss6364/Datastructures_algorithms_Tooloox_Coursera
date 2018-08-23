#include<bits/stdc++.h>
using namespace std ;
int main(){
	long long n=0;
	/*int k=10;
	while(k){
		k--;
		n=rand()%100+2;
		cout<<"n :  "<<n<<endl;
		long long t=0,i=1,count=0;
		t=n;
		while(t){
			t=t-i;
			//cout<<t<<"=t   :  I= "<<i<<endl;
			if(t>=0){
				count++;
			}
			else {
				break ;
			}
			i++;
		}
		long long sum=0;
		cout<<count<<endl;
		for(i=1;i<count;i++){
			cout<<i<<" ";
			sum=sum+i;
		}
		cout<<n-sum<<endl;
		cout<<"total sum except last term is ::  "<<sum <<endl;
		if(k==1){
			break;
		}
	}*/
	cin>>n;
	long long t=0,i=1,count=0;
	t=n;
	while(t){
		t=t-i;
		//cout<<t<<"=t   :  I= "<<i<<endl;
		if(t>=0){
			count++;
		}
		else {
			break ;
		}
		i++;
	}
	long long sum=0;
	cout<<count<<endl;
	for(i=1;i<count;i++){
		cout<<i<<" ";
		sum=sum+i;
	}
	cout<<n-sum<<endl;
	//cout<<"total sum except last term is ::  "<<sum <<endl;
	return 0 ;
}
