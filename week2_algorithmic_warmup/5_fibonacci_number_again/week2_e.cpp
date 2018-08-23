#include <bits/stdc++.h>
using namespace std;

bool is_equal(const vector<long long>& v, long k) {
    auto size{v.size()};
    if(k == 0) return false;
    // compare first and second half of array
    for(long i = 0, j = k; i < k && j < v.size(); ++i, ++j) {
        if(v[i] != v[j]) return false;
    }

    return true;
}

long long get_pisano_period(long long m) {

    vector<long long> v;

    long long a = 0; long k = 0; long long b = 1;
    // loop until repetition is found
    while(!is_equal(v, k)) {
        v.push_back(a % m);
        long long tmp = a + b;
        //a = b; // this grows too large
        a = b%m; // better
        b = tmp;
        k = v.size() / 2;  // the mid point
    }
    return k;
}

int main() {
	long long int n;
	int m,i=0,d=0;
	cin>>n>>m;
	auto testval{get_pisano_period(m)};
    d=testval;

    //cout<<d<<"\n";
    n=n%d;
    int a[100000],c=0;
    a[0]=0;
    a[1]=1;
   for(i=2;i<=n;i++){
    	c=a[i-1]+a[i-2];
    	a[i]=c%m;
    }
    cout<<a[n]<<"\n";
	return 0;
}
