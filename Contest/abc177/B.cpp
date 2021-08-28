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
    string s, t;
    getline(cin, s);
    getline(cin, t);
    int res = t.length();

    // cout << s.length() << endl;
    // cout << t.length() << endl;
    for (int i = 0; i <= s.length() - t.length(); i++) {
        int unmatch = 0;
        for (int j = 0; j < t.length(); j++)
            if (t[j] != s[i + j]) unmatch++;
        res = min(res, unmatch);
    }
    cout << res << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    openfile("input.txt", "output.txt");
    solve();

    return 0;
}