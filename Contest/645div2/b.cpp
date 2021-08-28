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
    int t, n;
    cin >> t;
    int a[100001];
    int c[200001];
    while (t--) {
        cin >> n;
        memset(c, 0, sizeof(c));
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            c[a[i]]++;
        }
        sort(a, a + n);
        // for (int i = 0; i < n; i++) {
        // a[i] += a[i - 1];
        // cout << a[i] << " ";
        // }
        int k = n;
        int i = n - 1;
        while (i >= 0) {
            if (a[i] <= i + 1) {
                break;
            } else {
                i--;
                k--;
            }
        }
        cout << i + 2 << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    openfile("input.txt", "output.txt");

    solve();

    return 0;
}