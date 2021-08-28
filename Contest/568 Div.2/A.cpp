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
struct id{
	char w;
	int t;

};
void Solve(){
	string ori;
	string type;
	cin >> ori >> type;
	vector<id> v;
	v.clear();
	id current;
	current.w = ori[0];
	current.t = 1;
	for (int i = 1; i < ori.size(); i++){
		if (current.w == ori[i])
			current.t++;
		else {
			v.push_back(current);
			current.w = ori[i];
			current.t = 1;
		}
	}
	v.push_back(current);
	int cnt = 0;
	for (int i = 0; i < type.size(); i++){
		if (type[i] == v[cnt].w){
			v[cnt].t--;
		}
		else {
			cnt++;
			if (cnt == v.size()){
				cout << "NO\n";
				return;	
			}
			if (type[i] == v[cnt].w)
				v[cnt].t--;
		}
	}

	for (int i = 0; i < v.size(); i++)
		if (v[i].t > 0){
			cout << "NO\n";
			return;
		}
	cout << "YES\n";


}

int main()
{
	openfile("test.inp","test.out");
	int n;
	cin >> n;
	string str;
	getline(cin, str);
	for (int query = 0; query < n; query++){
		Solve();
	}
	return 0;
}