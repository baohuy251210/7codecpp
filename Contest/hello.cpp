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

int solve(string s)
{
    int last_1 = -1;
    int dist = 0;
    bool cont = true;
    int cur = 0;
    if (s[0] == '1')
        last_1 = 0;

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == '1' && last_1 != -1 && s[i - 1] == '0')
        {
            cont = false;
            // debug3(i, last_1,dist);
            dist = dist + (i - last_1 - 1);
            last_1 = i;
        }
        else if (s[i] == '1')
        {
            last_1 = i;
        }
        else if (s[i] == '0')
            continue;
    }
    if (dist == 9999)
        dist = 0;
    return dist;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }

    return 0;
}