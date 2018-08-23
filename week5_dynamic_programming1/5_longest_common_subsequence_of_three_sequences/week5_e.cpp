#include <bits/stdc++.h>
using namespace std ;

int lcs3(vector<int> &a, vector<int> &b, vector<int> &c) {
    int m = a.size();
	int n = b.size();
	int p = c.size();
	int L[m+1][n+1][p+1];

	for(int i=0; i<=m; i++) {
		for(int j=0; j<=n; j++) {
			for(int k=0; k<=p; k++) {
				if(i == 0 || j == 0 || k == 0)
					L[i][j][k] = 0;
				else if(a[i-1] == b[j-1] && a[i-1] == c[k-1])
					L[i][j][k] = L[i-1][j-1][k-1] + 1;
				else
					L[i][j][k] = max(max(max(max(max(L[i-1][j][k], L[i][j-1][k]), L[i][j][k-1]), L[i-1][j-1][k]), L[i-1][j][k-1]), L[i][j-1][k-1]);
			}
		}
	}
    return L[m][n][p];
}

int main() {
  size_t an;
  cin >> an;
  vector<int> a(an);
  for (size_t i = 0; i < an; i++) {
    cin >> a[i];
  }
  size_t bn;
  cin >> bn;
  vector<int> b(bn);
  for (size_t i = 0; i < bn; i++) {
    cin >> b[i];
  }
  size_t cn;
  cin >> cn;
  vector<int> c(cn);
  for (size_t i = 0; i < cn; i++) {
    cin >> c[i];
  }
  cout << lcs3(a, b, c) << endl;
}
