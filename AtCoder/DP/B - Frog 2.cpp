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
long long path[100000];
long long dp[100000];
int n, k;


void USEFILE(){
    IN_FILE;
    OUT_FILE;
}


void reset(){
    memset(path, 0, sizeof path);
    memset(dp, -1, sizeof dp);
}


long long process(int i){
    long long ans = LL_MAX;
    if(i>=n) return 0;
    if(dp[i] != -1) return dp[i];
    
    for(int m = 1 ; m <= k ; m++){
        if(i+m>=n){
            break;
        }
        else 
            ans = min( abs( path[i]-path[i+m]) + process(i+m), ans);
    }   
    if(ans == LL_MAX) {
        ans = 0;
    }
    dp[i] = ans;
    return ans;
}


void solve(int kase){
    reset();
    cin >> n >> k;
    for(int i = 0 ; i < n; i++){
        cin >> path[i];
    } 
    cout << process(0);newline;
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
