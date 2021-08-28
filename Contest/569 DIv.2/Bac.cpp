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

int main(){
    openfile("1.inp", "1.out");
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    int numbers[n];
    int maximum=1000000,index;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        if(temp>=0){
            temp=-1*temp-1;
        }
        numbers[i]=temp;
        maximum=min(maximum,temp);//find smallest negative -> largest positive
        if(maximum==temp){
            index=i;
        }
        
    }
    if(n%2==1){
        numbers[index]=-1*numbers[index]-1;
    }
    for(int i=0;i<n;i++){
        cout<<numbers[i]<<" ";
    }
    return 0;
}