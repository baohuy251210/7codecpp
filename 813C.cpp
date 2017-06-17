#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
#define FOR(i, a, b) for ( int i = a; i <= b; i++)
#define FORR(i, b, a) for (int i = b; i >= a; i--)
#define get(x) scanf("%d", &x)
#define give(x) printf("%d ", x)
#define inp freopen("input.txt", "r", stdin)
#define out freopen("output.txt", "w", stdout)
#define DEBUG(x, y) cout << x << " " << y << endl;
#define DEB(x) cout << x << endl;
using namespace std;


const int N = (int) 2e5 + 10;
vector <int> a[N];
int d[2][N]; //one-based
int n, m, x;

void bfs(int s, int d[]){
    queue<int> qu;
    qu.push(s);
    FOR(i, 1, n) d[i] = -1;
    d[s] = 0;
    while (qu.size()){
        int u = qu.front();
        qu.pop();
        for (int i = 0; i < (int) a[u].size(); ++i){
        		int v = a[u][i];
        		if (d[v] == -1) {
        					d[v] = d[u] + 1;
        					qu.push(v);
        		}
        }
    }

}


int main(){

	ios :: sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
				inp;
				out;
	#endif
    scanf("%d%d", &n, &x);
    m = n-1;
    FOR(i, 1, m){
    	int u, v;
        scanf("%d %d", &u, &v);
        a[v].push_back(u);
        a[u].push_back(v);              // remove it in one-directional graph
    }
    bfs(1, d[0]);
    bfs(x, d[1]);
    int root = 0;
    FOR(i, 1, n){
    		if (d[1][i] < d[0][i]) root = max(root, 2 * d[0][i]);
    }
    if (root == 0) printf("%d", root+2);
    else printf("%d", root);
}