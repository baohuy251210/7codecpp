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
#define openfile(string1, string2) freopen(string1, "r", stdin); freopen(string2, "w", stdout);
using namespace std;

int const N = 100000;
vi graph[N];
int minCount;
int cnt;
int n, m;
bool isVisited[N];
int trace[N];
int minTrace[N];

void LoadGraph(){
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++){
		int a, b;
		scanf("%d %d", &a, &b);
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
}

void update(){
	if (cnt < minCount){
		minCount = cnt;
		for (int i = 0; i <= n; i++)
			minTrace[i] = trace[i];
	}
}

void dfs(int node){
	if (node == 1){
		update();
		return;
	}
	for (auto next: graph[node]){
		if (!isVisited[next]){
			cnt++;
			trace[next] = node;
			isVisited[next] = true;
			dfs(next);
			cnt--;
			trace[next] = 0;
			isVisited[next] = false;
		}
	}
}

void print(int node){
	printf("%d :", node);
	int y = 1;
	while (minTrace[y] != 0){
		printf("%d <- ", y);
		y = minTrace[y];
	}
	printf("%d   ", node);
	printf("Count: %d\n", minCount);
}

void Solve(){
	for (int i = 1; i <= n; i++){
		memset(isVisited, false, n+1);
		memset(trace, 0, n+1);
		memset(minTrace, 0, n+1);
		cnt = 0;
		minCount = N;
		dfs(i);
		print(i);
	}
}


/**
Using vector, find shortest path to 1 form each node in the graph. Using DFS
*/
int main(){
	openfile("dfs.in", "dfs.out");
	LoadGraph();
	Solve();
	return 0;
}