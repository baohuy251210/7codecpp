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

struct num
{
	int id;
	int val;
	int ival;
};

bool maxsorter(num l, num r){
	return max(l.val, l.ival) > max(r.val, r.ival);
}

int positive(int l, int r){
	if (l>0) return l;
	else return r;
}

int negative(int l, int r){
	if (l<0) return l;
	else return r;
}

int main()
{

	openfile("1.inp", "1.out");
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	num a[n+5];
	bool allZero = true;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i].val;
		a[i].id = i;
		a[i].ival = 0-a[i].val-1;
		if (a[i].val != 0 && a[i].val != -1)
			allZero = false;

	}
	if (n % 2 == 0){
		for (int i = 0; i < n; i++)
			if (a[i].val > 0) cout << 0-a[i].val-1 << " ";
		else if (a[i].val == 0) cout << -1 << " ";
		else cout << a[i].val << " ";
	}
	else {//odd number of elements // find smallest positive that is larger than 0
		//find smallest positive to stay at the end
		if (allZero){
			for (int i = 0; i < n; i++)
				cout << "0 ";
			exit(0);
		}
		int minnum = INF;
		int minpos;
		for (int i = 0; i  < n; i++)
			if (minnum > negative(a[i].val, a[i].ival))
			{
				minnum = negative(a[i].val, a[i].ival);
				minpos = i;
			}
		for (int i = 0; i < n; i++)
		{
			if (i != minpos)
				cout << negative(a[i].val, a[i].ival) << " ";
			else cout << positive(a[i].val, a[i].ival) << " ";
		}

	}
	return 0;
}