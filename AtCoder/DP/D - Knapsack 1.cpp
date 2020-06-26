#include <bits/stdc++.h>
using namespace std;

#define BOLT ios_base::sync_with_stdio(0)
#define newline cout << "\n"
#define eline cerr << "\n"
#define LL_MAX 9223372036854775807
#define LL_MIN -9223372036854775808
#define IN_FILE freopen("input.txt", "r", stdin)
#define OUT_FILE freopen("output.txt", "w", stdout)


// g++ -o contest contest.cpp

long long w[100+5];
long long v[100000+5];
long long dp[100+5][100000+5];

void USEFILE(){
    IN_FILE;
    OUT_FILE;
}

void reset(){
    memset(dp, -1, sizeof dp);   
}

long long process(int n, int W){
    if(n <= 0 || W <= 0) return 0;
    if(dp[n][W] != -1) return dp[n][W];

    long long ans = 0;

    if(W < w[n]){
        ans = process(n-1,W);
    }
    else{
        ans = max(process(n-1,W) , v[n] + process(n-1,W-w[n]));
    }
    dp[n][W] = ans;
    return ans;
}   



void solve(int kase){
    reset();
    int n, W;
    cin >> n >> W;
    for(int i = 1 ; i <= n ; i++){
        cin >> w[i] >> v[i];
    }
    cout << process(n, W); newline;
}


int main(){
    BOLT;
    // USEFILE();
    int t, kase = 0;
    // cin >> t;
    // while(t--)
    //      solve(++kase);
    solve(0);

return 0;
}
