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

int isPrime(int n, int k) {
    // Corner cases
    if (n <= 1)
        return 1;
    if (k <= 1)
        return n;
    int res = n;
    // This is checked so that we can skip
    // middle five numbers in below loop
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) {
            if (n / i <= k)
                return i;
            else {
                res = min(res, n / i);
            }
        }
    if (res == n)
        return res;
    else {
        debug1("what");
        return res;
    }
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        if (k >= n) {
            cout << 1 << endl;
            continue;
        }
        cout << isPrime(n, k) << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    openfile("input.txt", "output.txt");

    solve();

    return 0;
}