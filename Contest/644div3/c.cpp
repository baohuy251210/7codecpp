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

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a[100];
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        // for (int i = 0; i < n; i++)
        // cout << a[i] << " ";
        // cout << endl;

        int odd = 0;
        int even = 0;

        for (int i = 0; i < n; i++)
        {
            // cout << a[i] % 2 << " ";
            if (a[i] % 2 == 1)
                odd++;
            else
                even++;
        }
        if (odd % 2 == 0 & even % 2 == 0)
        {
            cout << "YES" << endl;
            continue;
        }
        bool found = false;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] % 2 != a[j] % 2 & a[j] - a[i] == 1)
                {
                    found = true;
                    break;
                }
            }
            if (found)
                break;
        }
        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    openfile("input.txt", "output.txt");

    solve();

    return 0;
}