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


void solve(int kase){
  double R, n;
  cin >> R >> n;
  cout << "Case " << kase <<": ";
  cout << setprecision(10) << (sin(PI/n) * R) /(1 + sin(PI/n));newline;
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
