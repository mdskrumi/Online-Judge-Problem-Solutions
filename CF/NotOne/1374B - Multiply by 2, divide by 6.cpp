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


void solve(int kase){
    long long n;
    cin >> n;
    int count2 = 0, count3 = 0;
    while(n%2==0){
        n/=2;
        count2++;
    }
    while(n%3==0){
        n/=3;
        count3++;
    }

    if(n != 1 || count2 > count3) cout << -1;
    else cout << abs(count2-count3) + count3;
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
