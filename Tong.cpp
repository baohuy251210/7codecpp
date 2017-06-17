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

int main() {

				
	ios :: sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
				inp;
				out;
	#endif
				int n, gt;
				gt = 1;
				cin >> n;
				FOR(i, 1, n)
						gt *= i;
				cout << gt << endl;
	return 0;
}
