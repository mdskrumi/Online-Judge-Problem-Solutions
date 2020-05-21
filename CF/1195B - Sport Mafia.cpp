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

long long sumToN(long long n){
    return n*(n+1)/2;
}


void solve(){
    long long n, k;
    cin >> n >> k;

    long long l = 0, h = n;

    while(l<=h){
        long long mid = (l + (h-l)/2);
        long long res = sumToN(mid);
        //cout << "Iteration: " << l << " " << h  << " res:" << res-(n-mid) << ", For " << mid << "\n";
        if(res - (n-mid) == k){
            cout << n-mid << '\n';
            break;
        }
        else if(res - (n-mid) < k){
            l = mid + 1;
        }
        else{
            h = mid - 1;
        }
    }
}





int main(){
    BOLT;
    USEFILE(false);
    solve();
    return 0;
}
