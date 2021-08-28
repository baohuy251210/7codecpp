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

int main()
{
	openfile("1.inp", "1.out");
	int n;
	cin >> n;
	int res = 0;
	res+=(n-1)*2 + 1;
	for (int i = n-1; i >= 1; i--){
		//mid = (n-1)*2 + 1;
		res+=((i-1)*2+1)*2;
	}
	cout << res;
	return 0;
}