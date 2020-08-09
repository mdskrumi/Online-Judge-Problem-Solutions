#include <bits/stdc++.h>
using namespace std;

#define BOLT ios_base::sync_with_stdio(0)
#define newline cout << "\n"
#define eline cerr << "\n"
#define IN_FILE freopen("input.txt", "r", stdin)
#define OUT_FILE freopen("output.txt", "w", stdout)

// g++ -o contest contest.cpp

long long dp[105][105];
long long tree[105][105];
int n;


void USEFILE(){
    IN_FILE;
    OUT_FILE;
}

void reset(){
    memset(dp, -1, sizeof dp);
    memset(tree, 0, sizeof tree);
}


long long process(int i, int j){
    if (tree[i][j]==0) return 0;

    if(i == 2*n - 1 || j == n) return 0;

    if(dp[i][j] != -1) return dp[i][j];
    long long ans1 = tree[i][j] + process(i+1, j);
    long long ans2 = tree[i][j] + process(i+1, j+1);
    long long ans = max(ans1, ans2);

    dp[i][j] = ans;
    return ans;
}

void solve(int kase){
    reset();
    cin >> n;

    for(int i = 0 ; i < n ; i++){
        for(int j = 0; j <= i ; j++){
            cin >> tree[i][j];
        }
    }
    int inc = 1;
    for(int i = n ; i < 2*n -1 ; i++){
        for(int j = 0+inc; j < n ; j++){
            cin >> tree[i][j];
        }inc++;
    }

    cout << "Case " << kase << ": ";
    cout << process(0,0); newline;
}


int main(){
    BOLT;
    // USEFILE();
    int t, kase = 0;
    cin >> t;
    while(t--)
         solve(++kase);
    // solve(0);

    return 0;
}
