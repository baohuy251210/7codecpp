//O(MlogN) ---- N : Vertices and M : edges
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
#define INF 100000000
#define debug3(v1, v2, v3) cout << v1 << " " << v2 << " " <<  v3 <<"\n";
#define debug2(index, value) cout << index << " " << value << "\n";
#define debug1(value) cout << value << "\n";
#define openfile(string1, string2) freopen(string1, "r", stdin); freopen(string2, "w", stdout);
using namespace std;

int const N = 100000;
vii graph[N];
vi dist;
bool isVisited[N];
int n, m;

void loadGraph(){
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++){
		int a, b, c; // a -> b only has c 
		scanf("%d %d %d", &a, &b, &c);
		graph[a].push_back(make_pair(b, c));
	}
}
void Dijkstra(int node){
	priority_queue <ii, vector<ii>, greater<ii>> minHeap;
	minHeap.push(ii(node, 0));
	for (int i = 0; i <= n; i++)
		dist.push_back(N);
	dist[node] = 0;	
	while (!minHeap.empty()){
		int u  = minHeap.top().first;
		// int distU = minHeap.top().first;
		minHeap.pop();
		// if (distU != dist[u]) continue;
		for (int i = 0; i < graph[u].size(); i++){
			int v = graph[u][i].first;
			int uv = graph[u][i].second;
			if (dist[v] > dist[u] + uv){
				dist[v] = dist[u] + uv;
				minHeap.push(ii(v, dist[v]));
			}
		}
	}
}

void Print(int node){
	for (int i = 1; i <= n; i++){
		printf("minDist(1 -> %d): %d\n ", i,dist[i]);
	}
}

void Solve(){
	Dijkstra(1);
	Print(1);
}

int main(){
	openfile("dijkstra.in", "dijkstra.out");
	loadGraph();
	Solve();
	return 0;
}