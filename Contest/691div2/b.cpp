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

int a[20][20];
int b[20][20];
void solve(int n, int r, int c, int rr, int cc) {
    r += rr;
    c += cc;
    a[r][c] = n;
    if (a[r][c] == 0) {
        b[r][c] = 1;
        return;
    }
    if (rr == 0) {
        solve(n - 1, r, c, 1, 0);
        solve(n - 1, r, c, -1, 0);
    } else if (cc == 0) {
        solve(n - 1, r, c, 0, 1);
        solve(n - 1, r, c, 0, -1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    openfile("input.txt", "output.txt");

    int t, n;
    int res = 0;
    cin >> n;
    memset(a, 0, sizeof a);
    memset(b, 0, sizeof b);
    a[10][10] = n;
    solve(n - 1, 10, 10, 0, 1);
    solve(n - 1, 10, 10, 0, -1);
    solve(n - 1, 10, 10, 1, 0);
    solve(n - 1, 10, 10, -1, 0);
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            cout << b[i][j] << " ";
            if (b[i][j] == 1) {
                res++;
            }
        }
        cout << endl;
    }
    cout << res << endl;

    return 0;
}