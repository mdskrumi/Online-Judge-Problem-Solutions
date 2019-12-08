#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define pb push_back
#define mp make_pair
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;
/*-----------------------------------FUNCTIONS-----------------------------------------*/
void clean();
int BFS();
/*-----------------------------------Variables-----------------------------------------*/
int n , e;
vector<int>v[201];
int vis[201] , col[201];
queue<int>q;

int main(){
        //Taking;Making;
        while(sf("%d",&n) && n){
            clean();
            sf("%d",&e);
            for(int i = 0 ; i < e ; i++){
                int x , y;
                sf("%d%d",&x,&y);
                v[x].pb(y);
            }
            if(BFS()){
                cout << "BICOLORABLE.\n";
            }else{
                cout << "NOT BICOLORABLE.\n";
            }
        }

return 0;
}
void clean(){
    for(int i = 0 ; i <= n ; i++){
        v[i].clear();
        vis[i] = -1;
        col[i] = 0;
    }
    while(!q.empty()){
        q.pop();
    }
}
int BFS(){
    q.push(0);
    vis[0] = 1;
    col[0] = 1;
    while(!q.empty()){
        int w = q.front();
        q.pop();
        for(int i = 0 ; i < v[w].size() ; i++){
            if(vis[v[w][i]] != 1){
                q.push(v[w][i]);
                vis[v[w][i]] = 1;
            }
            if(col[v[w][i]] == col[w]){
                return 0;
            }
            else{
                if(col[w]==1){
                    col[v[w][i]] = 2;
                }else{
                    col[v[w][i]] = 1;
                }
            }
        }
    }
return 1;
}
