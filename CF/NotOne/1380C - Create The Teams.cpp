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

bool rev(int a, int b){
    return(a > b);
}

void solve(int kase){
    int n;
    long long x;
    cin >> n >> x;
    vector<long long>v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end(), rev);


    int ans = 0, curr = 1;
    for(int i = 0 ; i < n ; i++){
        if(curr * v[i] >= x){
            ans++;
            curr = 1;
        }
        else
            curr++;
    }
    cout << ans; newline;
        
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
