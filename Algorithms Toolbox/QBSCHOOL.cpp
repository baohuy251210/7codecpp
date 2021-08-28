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

ll n, m;
int const N = 100000;
vii graph[N];
vi dist;
bool isVisited[N];
int n, m;


void loadGraph()
{
	cin >> n >> m;
	for (int i = 0; i < m; i++){
		int k, a, b, c; 
		scanf("%d %d %d %d", &k, &a, &b, &c);
		graph[a].push_back(make_pair(b, c));
		if (k == 2)	
			graph[a].push_back(make_pair(c,b));
	}
}

void dijkstra(int node)
{
	priority_queue
}

void solve()
{
	dijkstra(1);
}


int main()
{
	openfile("test.inp", "test.out");
	loadGraph();
	solve();

	return 0;
}