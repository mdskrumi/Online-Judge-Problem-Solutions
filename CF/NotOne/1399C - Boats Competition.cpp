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
  int n;
  cin >> n;
  vector<int>v(n);
  for(int i = 0 ; i < n ; i++){
    cin >> v[i];
  }

  sort(v.begin(), v.end());

  int ans = 0;
  for(int s = 2 ; s <= 100 ; s++){
    vector<int>dup = v;
    int secondAns = 0;
    for(int i = 0 ; i < n ; i++){
      if(dup[i] == -1) continue;
      for(int j = i+1 ; j < n; j++){
        if(dup[j] == -1) continue;
        if(dup[i] + dup[j] == s){
          secondAns++;
          dup[i] = -1;
          dup[j] = -1;
          break;
        }
      }
      ans = max(ans, secondAns);
    }
  }
  cout << ans;
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
