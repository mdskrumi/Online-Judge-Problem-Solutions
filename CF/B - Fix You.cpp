#include <bits/stdc++.h>
using namespace std;

#define BOLT ios_base::sync_with_stdio(0)
#define newline cout << "\n"
#define eline cerr << "\n"
#define LL_MAX 9223372036854775807
#define LL_MIN -9223372036854775808
#define PI acos(-1)
#define IN_FILE freopen("input.txt", "r", stdin)
#define OUT_FILE freopen("output.txt", "w", stdout)

// g++ -o contest contest.cpp


void USEFILE(){
    IN_FILE;
    OUT_FILE;
}



void solve(int kase){
    int n , m;
    cin >> n >> m;
    vector<string>v;
    string s;
    for(int i = 0 ; i < n ;i++){
        cin >> s;
        v.push_back(s); 
    }

    if(n==1 && m == 1){
        cout << 0;
    }else{
        int ans = 0;
        for(int i = 0 ; i < m ; i++){
            if(v[n-1][i]=='D'){
                ans++;
            }
        }

        for(int i = 0 ; i < n ; i++){
            if(v[i][m-1]=='R'){
                ans++;
            }
        }
        cout << ans;
    }
    newline;
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
