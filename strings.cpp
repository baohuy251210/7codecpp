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
using namespace std;

main() {
		ios :: sync_with_stdio(false);
		inp;
		out;
		string sa, sb;
		cin >> sa;
		cin >> sb;
		cout << sa.size() << " " << sb.size()<< endl;
		cout << sa+sb << endl;
		swap(sa[0], sb[0]);
		cout << sa << " " << sb;

}