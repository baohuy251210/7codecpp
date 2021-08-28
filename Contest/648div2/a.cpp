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
    int n, m;
    int a[51][51];
    int row[51];
    int col[51];
    cin >> t;
    while (t--) {
        memset(row, 0, sizeof(row));
        memset(col, 0, sizeof(col));
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
                if (a[i][j] == 1) {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }

        //ashish goes first
        bool v = true;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                if (row[i] == col[j] & row[i] == 0) {
                    row[i] = 1;
                    col[j] = 1;
                    v = !v;
                }
        }
        if (v)
            cout << "Vivek" << endl;
        else
            cout << "Ashish" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    openfile("input.txt", "output.txt");

    solve();

    return 0;
}