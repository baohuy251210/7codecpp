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
	openfile("test.inp","test.out");
	int arr[3];
	int d;
	scanf("%d %d %d %d", &arr[0], &arr[1], &arr[2], &d);
	sort(arr, arr+3);
	int sec = 0;
	if (abs(arr[0] - arr[1]) < d)
		sec += d -abs(arr[0] - arr[1]);
	if (abs(arr[1] - arr[2]) < d)
		sec += d - abs(arr[1] - arr[2]);
	printf("%d",sec);
	return 0;
}