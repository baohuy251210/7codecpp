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
    int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        //sticks: a-2 b-1
        int r = max(a, b);
        int l = min(a, b);
        ll res = 0;
        if (r / 2 <= l)
            res = r / 2;
        else {
            res = l;
        }

        r = r - res * 2;
        l = l - res;
        if (r >= 1 & l >= 2)
            res++;
        // debug2(l, r);
        r = max(a, b);
        l = min(a, b);
        ll res2 = 0;
        if (l > 3) {
            res2 = (l / 3) * 2;
            if (l % 3 > 0) {
                r -= l / 3 * 3;
                l %= 3;
                if (l == 1 & r >= 2)
                    res2++;
                else if (l == 2 & r >= 4)
                    res2 += 2;
            }
        }
        // debug2(l, r);
        // cout << res << " " << res2 << endl;
        cout << max(res, res2) << endl;
        // cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    openfile("input.txt", "output.txt");

    solve();

    return 0;
}