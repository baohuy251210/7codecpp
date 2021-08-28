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
    int t;
    int a[41];
    int b[41];
    int c[41];
    int d01;
    int d10;
    int n;
    cin >> t;
    while (t--) {
        cin >> n;
        d01 = 0;
        d10 = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = a[i] % 2;
            c[i] = i % 2;
        }
        for (int i = 0; i < n; i++) {
            if (b[i] == 0 & c[i] == 1) d01++;
            if (b[i] == 1 & c[i] == 0) d10++;
        }

        if (d01 != d10)
            cout << -1 << endl;
        else
            cout << d01 << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    openfile("input.txt", "output.txt");

    solve();

    return 0;
}