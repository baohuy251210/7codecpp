#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#define inp freopen("input.txt", "r", stdin)
#define oup freopen("output.txt", "w", stdout) 
#define FOR(i,a,b) for (int i = a; i < b; i++)
#define max(a,b) ( (a) > (b) ? (a) : (b) )
using namespace std;

int max_of_four(int a, int b, int c, int d) {
	int res = a;
	res = max(res, b);
	res = max(res, c);
	res = max(res, d);
	return res;
}

int main() {

	#ifndef ONLINE_JUDGE
			inp;
			oup;
	#endif
			int a, b, c, d;
			scanf("%d %d %d %d", &a, &b, &c, &d);
			printf("%d", max_of_four(a, b, c, d));
}