#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define pb push_back
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;
void bfs(int a);
int visited[1002] , cost[1002] , man[102];
vector< int >v[1002];
int n , k , m;
int main(){
        //Taking;Making;
        int t, kase = 1;
        sf("%d",&t);
        while(t--){
            sf("%d%d%d",&k,&n,&m);

            for(int i = 0 ; i <= n ; i++){
                v[i].clear();
                cost[i] = 0;
            }
            for(int i = 0 ; i < k ; i++){
                sf("%d",&man[i]);
            }

            for(int i = 0 ; i < m ; i++){
                int x , y ;
                sf("%d%d",&x,&y);
                v[x].pb(y);
            }

            for(int i = 0 ; i < k ; i++){
                bfs(man[i]);
            }
            int ans = 0;
            for(int i = 0 ; i <= n ; i++){
                if(cost[i]==k){
                    ans++;
                }
            }
            pf("Case %d: %d\n",kase++,ans);
        }
return 0;
}
void bfs(int a){
     for(int i = 0 ; i <= n ; i++){
            visited[i] = -1;
    }
    queue<int>q;
    q.push(a);
    visited[a] = 1;
    cost[a]++;
    while(!q.empty()){
        int w = q.front();
        q.pop();
        for(int i = 0 ; i < v[w].size() ; i++){
            if(visited[v[w][i]] == 1){
                continue;
            }
            visited[v[w][i]] = 1;
            q.push(v[w][i]);
            cost[v[w][i]]++;
        }
    }
}
