#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
#include <functional>
#define FOR(i, a, b) for ( int i = a; i <= b; i++)
#define FORR(i, b, a) for (int i = b; i >= a; i--)
#define get(x) scanf("%d", &x)
#define give(x) printf("%d ", x)
#define inp freopen("input.txt", "r", stdin)
#define out freopen("output.txt", "w", stdout)
#define DEBUG(x, y) cout << x << " " << y << endl;
#define DEB(x) cout << x << endl;
using namespace std;

int main() {

				
	ios :: sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
				inp;
				out;
	#endif
			int n,k;
			int a[100], b[100];
			int res[100];
			scanf("%d%d\n", &n, &k);
			FOR(i, 1, n) scanf("%d ", &a[i]);
			FOR(i, 1, k) scanf("%d ", &b[i]);
			sort(b+1, b+k+1, greater<int>());
			int cnt=1;
			FOR(i, 1, n) {
				res[i] = a[i];
				if (res[i] == 0) {
					res[i] = b[cnt];
					cnt++;
				}
			}		
			// FOR(i, 1, n) printf("%d ", res[i]);

			if (!is_sorted(res+1, res+n+1)) printf("Yes");
			else printf("No");
			
	return 0;
}
