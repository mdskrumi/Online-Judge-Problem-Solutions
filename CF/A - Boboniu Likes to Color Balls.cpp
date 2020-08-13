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

long long r , g , b , w;
int odd = 0, even = 0;
void reset(){
    odd = 0, even = 0;
    if(r%2==1){
        odd++;
    }else{
        even++;
    }
    if(g%2==1){
        odd++;
    }else{
        even++;
    }
    if(b%2==1){
        odd++;
    }else{
        even++;
    }
    if(w%2==1){
        odd++;
    }else{
        even++;
    }
}



void solve(int kase){

    cin >> r >> g >> b >> w;
    reset();

    if(odd<=1){
        cout << "YES\n";
    }
    else{
        if(r >= 1 && b >= 1 && g >= 1){
            r--;
            b--;
            g--;
            w+=3;
            reset();
            if(odd<=1){
                cout << "YES\n";
            }else cout << "NO\n";
        }else cout << "NO\n";

    }
}

int main(){
    BOLT;
    // USEFILE();
    int t, kase = 0;
    cin >> t;
    cin.ignore();
    while(t--)
         solve(++kase);
    // solve(0);

return 0;
}
