#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define pb push_back
#define mp make_pair
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;
/*-----------------------------------FUNCTIONS-----------------------------------------*/
void solve();
void clean();
/*-----------------------------------Variables-----------------------------------------*/
int main(){
       // Taking;Making;
        int n , k , r , l;
        cin >> n >> k >> l >> r;
        if(l==1 && r==n){
            cout << 0 <<endl;
            return 0;
        }
        int ans = 0;
        if(l==1){
            ans = abs(k-r)+1;
        }
        else if(r==n){
            ans = abs(k-l)+1;
        }
        else{
           if(abs(k - l) < abs(k - r)){ // 6 3 1 3
            ans += abs(k-l)+1;
            ans += abs(l-r)+1;
        }
        else{
            ans += abs(k-r)+1;
            ans += abs(l-r)+1;
        }
        }

        cout << ans <<endl;

return 0;
}
void solve(){
}
void clean(){
}

