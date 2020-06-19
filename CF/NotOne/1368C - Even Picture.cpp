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
    int r = 0, c = 0;

    cerr << "HERE";eline;

    vector< pair<int, int> > v;
    while(n>=c && n >= r){
        v.push_back(make_pair(r,c));
        v.push_back(make_pair(r+1,c));
        v.push_back(make_pair(r,c+1));
        r+=1;
        c+=1;
    }
    v.push_back(make_pair(r,c));
    cout << v.size();newline;
    for(int i = 0; i < v.size(); i++){
        cout << v[i].first << " " << v[i].second; newline;
    }

}

int main(){
    BOLT;
    // USEFILE();
    // int t, kase = 0;
    // cin >> t;
    // while(t--)
    //      solve(++kase);
    solve(0);

    return 0;
}
