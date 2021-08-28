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

int n, m;
vi graph[N];
int trace[N];
bool isVisited[N];
queue<int> q;

void loadGraph(){
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++){
		int a,b;
		scanf("%d %d", &a, &b);
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
}

void BFS(int node){
	memset(isVisited, false, n+1);
	memset(trace, 0, n+1);
	q.push(node);
	isVisited[node] = true;
	trace[node] = -1;
	while (!q.empty()){
		int curNode = q.front();q.pop();
		// printf("curNode: %d :", curNode);
		
		for (auto next: graph[curNode]){
			// printf(" %d", next);
			if (!isVisited[next]){
				trace[next] = curNode;
				isVisited[next] = true;
				q.push(next);
			}
		}
		// printf("\n");
	}
}

void print(int node){
	printf("%d :", node);
	int y = node;
	while (trace[y] != -1){
		printf("%d <- ", y);
		y = trace[y];
	}
	printf("%d\n", y);
}

void Solve(){
	/* find shortest path from 1 to others
	*/
	BFS(1);
	for (int i = 1; i <= n; i++){
		print(i);
		// printf("%d ", trace[i]);
	}
}

int main(){
	openfile("dfs.in", "dfs.out");
	loadGraph();
	Solve();
	return 0;
}