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
				int n, q;
				string s;
				cin >> q;
				cin.ignore();
				while (q != 0) {
							getline(cin, s);
							n = s.length();
							int i = 0;
							while (i != s.length()){
									if (s[i] == '1'){
												s.insert(i, "1");
												i+=2;
									}
									else i++;
							}
							regex pattern("1{1}0+1{1}");
							string s1 = regex_replace(s, pattern, "A");
							int count = 0;
							FOR(i, 0, s1.length()){
									if (s1[i] == 'A') count++;
							}
							cout << count << endl;
							q--;
				}	
	return 0;
}
