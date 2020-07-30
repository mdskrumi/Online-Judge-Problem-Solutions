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

long long getBase(long long n){
    while(n%2==0){
        n/=2;
    }
    return n;
}

void solve(int kase){
    long long a , b;
    cin >> a >> b;
    if(a>b){
        swap(a,b);
    }

    long long base = getBase(a);

    if(base != getBase(b)){
        cout << -1;
    }else{
        int ans = 0;
        b/=a;
        while(b >= 8){
            b/=8;
            ans++;
        }
        if(b>1)ans++;
        cout << ans;
    }
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
