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

void solve(){
    int shops;
    cin >> shops;
    vector<int>costs(shops);
    for(int i = 0 ; i < shops; i++){
        cin >> costs[i];
    }
    sort(costs.begin(), costs.end());

    int days;
    cin >> days;

    for(int i = 0; i < days; i++){
        int coin , ans = -1;
        cin >> coin;
        int l = 0 , h = shops;
        while(l<=h){
            int m = l + (h-l)/2;
            if(costs[m] <= coin){
                l = m + 1;
                ans = max(ans, m);
            }
            else{
                h = m - 1;
            }
        }
        if(ans==-1){
            cout << 0 << '\n';
        }else
            cout << min(ans+1, shops) << '\n';
    }

}

int main(){
    BOLT;
    USEFILE(false);
    solve();
    return 0;
}
