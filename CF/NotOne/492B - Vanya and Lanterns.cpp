#include <bits/stdc++.h>
using namespace std;

#define BOLT ios_base::sync_with_stdio(0)
#define newline cout << "\n"
#define IN_FILE freopen("input.txt", "r", stdin);
#define OUT_FILE freopen("output.txt", "w", stdout);

void USEFILE(){
    IN_FILE;
    OUT_FILE
}

double arr[10000];


bool isPossible(int n, double gap){
  for(int i = 1 ; i < n ; i++){
    if( (arr[i] - arr[i-1]) / 2 > gap ){
      return false;
    }
  }
  return true;
}

void solve(){
  int n , l;
  cin >> n >> l;

  for(int i = 0 ; i < n ; i++){
    cin >> arr[i];
  }
  sort(arr,arr+n);

  double low = 0;
  double high = l;
  double ans = l;

  int loop = 150;

  while(loop--){
    double mid = low + (high-low)/2;

    if(isPossible(n,mid)){
      //cout << "Possible With " <<  low << " " << high << " " << mid; newline;
      ans = min(ans, mid);
      high = mid;
    }
    else{
      low = mid;
    }
  }
  cout << setprecision(10) << fixed;
  cout << max ( max(l-arr[n-1], arr[0]) , ans );
  newline;
}

int main()
{
    BOLT;
    //USEFILE();
    solve();
    return 0;
}
