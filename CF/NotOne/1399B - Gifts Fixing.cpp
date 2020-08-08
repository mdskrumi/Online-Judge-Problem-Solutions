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
   int arr1[n], arr2[n];
   int l1 = INT_MAX, l2 = INT_MAX;

   for(int i = 0 ; i < n ; i++){
        cin >> arr1[i];
        l1 = min(arr1[i], l1);
   }
   for(int i = 0 ; i < n ; i++){
        cin >> arr2[i];
        l2 = min(arr2[i], l2);
   }

   long long ans = 0;
   for(int i = 0; i < n ; i++){
        ans += max( arr1[i] - l1 , arr2[i] - l2 );
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
