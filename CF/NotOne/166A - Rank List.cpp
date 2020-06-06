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
    int n, k;
    cin >> n >> k;
    vector<pair<int, int> > v;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(), v.end(), cmp);
    int ans = 0;

    int place = 0;
    for(int i = 0 ; i < v.size(); i++){
        if(v[i] == v[k-1])ans++;
    }
    cout << ans;
    newline;
}

int main()
{
    BOLT;
    //USEFILE();
    solve();
    return 0;
}
