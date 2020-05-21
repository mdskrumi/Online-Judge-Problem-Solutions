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
    int n, m;
    cin >> n >> m;
    vector<long long>dor(n+1);
    dor[0] = 0;
    for(int i = 1 ; i <= n; i++){
        cin >> dor[i];
        dor[i] += dor[i-1];
    }
    int check = 1;
    for(int i = 0; i < m; i++){
        long long letter;
        cin >> letter;
        while(true){
            long long l = dor[check-1] ;
            long long h = dor[check] ;

            while(l<=h){
                long long m = l + (h-l)/2;
                if(m == letter){
                    cout << check << " " << m - dor[check -1] << '\n';
                    break;
                }
                else if (m < letter){
                    l = m + 1;
                }
                else {
                    h = m - 1;
                }
            }
            if(l > h){
                check++;
            }else{
                break;
            }
        }

    }
}






int main(){
    BOLT;
    USEFILE(false);
    solve();
    return 0;
}
