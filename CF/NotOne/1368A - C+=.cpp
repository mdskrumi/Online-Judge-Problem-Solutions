#include <bits/stdc++.h>
using namespace std;

#define BOLT ios_base::sync_with_stdio(0)
#define newline cout << "\n"
#define eline cerr << "\n"
#define IN_FILE freopen("input.txt", "r", stdin);
#define OUT_FILE freopen("output.txt", "w", stdout);


void USEFILE(){
    IN_FILE;
    OUT_FILE
}

void solve(int kase){
    long long a , b, n;
    cin >> a >> b >> n;

    long long sum = a+b, ans = 1;
    while(sum <= n){
        if(a<b){
            a = sum;
        }else b = sum;
        sum = a+b;
        ans++;
    }
    cout << ans; newline;
}

int main()
{
    BOLT;
    //USEFILE();
    int t, kase = 0;
    cin >> t;
    while(t--)
        solve(++kase);
    return 0;
}
