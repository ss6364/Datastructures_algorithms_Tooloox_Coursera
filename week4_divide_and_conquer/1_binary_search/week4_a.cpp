#include <bits/stdc++.h>
using namespace std;


int binarySearch(int arr[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid-1, x);

       return binarySearch(arr, mid+1, r, x);
   }
    return -1;
}

int main(void)
{
   int n,m,i,k;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}

		cin>>m;
	for(i=0;i<m;i++){
			cin>>k;
			        int result = binarySearch(a, 0, n-1, k);
					(result == -1)? printf("-1\n"): printf("%d\n",result);
	}
   return 0;
}
