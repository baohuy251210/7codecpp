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

    int t, n, cnt = 1;
    cin >> t;
    while (t--) {
        cin >> n;
        string s;
        cin.ignore();
        getline(cin, s);
        // if (cnt == 59) {
        //     cout << s << endl;
        // }
        // cnt++;
        int f, l;
        f = s.find("2");
        l = s.rfind("020");
        if (f == 0 && l == n - 3) {
            cout << "YES" << endl;
            continue;
        }
        f = s.find("20");
        l = s.rfind("20");
        if (f == 0 && l == n - 2) {
            cout << "YES" << endl;
            continue;
        }
        f = s.find("202");
        l = s.rfind("0");
        if (f == 0 && l == n - 1) {
            cout << "YES" << endl;
            continue;
        }
        f = s.find("2020");
        l = s.rfind("2020");
        if (f == 0 || l == n - 4) {
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }

    return 0;
}