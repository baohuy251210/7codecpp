#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
#define FOR(i, a, b) for ( int i = a; i <= b; i++)
#define FORR(i, b, a) for (int i = b; i >= a; i--)
#define get(x) scanf("%d", &x)
#define give(x) printf("%d ", x)
#define inp freopen("input.txt", "r", stdin)
#define out freopen("output.txt", "w", stdout)
#define DEBUG(x, y) cout << x << " " << y << endl;
#define DEB(x) cout << x << endl;
using namespace std;
int const N = 100005;
int main() {
	ios :: sync_with_stdio(false);
	inp;
	out;
				int a[N], b[N];
				int n, min1 = N, min2 = N;
				int ind1, ind2;
				scanf("%d", &n);
				FOR(i, 1, n){ 
						scanf("%d", &a[i]);
						if (min1 > a[i]) {
										min1 = a[i];
										ind1 = i;
						} 
				}
				FOR(i, 1, n) {
						scanf("%d", &b[i]);
						if (min2 > b[i]) {
										min2 = b[i];
										ind2 = i;
						}
				}
				sort(a+1, a+n+1);
				sort(b+1, b+n+1);
				// DEBUG(ind1, ind2);
				if (ind1 != ind2)	printf("%d", a[1]+b[1]);
				else
				{
						if (a[1] + b[2] < a[2] + b[1]) printf("%d", a[1]+b[2]);
						else printf("%d", a[2] + b[1]);
				}
	return 0;
}
