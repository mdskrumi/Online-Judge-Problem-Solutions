#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define pb push_back
#define mp make_pair
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;
/*-----------------------------------FUNCTIONS-----------------------------------------*/
int boundary(int x , int y);
int corner(int x , int y);
void FIRE_BFS();
int Jane_BFS();
void clean();
/*-----------------------------------Variables-----------------------------------------*/
char graph[201][201];
int f_cost[201][201];
int j_cost[201][201];
int j_vis[201][201],f_vis[201][201];
int R , C;
int jx, jy;
vector<pair<int,int> >fire;
int dx[]={0,0,-1,1};
int dy[]={1,-1,0,0};

int main(){
        //Taking;Making;
        int t , kase = 1;
        sf("%d",&t);
        while(t--){
            sf("%d%d",&R,&C);
            clean();
            for(int i = 0 ; i < R ; i++){
                for(int j = 0 ; j < C ; j++){
                    cin >> graph[i][j];
                    if(graph[i][j]=='J'){
                        jx = i;
                        jy = j;
                    }
                    else if(graph[i][j]=='F'){
                        fire.pb(mp(i,j));
                    }
                }
            }
           /* cout << jx << " " << jy <<endl;
            for(int i = 0 ; i < fire.size() ; i++){
                cout << fire[i].first<<" "<<fire[i].second<<endl;
            }*/

            FIRE_BFS();
            if(Jane_BFS()){
                pf("Case %d: %d\n",kase++,++j_cost[jx][jy]);
            }
            else{
                pf("Case %d: IMPOSSIBLE\n",kase++);
            }
        }

return 0;
}
void FIRE_BFS(){
    queue<pair<int ,int> >q;
    for(int i = 0 ; i < fire.size() ; i++){
        f_cost[fire[i].first][fire[i].second] = 0;
        q.push(mp(fire[i].first,fire[i].second));
        f_vis[fire[i].first][fire[i].second] = 1;
    }

    while(!q.empty()){
        int w1 = q.front().first , w2 = q.front().second;
        q.pop();
        for(int i = 0 ; i < 4 ; i++){
            int nw1 = w1+dx[i];
            int nw2 = w2+dy[i];
            if(boundary(nw1,nw2) && f_vis[nw1][nw2] == -1 && graph[nw1][nw2] != '#'){
                f_vis[nw1][nw2] = 1;
                q.push(mp(nw1,nw2));
                f_cost[nw1][nw2] = min ( f_cost[nw1][nw2] , f_cost[w1][w2] + 1);
            }
        }
    }
}

int Jane_BFS(){
    queue<pair<int ,int> >q;
    q.push(mp(jx,jy));
    j_vis[jx][jy] = 1;
    j_cost[jx][jy] = 0;
    while(!q.empty()){
        int w1 = q.front().first , w2 = q.front().second;
        if(corner(w1,w2)){
            if(f_cost[w1][w2] > j_cost[w1][w2]){
                while(!q.empty()){
                    q.pop();
                }
                jx = w1 ;
                jy = w2;
                return 1;
            }
        }
        q.pop();
        for(int i = 0 ; i < 4 ; i++){
            int nw1 = w1+dx[i];
            int nw2 = w2+dy[i];
            if(boundary(nw1,nw2) && j_vis[nw1][nw2] == -1 && graph[nw1][nw2] != '#'){
                j_vis[nw1][nw2] = 1;
                q.push(mp(nw1,nw2));
                j_cost[nw1][nw2] = min ( j_cost[nw1][nw2] , j_cost[w1][w2] + 1);
            }
        }
    }
return 0;
}
void clean(){
    for(int i = 0 ; i < R ; i++){
        for(int j = 0 ; j < C ; j++){
            j_vis[i][j] = -1;
            f_vis[i][j] = -1;
            f_cost[i][j] = INT_MAX;
            j_cost[i][j] = INT_MAX;
        }
    }
    fire.clear();
}
int boundary(int x , int y){
    if(x<0 || x >= R || y < 0 || y >= C){
        return 0;
    }
    return 1;
}
int corner(int x , int y){
    if(x==0 || x == R-1 || y == 0 || y == C-1){
        return 1;
    }
    return 0;
}
