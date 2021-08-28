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
        string s;
        getline(cin, s);
        int close = 0, remain = 0;
        bool isClose = 1;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] != ')') {
                remain = s.size() - close;
                break;
            } else {
                close++;
            }
        }
        if (close > remain)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}