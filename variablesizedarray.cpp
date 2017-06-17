#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
#define FOR(i, a, b) for ( int i = a; i < b; i++)
#define FORR(i, b, a) for (int i = b; i >= a; i--)
#define get(x) scanf("%d", &x)
#define give(x) printf("%d ", x)
#define inp freopen("input.txt", "r", stdin)
#define out freopen("output.txt", "w", stdout)
using namespace std;

int main(){
		int n, q, x, y;
		inp;
		out;
		scanf("%d %d", &n, &q);
		vector< vector<int>> a(n);
		FOR(i, 0, n) {
					int len;
					get(len);
					FOR(j, 0, len) {
						int m;
						get(m);
						a[i].push_back(m);
					}
		}
		FOR(i, 0, q){
					scanf("%d %d\n", &x, &y);
					printf("%d\n", a[x][y]);
		}
}