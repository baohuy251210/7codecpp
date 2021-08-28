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

struct s {
    int v;
    int x;
};

bool compare(s a, s b) {
    if (a.v < b.v)
        return true;
    else
        return false;
}

void solve() {
    int t, n;
    s a[100];
    s b[100];
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i].v;
            a[i].x = i + 1;
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i].v;
            b[i].x = i + 1;
        }
        for (int i = 0; i < n; i++)
            cout << b[i].x - a[i].x << " ";
        cout << endl;
        sort(a, a + n, compare);
        sort(b, b + n, compare);
        for (int i = 0; i < n; i++)
            cout << a[i].v << " ";
        cout << "\n";
        for (int i = 0; i < n; i++)
            cout << a[i].x << " ";
        cout << "\n";
        for (int i = 0; i < n; i++)
            cout << b[i].v << " ";
        cout << "\n";
        for (int i = 0; i < n; i++)
            cout << b[i].x << " ";
        cout << "\n";
        for (int i = 0; i < n; i++)
            cout << b[i].x - a[i].x << " ";
        cout << "\n";
        cout << "\n\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    openfile("input.txt", "output.txt");

    solve();

    return 0;
}