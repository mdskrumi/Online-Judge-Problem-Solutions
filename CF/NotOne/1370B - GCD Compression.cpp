#include <bits/stdc++.h>
using namespace std;

#define BOLT ios_base::sync_with_stdio(0)
#define newline cout << "\n"
#define eline cerr << "\n"
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
    vector<int>even, odd;
    vector< pair<int,int> >ans;
    int x;
    for(int i = 0; i < 2*n; i++){
        cin >> x;
        if(x % 2) odd.push_back(i+1);
        else even.push_back(i+1);
    }

    for(int i = 1; i < odd.size(); i+=2){
        ans.push_back( make_pair( odd[i-1], odd[i] ) );
    }
    for(int i = 1; i < even.size(); i+=2){
       ans.push_back( make_pair( even[i-1], even[i] ) );
    }

    if(ans.size() == n-1){
        for(int i = 0 ; i < ans.size() ; i++){
            cout << ans[i].first << " " << ans[i].second; newline;
        }
    }else{
        for(int i = 0 ; i < ans.size() - 1; i++){
            cout << ans[i].first << " " << ans[i].second; newline;
        }
    }

}

int main(){
    BOLT;
    //USEFILE();
    int t, kase = 0;
    cin >> t;
    while(t--)
         solve(++kase);
    // solve(0);

    return 0;
}
