#include <bits/stdc++.h>
using namespace std;

#define BOLT ios_base::sync_with_stdio(0)
#define newline cout << "\n"
#define eline cerr << "\n"
#define IN_FILE freopen("input.txt", "r", stdin)
#define OUT_FILE freopen("output.txt", "w", stdout)

// g++ -o contest contest.cpp
long long path[100000];
long long dp[100000];
int n;

void USEFILE(){
    IN_FILE;
    OUT_FILE;
}

void reset(){
    memset(path, 0, sizeof path);
    memset(dp, -1, sizeof dp);
}

long long process(int i){
    long long ans;
    if(i>=n) return 0;
    if(dp[i] != -1) return dp[i];
    if(i == n-1)
        ans = 0;
    else if(i == n-2){
        ans = abs(path[i] - path[i+1]);
    }
    else 
        ans = min( abs( path[i]-path[i+1]) + process(i+1), abs( path[i] - path[i+2] ) + process(i+2) );

    dp[i] = ans;
    return ans;
}


void solve(int kase){
    reset();
    cin >> n;
    for(int i = 0 ; i < n; i++){
        cin >> path[i];
    } 
    cout << process(0);newline;
}


int main(){
    BOLT;
    //USEFILE();
    int t, kase = 0;
    // cin >> t;
    // while(t--)
    //      solve(++kase);
    solve(0);

    return 0;
}
