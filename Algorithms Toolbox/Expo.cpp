#include <bits/stdc++.h> 
#define INF 1000000000
#define debug3(v1, v2, v3) cout << v1 << " " << v2 << " " <<  v3 <<"\n";
#define debug2(index, value) cout << index << " " << value << "\n";
#define debug1(value) cout << value << "\n";
#define openfile(string1, string2) freopen(string1, "r", stdin); freopen(string2, "w", stdout);
using namespace std; 
  
#define ull unsigned long long int 
ull MOD; 
ull ONumber;
  
ull powerLL(ull x, ull n) 
{ 
    ull result = 1; 
    while (n) { 
        if (n & 1) 
            result = result * x % MOD; 
        n = n / 2; 
        x = x * x % MOD; 
    } 
    return result; 
} 

ull powerStrings(string sa, string sb) 
{ 
    ull a = 0, b = 0; 
    
    for (int i = 0; i < sa.length(); i++) 
        a = (a * 10 + (sa[i] - '0')) % MOD; 
  
    
    for (int i = 0; i < sb.length(); i++) 
        b = (b * 10 + (sb[i] - '0')) % (MOD - 1); 
    return powerLL(a, b); 
} 

ull calc(ull x, ull n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    ull res = 0;
        res += powerStrings(to_string(x), to_string(n-1))*(n%2);
    n /= 2;
    //return res % MOD + (((calc(x, n)%MOD)*((1 + powerLL(x,n))%MOD))%MOD);
    return (res + (calc(x, n)%MOD) * (1 + powerStrings(to_string(x), to_string(n)))%MOD)%MOD ;
}
  
int main() 
{ 
    openfile("test.inp", "test.out");
    ONumber = 0;
    ull a1, a2, a3;
    scanf("%llu %llu %llu", &a1, &a2, &a3);
    MOD = a3;
    ull number = a1;
    ull expo = a2;
    printf("%llu\n", a1);
   // string number = to_string(a1), expo = to_string(a2); 
    
    printf("%llu",calc(number, expo+1));
    return 0; 
} 