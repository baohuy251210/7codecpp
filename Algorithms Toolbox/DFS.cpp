#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
#define INF 1000000000
#define debug3(v1, v2, v3) cout << v1 << " " << v2 << " " <<  v3 <<"\n";
#define debug2(index, value) cout << index << " " << value << "\n";
#define debug1(value) cout << value << "\n";
#define readfile(string) freopen(string, "r", stdin);
#define writefile(string) freopen(string, "w", stdout);
using namespace std;
int const N = 10;
int graph[N][N];
int n, m;
bool isVisited[N];
int trace[N];
int minTrace[N];
int cnt;
int minCount;
void LoadGraph(){
	for (int i = 0; i <= n; i++)
		for (int j = 0; j <= n; j++)
			graph[i][j] = 0;
	for (int i = 0; i < m; i++){
		int a, b;
		scanf("%d %d", &a, &b);
		graph[a][b] = 1;
		graph[b][a] = 1;
	}
	
}

void update(){
	if (cnt >= minCount || cnt == 0)
		return;
	// debug1(cnt);
	minCount = cnt;
	for (int i = 0; i <= n; i++){
		minTrace[i] = trace[i];
	}
}

void dfs(int node){
	
	if (node == 1){
		update();
		return;
	}
	for (int i = 1; i <= n; i++)
		if (graph[node][i] == 1 && !isVisited[i]){
			trace[i] = node;
			cnt++;
			isVisited[node] = true;
			dfs(i);
			cnt--;
			trace[i] = 0;
			isVisited[node] = false;
		}
}

void print(int node){
	printf("%d: ", node);
	int y = 1;
	while (minTrace[y] != 0){
		printf("%d <- ", y);
		y = minTrace[y];
	}
	printf("%d   ", node);
	printf("cnt: %d", minCount);
	
	printf("\n");
}
void Solve(){
	for (int i = 1; i <= n; i++){
		memset(isVisited, false, sizeof(isVisited));
		memset(trace, 0, sizeof(trace));
		memset(minTrace, 0, sizeof(minTrace));
		cnt = 0;
		minCount = 10000;
		dfs(i);
		print(i);
	}
}

/*
Find and print shortest path from each node to 1 using DFS
2d array
*/
int main(){
	
	readfile("dfs.in");
	writefile("dfs.out");

	scanf("%d %d", &n, &m);
	// debug1(n);
	LoadGraph();
	Solve();
	return 0;
}