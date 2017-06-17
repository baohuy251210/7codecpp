#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
		int a,b;
		scanf("%d \n%d", &a, &b);
		string represent[9] = {"one", "two", "three", "four", "five", "six", "seven","eight", "nine"};
		for (int i = a; i <= b; i++) {
			if (i <= 9) { printf("%s\n", represent[i-1].c_str()); }
			else {
					if (i % 2 == 0) printf("even\n");
					else printf("odd\n");
			}
		}
		/**for (int i = a; i <= b; i++) {
			if (i>9) {
					if (i % 2 == 0) {
							printf("even \n");
					}
					else printf("odd \n");
			}
			else if (i==1) {
					printf("one \n");
			}
			else if (i==2) {
					printf("two \n");
		    }
			else if (i==3) {
					printf("three \n");
			}
			else if (i==4) {
					printf("four \n");
			}
			else if (i==5) {
					printf("five \n");
			}
			else if (i==6) {
					printf("six \n");
			}
			else if (i==7) {
					printf("seven \n");
			}
			else if (i==8) {
					printf("eight \n");
			}
			else {
					printf("nine \n");
			}
		} */
		return 0;
}