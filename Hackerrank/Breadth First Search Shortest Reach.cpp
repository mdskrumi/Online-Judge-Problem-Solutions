#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;
void bfs(int s);
int node[1002][1002];
int visited[1002];
int cost[1002];
int n , m;

int main(){
    int t;
    sf("%d",&t);
    while(t--){
        sf("%d%d",&n,&m);

        for(int i = 0 ; i <= n ;i++){
            for(int j = 0 ; j <= n ; j++){
                node[i][j]=0;
            }visited[i]= -1;
            cost[i]= -1;
        }
        for(int i = 0 ; i < m ; i++){
        int x , y;
         sf("%d%d",&x,&y);
         node[x][y] = 1;
         node[y][x] = 1;
        }
        int s;
        sf("%d",&s);
        bfs(s);

        for(int i = 1 ; i <=n ; i++){
            if(i==s)continue;
            if(i<n)pf("%d ",cost[i]);
            else pf("%d",cost[i]);
        }puts("");
    }

return 0;
}
void bfs(int s){
    queue<int>q;
    q.push(s);
    cost[s] = 0;
    while(!q.empty()){
        int w = q.front();
        q.pop();
        for(int i = 1 ; i <= n ; i++){
            if(visited[i] == 1 || node[w][i]==0){
                continue;
            }
            q.push(i);
            visited[i] = 1;
            cost[i] = cost[w]+6;
        }
    }
}
