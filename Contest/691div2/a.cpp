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

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        cin.ignore();
        string r, b;
        getline(cin, r);
        getline(cin, b);
        int redW = 0;
        for (int i = 0; i < n; i++) {
            int nr = int(r[i]) - 48;
            int nb = int(b[i]) - 48;
            if (nr > nb)
                redW++;
            else if (nr < nb)
                redW--;
        }
        if (redW > 0) cout << "RED" << endl;
        if (redW == 0) cout << "EQUAL" << endl;
        if (redW < 0) cout << "BLUE" << endl;
    }

    return 0;
}