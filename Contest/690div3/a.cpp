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

    // solve();
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[300];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n / 2; i++) {
            cout << a[i] << " " << a[n - i - 1] << " ";
        }
        if (n % 2 != 0) cout << a[n / 2];
        cout << endl;
    }

    return 0;
}