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

void solve(int n, vector<int> d, vector<int> res) {
    if (n == 0 || n < d[d.size() - 1]) {
        if (n != 0)
            res.push_back(n);
        for (int i = res.size() - 1; i > -1; i--) {
            cout << res[i];
        }
        cout << endl;
        return;
    } else {
        n -= d[d.size() - 1];
        res.push_back(d[d.size() - 1]);
        d.pop_back();
        solve(n, d, res);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    openfile("input.txt", "output.txt");

#define no                    \
    {                         \
        cout << "-1" << endl; \
        continue;             \
    }

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        if (n > 45)
            no;
        if (n < 10) {
            cout << n << endl;
            continue;
        }
        solve(n, {1, 2, 3, 4, 5, 6, 7, 8, 9}, {});
    }

    return 0;
}