#include <bits/stdc++.h>
using namespace std;

// A comparison function which is used by sort() in printLargest()
int myCompare(string X, string Y)
{
    string XY = X.append(Y);

    string YX = Y.append(X);

    return XY.compare(YX) > 0 ? 1: 0;
}

void printLargest(vector<string> arr)
{
    sort(arr.begin(), arr.end(), myCompare);

    for (int i=0; i < arr.size() ; i++ )
        cout << arr[i];
}

int main() {
	int n=0,i;
	cin>>n;
	string a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}

	    vector<string> arr(a,a+n);

    printLargest(arr);
	return 0;
}
