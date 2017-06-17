#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
#define FOR(i, a, b) for ( int i = a; i < b; i++)
#define FORR(i, b, a) for (int i = b; i >= a; i--)
#define inp freopen("input.txt", "r", stdin)
#define out freopen("output.txt", "w", stdout)
using namespace std;

int main() {

		inp;
		out;
		int n;
		scanf("%d", &n);
		int a[n-1];
		FOR(i, 0, n) scanf("%d", &a[i]);
		FORR(i, n-1, 0) printf("%d ", a[i]);
}
