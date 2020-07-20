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
    int arr[n];
    for(int i = 0 ; i < n ; i++)
        cin >> arr[i];
    bool flag = false;
    for(int i = 1 ; i < n-1 ; i++){
        if(arr[i-1] < arr[i] && arr[i] > arr[i+1]){
            i+=1;
            cout << "YES\n";
            cout << i-1 << " " << i << " " << i+1;
            flag = true;
            break;
        }
    }
    if(!flag)
        cout << "NO";
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
