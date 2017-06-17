#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
#include <regex>
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
	string s;
	int ok=0;
	cin.ignore();
	getline(cin, s);
	cout << s << endl;
	regex pattern("/1{1}0+1{1}/g");		
	if (regex_match(s, pattern)) ok = 1; 	
	cout << ok << endl;
	return 0;
}
