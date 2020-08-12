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

vector<int>graph[20000+2];
int vis[20000+2];
int col[20000+2];


void clean(){
    for(int i = 0 ; i < 20000+2 ; i++){
        graph[i].clear();
        vis[i] = -1;
        col[i] = -1;
    }
}



int BS(int s){
    int one = 0 , two = 0;
    queue<int>q;
    q.push(s);
    vis[s] = 1;
    col[s] = 1;
    one++;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int i = 0 ; i < graph[u].size() ; i++){
            if(vis[graph[u][i]] == -1){
                q.push(graph[u][i]);
                vis[graph[u][i]] = 1;
                if(col[u] == 1){
                    col[graph[u][i]] = 2;
                    two++;
                }else {
                    col[graph[u][i]] = 1;
                    one++;
                }
            }
        }
    }
    return max(one,two);
}


void solve(int kase){
    clean();
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        int x , y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
        col[x] = 0;
        col[y] = 0;
    }
    cout << "Case " << kase <<": ";
    int ans = 0;
    for(int i = 1 ; i < 20000+2 ;i++){
        if(col[i] == 0){
            ans += BS(i);
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
