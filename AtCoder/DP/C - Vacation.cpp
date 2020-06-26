#include <bits/stdc++.h>
using namespace std;

#define BOLT ios_base::sync_with_stdio(0)
#define newline cout << "\n"
#define eline cerr << "\n"
#define LL_MAX 9223372036854775807
#define LL_MIN -9223372036854775808
#define IN_FILE freopen("input.txt", "r", stdin)
#define OUT_FILE freopen("output.txt", "w", stdout)

long long arr[100000+2][3];
long long dp[100000+2][3];
int n;

// g++ -o contest contest.cpp

void USEFILE(){
    IN_FILE;
    OUT_FILE;
}

void reset(){
    memset(arr, 0, sizeof arr);
    memset(dp, -1, sizeof dp);
}

long long process(int i, int j){

     // cout << "Incoming: " << i << " " << j; newline;

    if(i >= n) return 0;
    if(dp[i][j] != -1) return dp[i][j];
    long long ans = 0;
    for(int k = 0 ; k < 3; k++){
        if(k == j && i != 0) {
            continue;
        }
        // cout << "\tOutgoing: " << i << " " << j;newline;
        ans = max(ans , arr[i][k] + process(i+1, k));
    }
    dp[i][j] = ans;
    return ans;
}



void solve(int kase){
    reset();
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < 3 ; j++){
            cin >> arr[i][j];
        }
    }
    cout << process(0,0);newline;
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
