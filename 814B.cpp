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
int const N = 1001;
int main() {

				
	ios :: sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
				inp;
				out;
	#endif
				int fa[N], a[N], b[N], res[N], fb[N], ar[N], br[N];
				int n;
				int al, bl;
				int ia=0, ib=0;
				int diffa=0, diffb=0;
				FOR(i, 1, N) fa[i] = 0;
				FOR(i, 1, N) fb[i] = 0;				
				al=0;bl=0;
				bool ok=false;
				scanf("%d\n", &n);
				FOR(i, 1, n) scanf("%d ", &a[i]);
				FOR(i, 1, n) scanf("%d ", &b[i]);
				FOR(i, 1, n) fa[a[i]] = 1;
				FOR(i, 1, n) fb[b[i]] = 1;
				FOR(i, 1, n) 
						if (fa[i]==0) al = i;
				FOR(i, 1, n) 
						if (fb[i]==0) bl = i;
				/*FOR(i, 1, n) 
						if (a[i] == al) 
				FOR(i, 1, n){
						int temp = a[i];
						a[i] = al;
						FOR(j, 1, n) if (a[i] != b[i]) diffb++;
						if (diffb == 1) { ok = true; break;}
						a[i] = temp;
				} 		
				if (ok==true) FOR(i, 1, n) printf("%d ", a[i]);
				FOR(i, 1, n) {
						int temp = b[i];
						b[i] = bl;
						FOR(j, 1, n) if (b[i] != a[i]) diffa++;
						if (diffb == 1) {ok = true; break;}
				}*/
				FOR(i, 1, n) {
						if (a[i] == b[i]) res[i] = a[i]; 
							else { 
								res[i] = 0;
								if (ia == 0) ia = i;
								else if (ib == 0) ib = i; 
							}
				}
				// FOR(i, 1, n) give(res[i]);
				// printf("\n");
				// give(ia); give(ib);
				// printf("\n");
				// give(al);give(bl);
				// printf("\n");
				res[ia] = al;
				res[ib] = bl;
				FOR(i, 1, n) {
							if (res[i] != a[i]) diffa++;
							if (res[i] != b[i]) diffb++;
				}
				// give(diffa); give(diffb);
				// printf("\n");
				if ((diffa == 1) && (diffb == 1)){
						FOR(i, 1, n) give(res[i]);
						ok=true;
				}
				if (ok==false) {
					diffa=0;diffb=0;
					res[ia] = bl;
					res[ib] = al;
					// FOR(i, 1, n) give(res[i]);
				    // printf("\n");
					FOR(i, 1, n) {
								if (res[i] != a[i]) diffa++;
								if (res[i] != b[i]) diffb++;
					}
					if ((diffa == 1) && (diffb == 1)){
					FOR(i, 1, n) give(res[i]);
					ok=true;
					}
				}

				
			return 0;
}
