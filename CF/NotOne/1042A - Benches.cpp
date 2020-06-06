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

bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.first > b.first){
        return true;
    }else if(a.first == b.first){
        if(a.second < b.second) return true;
        return false;
    }
    return false;
}

void solve(){
    int n , m;
    cin >> n >> m;
    int arr[n];
    int min = INT_MAX;
    int mx = INT_MIN;

    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
        mx = max(mx, arr[i]);
    }

    int ansMax = mx + m;
    int ansMin = -1;

    for(int i = 0 ; i < n ; i++){
        if(arr[i] < mx){
            m = m - abs(arr[i]-mx);
            if(m <= 0){
                ansMin = mx;
                break;
            }
        }
    }
    if(ansMin == -1){
        ansMin = mx + (m/n) ;
        if( (m % n) != 0){
            ansMin++;
        }
    }
    cout << ansMin << " " << ansMax;
    newline; 

}

int main()
{
    BOLT;
    //USEFILE();
    solve();
    return 0;
}
