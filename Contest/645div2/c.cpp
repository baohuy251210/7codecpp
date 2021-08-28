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

/* mat:  Pointer to the starting of mXn matrix 
   i, j: Current position of the robot (For the first call use 0,0) 
   m, n: Dimentions of given the matrix 
   pi:   Next index to be filed in path array 
   *path[0..pi-1]: The path traversed by robot till now (Array to hold the 
                  path need to have space for at least m+n elements) */
void printAllPathsUtil(int *mat, int i, int j, int m, int n, int *path, int pi) {
    // Reached the bottom of the matrix so we are left with
    // only option to move right
    if (i == m - 1) {
        for (int k = j; k < n; k++)
            path[pi + k - j] = *((mat + i * n) + k);
        for (int l = 0; l < pi + n - j; l++)
            cout << path[l] << " ";
        cout << endl;
        return;
    }

    // Reached the right corner of the matrix we are left with
    // only the downward movement.
    if (j == n - 1) {
        for (int k = i; k < m; k++)
            path[pi + k - i] = *((mat + k * n) + j);
        for (int l = 0; l < pi + m - i; l++)
            cout << path[l] << " ";
        cout << endl;
        return;
    }

    // Add the current cell to the path being generated
    path[pi] = *((mat + i * n) + j);

    // Print all the paths that are possible after moving down
    printAllPathsUtil(mat, i + 1, j, m, n, path, pi + 1);

    // Print all the paths that are possible after moving right
    printAllPathsUtil(mat, i, j + 1, m, n, path, pi + 1);

    // Print all the paths that are possible after moving diagonal
    // printAllPathsUtil(mat, i+1, j+1, m, n, path, pi + 1);
}

// The main function that prints all paths from top left to bottom right
// in a matrix 'mat' of size mXn
void printAllPaths(int *mat, int m, int n) {
    int *path = new int[m + n];
    printAllPathsUtil(mat, 0, 0, m, n, path, 0);
}

int numberOfPaths(int m, int n) {
    // We have to calculate m+n-2 C n-1 here
    // which will be (m+n-2)! / (n-1)! (m-1)!
    int path = 1;
    for (int i = n; i < (m + n - 1); i++) {
        path *= i;
        path /= (i - n + 1);
    }
    return path;
}

void solve() {
    int t;
    int x1, x2, y1, y2;
    cin >> t;
    while (t--) {
        cin >> x1 >> y1 >> x2 >> y2;

        int m = x2 - x1 + 1;
        int n = y2 - y1 + 1;
        cout << numberOfPaths(m, n) << endl;
        //make mat:
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    openfile("input.txt", "output.txt");

    solve();

    return 0;
}