#include <bits/stdc++.h>
#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
			freopen("input.txt", "r", stdin);
			freopen("output.txt", "w", stdout);
	#endif
			int n;
			scanf("%d", &n);
			if (n>9) {
					printf("Greater than 9");
			}
			else if (n==1) {
					printf("one");
			}
			else if (n==2) {
					printf("two");
			}
			else if (n==3) {
					printf("three");
			}
			else if (n==4) {
					printf("four");
			}
			else if (n==5) {
					printf("five");
			}
			else if (n==6) {
					printf("six");
			}
			else if (n==7) {
					printf("seven");
			}
			else if (n==8) {
					printf("eight");
			}
			else {
					printf("nine");
			}
}