#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
#define INF 1000000000
#define debug3(v1, v2, v3) cout << v1 << " " << v2 << " " << v3 << "\n";
#define debug2(index, value) cout << index << " " << value << "\n";
#define debug1(value) cout << value << "\n";
#define openfile(string1, string2) \
    freopen(string1, "r", stdin);  \
    freopen(string2, "w", stdout);
using namespace std;

void solve() {
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    openfile("input.txt", "output.txt");

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        string ss = "";
        bool isopen = false;
        bool isclose = false;
        int q = 0;
        // cout << s << endl;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '?')
                q++;
            if (s[i] == ')') {
                isclose = true;
            }
            if (s[i] == '(') {
                isopen = true;
            }
            if (isopen && isclose) {
                isopen = false;
                isclose = false;
            }
            if (!isopen && isclose && q > 0) {
                q--;
                isclose = false;
            }
            debug3(s[i], isopen, isclose);
        }
        if (isopen && !isclose && q > 0) {
            q--;
            isopen = false;
        }
        if (!isopen && !isclose && q >= 0 && q % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}