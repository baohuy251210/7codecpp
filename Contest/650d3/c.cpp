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
    int t, n, k;
    string s;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        cin >> s;
        string s1 = "";
        for (int i = 0; i < n; i++) {
            s1 += s[i];
        }
        int cur = -1;
        for (int i = 0; i < n; i++) {
            if (cur != -1 & i - cur > k) {
                cur = -1;
            }
            if (s[i] == '1') {
                cur = i;
            }
            if (cur != -1) {
                s1[i] = '1';
            }
        }
        for (int i = n - 1; i >= 0; i--) {
            if (cur != -1 & abs(i - cur) > k) {
                cur = -1;
            }
            if (s[i] == '1') {
                cur = i;
            }
            if (cur != -1) {
                s1[i] = '1';
            }
        }
        // cout << s1 << endl;
        int res = 0;
        for (int i = 0; i < n;) {
            if (s1[i] == '0') {
                res++;
                i += k + 1;
            } else
                i++;
        }
        cout << res << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    openfile("input.txt", "output.txt");

    solve();

    return 0;
}