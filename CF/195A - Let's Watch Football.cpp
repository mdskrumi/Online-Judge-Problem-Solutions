#include<bits/stdc++.h>
using namespace std;

#define BOLT        ios_base::sync_with_stdio(0)

#define IN_FILE     freopen("input.txt", "r", stdin);
#define OUT_FILE    freopen("output.txt", "w", stdout);


void USEFILE(bool yes){
    if(yes){
        IN_FILE;
        OUT_FILE;
    }
}

bool possible(int mb, int s, int w, int d){

    int rem = (mb*s) - (w*d);
    
    if(rem <= s*d){
        return true;
    }
    
    return false;
}

void solve(){
    int mb, d, s , ans = INT_MAX;
    cin >> mb >> d >> s;
    int l = 0, h = ceil((mb*s)/d);
    while(l<=h){
        int m = l + (h-l)/2;
        if(possible(mb, s, m, d)){
            h = m - 1;
            ans = min(ans, m);
        }
        else{
            l = m + 1;
        }
        //cout << l << " " << h << " " << m << '\n';
    }
    cout << ans << '\n';
}

int main(){
    BOLT;
    USEFILE(false);
    solve();
    return 0;
}
