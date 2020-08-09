#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define pb push_back
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;
void bfs(int a);
int visited[30002] , cost[30002];
vector< pair<int,int> >v[30002];
int n , sn , ans;
int main(){
       // Taking;Making;
        int t, kase = 1;
        sf("%d",&t);
        while(t--){
            sf("%d",&n);
            for(int i = 0 ; i < n ; i++){
                v[i].clear();
            }
            for(int i = 0 ; i < n-1 ; i++){
                int x , y , w;
                sf("%d%d%d",&x,&y,&w);
                v[x].pb(make_pair(y,w));
                v[y].pb(make_pair(x,w));
            }
            sn = 0;
            ans = 0;
            bfs(sn);
            ans = 0;
            bfs(sn);
            pf("Case %d: %d\n",kase++,ans);
        }
return 0;
}
void bfs(int a){
     for(int i = 0 ; i < n ; i++){
            visited[i]= -1;
            cost[i] = 0;
    }
    queue<int>q;
    q.push(a);
    visited[a] = 1;
    while(!q.empty()){
        int w = q.front();
        q.pop();
        for(int i = 0 ; i < v[w].size() ; i++){
            if(visited[v[w][i].first]==1){
                continue;
            }
            visited[v[w][i].first]= 1;
            q.push(v[w][i].first);
            cost[v[w][i].first] = v[w][i].second + cost[w];
            if(cost[v[w][i].first] > ans){
                ans = cost[v[w][i].first];
                sn = v[w][i].first;
            }
        }
    }
}
