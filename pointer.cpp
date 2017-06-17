#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <cstdio>
#define FOR(i, a, b) for ( int i = a; i <= b; i++)
#define inp freopen("input.txt", "r", stdin)
#define out freopen("output.txt", "w", stdout)
#define max(a,b) ( (a > b) ? a : b )
using namespace std;
int a, b;
void update (int *a, int *b) {
	int tempa=*a;
	*a = *a + *b;
	*b = abs (tempa - *b);
}
int main() {

	#ifndef ONLINE_JUDGE
		inp;
		out;
	#endif
		int *pa = &a, *pb = &b;
		scanf("%d %d", &a, &b);;
		update(pa, pb);
		printf("%d \n%d", a, b);

}