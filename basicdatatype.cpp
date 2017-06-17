#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
		int d;
		long ld;
		char c;
		float f;
		double lf;
		scanf("%d %ld %c %f %lf", &d, &ld, &c, &f, &lf);
		printf("%d \n%ld \n%c \n%f \n%lf", d, ld, c, f, lf);
}