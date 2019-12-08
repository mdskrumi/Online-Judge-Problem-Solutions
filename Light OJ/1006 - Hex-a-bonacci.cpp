#include<bits/stdc++.h>
using namespace std;

long long a, b, c, d, e, f;
long long fn( long long n );
long long dp[10500];

int main(){
    long long n, kase = 1, t;
    scanf("%lld", &t);
    while(t--){
            for(int i = 0 ; i < 10500; i++){
                dp[i] = -1;
            }

            scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);
            printf("Case %lld: %lld\n", kase++, fn(n) % 10000007);
    }
return 0;
}

long long fn( long long n ) {
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    if(dp[n]!=-1){
        return dp[n];
    }
    return dp[n] = (fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6))% 10000007;
}
