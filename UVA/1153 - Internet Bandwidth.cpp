#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define pb push_back
#define mp make_pair
#define DOS 100000000000
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;
/*-----------------------------------FUNCTIONS-----------------------------------------*/
void clean();
void clean1();
int BFS();
int getFlow();
/*-----------------------------------Variables-----------------------------------------*/
int graph[101][101];
int Fgraph[101][101];
int vis[101];
int parent[101];

int n , s , f , c;
int main(){
        //Taking;Making;
        int t , kase = 1;
        sf("%d",&t);
        while(t--){
            sf("%d",&n);
            clean();
            sf("%d%d%d",&s,&f,&c);
            for(int i = 0 ; i < c ; i++){
                int x,y,z;
                sf("%d%d%d",&x,&y,&z);
                graph[x][y] += z;
                graph[y][x] += z;
            }
            int maxflow = 0;
            while(1){
                int flow = BFS();
                clean1();
                if(flow==-1)break;
                maxflow+=flow;
            }
            pf("Case %d: %d\n",kase++,maxflow);
        }

return 0;
}
int BFS(){
    int ag = 0;
    queue<int>q;
    q.push(s);
    vis[s]=1;
    while(!q.empty()){
        int w = q.front();
        q.pop();
     //   cout << "FROM : " << w <<endl;
        for(int i = 1 ; i <= n ; i++){
            if(graph[w][i]!=0 && vis[i] != 1){
       //         cout <<"\t\t" << i <<endl;
                parent[i]=w;
                vis[i] = 1;
                q.push(i);
                if(i==f){
                    ag = 1;
                    while(!q.empty()){
                        q.pop();
                    }
                }
            }
            if(ag==1){
                return getFlow();
            }
        }

    }
    return -1;
}
int getFlow(){
    int u = s;
    int v = f;
    int flow = INT_MAX;
    while(v != u){
        flow = min(flow , graph[parent[v]][v]);
        v = parent[v];
    }
    u = s;
    v = f;
    while(v != u){
        graph[parent[v]][v] -= flow;
        graph[v][parent[v]] += flow;
        v = parent[v];
    }
   // cout << "******FOUND FLOW " << flow <<endl;
    return flow;
}
void clean(){
    for(int i = 0 ; i <= n ; i++){
        for(int j = 0 ; j <= n ; j++){
            graph[i][j] = 0;
        }
        vis[i]= -1;
        parent[i]= i;
    }
}
void clean1(){
    for(int i = 0 ; i <= n ; i++){
        vis[i]= -1;
        parent[i]= i;
    }
}

