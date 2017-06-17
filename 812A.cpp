#include <bits/stdc++.h>
#include <iostream>
#define FOR(i, a, b) for ( int i = a; i <= b; i++)
#define FORR(i, b, a) for (int i = b; i >= a; i--)
#define get(x) scanf("%d", &x)
#define give(x) printf("%d ", x)
#define inp freopen("input.txt", "r", stdin)
#define out freopen("output.txt", "w", stdout)
#define DEBUG(x, y) cout << x << " " << y << endl;
#define DEB(x) cout << x << endl;
#define ANSHIT {printf("YES"); return 0;}
using namespace std;
int main() {

				
	// ios :: sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
				inp;
				out;
	#endif
				bool ok = false;
				int l[5], r[5], s[5], p[5];
				int n = 4;
				FOR(i, 1, n) { 	
						//DEB(i);// in ra i de kiem tra vong lap nay co chay k
						scanf("%d%d%d%d", &l[i], &s[i], &r[i], &p[i]);
						//DEB(n);
				}
						//DEB(n);
						//DEB(n);// in ra n de kiem tra n co bi thay doi khong
		        FOR(i, 1, n) {
						if ((l[i] + r[i] + s[i] > 0) && (p[i] == 1 )) ANSHIT;
						if ((r[i] == 1) && (p[(i) % 4] == 1)) ANSHIT;
						if ((s[i] == 1) && (p[(i+1) % 4] == 1)) ANSHIT;
						if ((l[i] == 1) && (p[(i+2) % 4] == 1)) ANSHIT;
	}
	printf("NO");
	return 0;
}
/*
						if ((l[i] + r[i] + s[i] > 0) && (p[i] == 1 )) ok = true;
						if ((r[i] == 1) && (p[(i+1) % 4] == 1)) ok = true;
						if ((s[i] == 1) && (p[(i+2) % 4] == 1)) ok = true;
						if ((l[i] == 1) && (p[(i+3) % 4] == 1)) ok = true;*/