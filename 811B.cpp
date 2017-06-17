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

int l, r, x;
int n, m;
int a[10001];
void solve(){
	int count=0;
	FOR(i, l, r) if (a[i] < a[x]) count++;
	if (count + l != x) printf("No\n");
	else printf("Yes\n");
}

int main() {
	ios :: sync_with_stdio(false); 
	#ifndef ONLINE_JUDGE
			inp;
			out;
	#endif
			scanf("%d %d\n", &n, &m);
			FOR(i, 1, n) scanf("%d", &a[i]);
			FOR(i, 1, m) {
				scanf("%d %d %d \n", &l, &r, &x);
				// printf("%d %d %d ", l, r, x);
				solve(); 
			}
	return 0;
}