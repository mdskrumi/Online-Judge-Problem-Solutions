#include <bits/stdc++.h>
using namespace std;

#define BOLT ios_base::sync_with_stdio(0)
#define newline cout<<"\n"
#define IN_FILE freopen("input.txt", "r", stdin);
#define OUT_FILE freopen("output.txt", "w", stdout);


void USEFILE(){
    IN_FILE;
    OUT_FILE
}

int cardsRequiredForHeightN(int n){
    return n*(n+1) + n*(n-1)/2;
}

int buildPyramid(int n){
    int l = 0;
    int h = sqrt(n);
    int usedCard = 0;
    while(l<=h){
        int m = l + (h - l) / 2;
        int requiredCard = cardsRequiredForHeightN(m);
        if(requiredCard <= n){
            usedCard = max(usedCard, requiredCard);
            l = m + 1;
        }else
            h = m -1;
    }
    return usedCard;
}

void solve(){
    int t;
    cin >> t;
    while(t--){
        int n , ans = 0;
        cin >> n;
        while(1){
            int usedCard = buildPyramid(n);
            if(usedCard > 0){
                ans += 1;
                n-=usedCard;
            }else break;
        }
        cout << ans;
        newline;
    }
}


int main(){
    BOLT;
    //USEFILE();
    solve();
    return 0;
}
