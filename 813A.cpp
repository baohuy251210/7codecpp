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
				bool ok = false;
				int n, m, x;
				int sol, l, r;
				scanf("%d\n", &n);
				sol = 0;
				FOR(i, 1, n) {
					get(x);
					sol += x;
				}
				scanf("%d\n", &m);
				FOR(i, 1, m){
						scanf("%d %d\n", &l, &r);
						if ((sol <= r) && (sol >= l)) {
							printf("%d", sol);
							ok = true;
							break;
						}
						else
						if (sol <= l) {
							printf("%d", l);
							ok = true;
							break;
						}
				}
				if (ok == false) printf("-1");
	return 0;
}
