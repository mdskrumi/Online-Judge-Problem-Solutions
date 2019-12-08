#include<bits/stdc++.h>
using namespace std;
int socks[100000];
void makezero();
int main(){
makezero();
    int n , s , have , ans;
    cin >> n;
    have = ans = 0;
    for(int i = 0 ; i < 2*n ; i++){
        cin >> s;
        if(socks[s]==0){
            socks[s]++;
            have++;
            if(ans<have){
                ans = have;
            }
        }
        else{
            have--;
        }
    }
    cout << ans <<endl;
return 0;
}
void makezero(){
    for(int i = 0 ; i < 100000 ; i++){
        socks[i] = 0;
    }
}
