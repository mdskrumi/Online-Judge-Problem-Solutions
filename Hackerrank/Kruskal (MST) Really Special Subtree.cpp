#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define pb push_back
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;
int bfs(    );
int node[3002][3002];
int visited[3002];
int n , m;

int main(){
       // Taking;Making;
        sf("%d%d",&n,&m);

        for(int i = 1 ; i <= n ;i++){
            for(int j = 1 ; j <= n ; j++){
                node[i][j] = -1;
            }visited[i]= -1;
        }


        for(int i = 0 ; i < m ; i++){
            int x , y , w;
            sf("%d%d%d",&x,&y,&w);
            if(node[x][y] == 0){
                node[x][y] = w;
                node[y][x] = w;
            }else{
                node[x][y] = min(w,node[x][y]);
                node[y][x] = node[x][y];
            }
        }
        int ans = bfs();
        pf("%d\n",ans);

return 0;
}
int bfs(){
    int ans = 0;
    vector<int>v;
    v.pb(1);
    visited[1] = 1;
    while(1){
        int c = INT_MAX , x = -1 , y = -1;
        for(int i = 0 ; i < v.size() ; i++){
            for(int j = 1 ; j <= n; j++){
                if(visited[j] == 1 || node[v[i]][j]== -1)continue;
                if(node[v[i]][j] < c){
                    c = node[v[i]][j];
                    x = j;
                    y = v[i];
                }
            }
        }   //cout << "SELECTED : " << y << " " << x << " " << c << endl;
            if(x == -1)break;
            v.pb(x);
            visited[x] = 1;
            ans+=c;
    }
return ans;
}
