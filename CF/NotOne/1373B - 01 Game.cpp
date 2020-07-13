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


void USEFILE(){
    IN_FILE;
    OUT_FILE;
}


void solve(int kase){
    string s;
    cin >> s;
    int one = 0 , zero = 0;

    for(int i = 0 ; i < s.size() ; i++){
        if(s[i]=='1')one++;
        else zero++;
    }

    int ans = min(zero,one);

    if(ans%2==1) cout << "DA";
    else cout << "NET";
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
