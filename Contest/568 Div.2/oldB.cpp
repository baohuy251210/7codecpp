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

void Solve(){
	string ori;
	string type;
	getline(cin, ori);
	getline(cin, type);
	if (ori.size() > type.size() || ori[0] != type[0])
	{
		cout << "NO" << endl;
		return;
	}
	int cntoriletter = 0;
	for (int i = 0; i < type.size(); i++){
		//debug3(type[i], ori[cntoriletter], cntoriletter);
		if(type[i] == ori[cntoriletter]){
			if (cntoriletter + 1 < ori.size() && i+1 < type.size() && type[i+1] == ori[cntoriletter+1])
				cntoriletter++;
		}
		else {
			cntoriletter++;
			if (cntoriletter >= ori.size() || type[i] != ori[cntoriletter])
			{
				cout << "NO" << endl;
				return;
			}

		}

	}
	//debug1(cntoriletter);
	if (cntoriletter < ori.size()-1)//if its not at the last letter
		cout<< "NO\n";
	else cout << "YES" << endl;

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