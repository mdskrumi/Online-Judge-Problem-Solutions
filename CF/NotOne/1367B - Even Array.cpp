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
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        arr[i] = x % 2;
    }
    int ans = 0, i = 0;
    for(i  ; i < n-1 ; i++){
        bool flag = false;
        if(arr[i] == i%2) continue;
        for(int j = i+1 ; j < n ; j++){
            if(arr[j] == i%2 && arr[j] != j%2){
                swap(arr[i],arr[j]);
                ans++;
                flag = true;
                break;
            }
        }
        if(!flag){
            ans = -1;
            break;
        }
    }
    if(arr[i] != i%2)
        ans = -1;
    cout << ans;
    newline;
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
