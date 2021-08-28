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
int no;

struct v {
    int a;
    int b;
};
bool compare(v x, v y) {
    if (x.a < y.a) {
        if (x.b == y.b) no = 1;
        return true;
    } else
        return false;
}

bool sortedc(v arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i].a > arr[i + 1].a)
            return false;
    }
    return true;
}

void solve() {
    int t, n;
    v c[100001];
    cin >> t;
    while (t--) {
        cin >> n;
        no = 0;
        int one = 0;
        int zero = 0;
        for (int i = 0; i < n; i++) {
            cin >> c[i].a;
        }
        for (int i = 0; i < n; i++) {
            cin >> c[i].b;
            if (c[i].b == 1) one++;
            if (c[i].b == 0) zero++;
        }
        if ((one == 0 || zero == 0) & !sortedc(c, n))
            no = 1;
        // for (int i = 0; i < n - 1; i++) {
        //     int amin = c[i].a;
        //     int ind = i;
        //     for (int j = i + 1; j < n; j++) {
        //         if (amin > c[j].a) {
        //             amin = c[j].a;
        //             ind = j;
        //         }
        //     }
        //     if (amin < c[i].a & c[ind].b == a[ind]){
        //     }
        // }

        if (no)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    openfile("input.txt", "output.txt");
    solve();

    return 0;
}