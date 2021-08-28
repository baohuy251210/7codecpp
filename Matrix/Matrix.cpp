#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
#define INF 1000000000
#define debug3(v1, v2, v3) cout << v1 << " " << v2 << " " <<  v3 <<"\n";
#define debug2(index, value) cout << index << " " << value << "\n";
#define debug1(value) cout << value << "\n";
#define openfile(string1, string2) freopen(string1, "r", stdin); freopen(string2, "w", stdout);
using namespace std;

const int size = 2;
const int Modulo = 1e9+7;

struct matrix 
{
	int mat[size][size];
	//constructor
	matrix() 
	{
		memset(mat, 0, sizeof(mat));
	}
	matrix(int diagonal)
	{
		memset(mat, 0, sizeof(mat));
		for (int i = 0; i < size; i++)
			mat[i][i] = diagonal;
	}
	//Multiply operator with matrix "b"
	matrix operator * (matrix b) 
	{
		matrix c = matrix();
		for (int i = 0; i < size; ++i)
			for (int j = 0; j < size; ++j)
				for (int k = 0; k < size; ++k)
					c.mat[i][j] = (c.mat[i][j] + 1LL * mat[i][k] * b.mat[k][j]) % Modulo;
		return c;
	}
};
//Fast power for matrix
matrix modPow(matrix m, int n)
{
	if ( n == 0 )
		return matrix(1);
	matrix half = modPow(m, n / 2);
	matrix out = half * half;
	if ( n % 2 )
		out = out * m;
	return out;
}

int main() 
{
	return 0;
}