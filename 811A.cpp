#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
#define FOR(i, a, b) for ( int i = a; i < b; i++)
#define FORR(i, b, a) for (int i = b; i >= a; i--)
#define get(x) scanf("%d", &x)
#define give(x) printf("%d ", x)
#define inp freopen("input.txt", "r", stdin)
#define out freopen("output.txt", "w", stdout)
#define DEBUG(x, y) cout << x << " " << y << endl;
#define DEB(x) cout << x << " ";
using namespace std;

int main(){
	ios :: sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
	inp;
	out;
	#endif
	int a, b;
	cin >> a >> b;
	int i=0;
	while ((a >= 0) && (b >= 0)) {
		// DEB(i);
		 // DEBUG(a, b);
		i++;
		(i % 2 == 1) ? (a -= i) : (b -= i);
	}
	 // DEB(i); DEBUG(a, b);
	if (a < 0) cout << "Vladik";
	else cout << "Valera";
	return 0;
}