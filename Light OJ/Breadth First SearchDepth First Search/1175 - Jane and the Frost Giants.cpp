#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define pb push_back
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;

void bfs1(int a , int b);
void bfs2();
void clean();

vector<string> cell;
int j_cost[201][201],f_cost[201][201];
int visited[201][201];
int visited2[201][201];
queue<pair <int , int > >q;
queue<pair <int , int > >q_fire;

int dx[] = { 0 , 0 , 1 , -1};
int dy[] = { 1 , -1 , 0 , 0};
int x , y;

int main(){
        //Taking;Making;
        int t,kase = 1;
        sf("%d",&t);
        while(t--){
            clean();
            sf("%d%d",&x,&y);
            cin.ignore();
            int jx , jy;
            for(int i = 0 ; i < x ; i++){
                    string asd;
                    cin >> asd;
                    cell.push_back(asd);
            }
            for(int i = 0 ; i < cell.size() ; i++){
                for(int j = 0 ; j < y ; j++ ){
                    if(cell[i][j] == 'J'){
                        jx = i;
                        jy = j;
                    }
                    if(cell[i][j] == 'F'){
                        q_fire.push(make_pair(i,j));
                        f_cost[i][j] = 0;
                    }
                }
            }
            pf("Case %d: ",kase++);
            bfs1(jx,jy);
            bfs2();

           /* for(int i = 0 ; i < cell.size() ; i++){
                for(int j = 0 ; j < y ; j++ ){
                        cout << f_cost[i][j] << " ";
                }
                puts("");
            }puts("");*/


            int ans = 100000;
                for(int j = 0 ; j < y ; j++){
                    if(j_cost[0][j] < f_cost[0][j]){
                        ans = min(ans,j_cost[0][j]);
                    }
                    if(j_cost[x-1][j] < f_cost[x-1][j]){
                        ans = min(ans,j_cost[x-1][j]);
                    }

                }
                for(int j = 0 ; j < y ; j++){
                    if(j_cost[j][0] < f_cost[j][0]){
                        ans = min(ans,j_cost[j][0]);
                    }
                    if(j_cost[j][y-1] < f_cost[j][y-1]){
                        ans = min(ans,j_cost[j][y-1]);
                    }
                }
                    if(ans != 100000)pf("%d\n",++ans);
                    else puts("IMPOSSIBLE");

        }
return 0;
}
void bfs1(int a , int b){
    q.push(make_pair(a,b));
    j_cost[a][b] = 0;
    while(!q.empty()){
        int wx = q.front().first;
        int wy = q.front().second;
        visited[wx][wy] = 1 ;
        q.pop();
        for(int i = 0 ; i < 4 ; i++){
            int nwx = wx+dx[i];
            int nwy = wy+dy[i];
            if( (nwx < 0 || nwx >= x || nwy < 0 || nwy >= y) || visited[nwx][nwy] == 1 || cell[nwx][nwy]=='#'){
                    continue;
            }
            q.push(make_pair(nwx,nwy));
            visited[nwx][nwy] = 1;
            j_cost[nwx][nwy] = j_cost[wx][wy] + 1;
        }
    }
}
void bfs2(){
    while(!q_fire.empty()){
        int wx = q_fire.front().first;
        int wy = q_fire.front().second;
        visited2[wx][wy] = 1 ;
        q_fire.pop();
        for(int i = 0 ; i < 4 ; i++){
            int nwx = wx+dx[i];
            int nwy = wy+dy[i];
            if( (nwx < 0 || nwx >= x || nwy < 0 || nwy >= y) || visited2[nwx][nwy] == 1 || cell[nwx][nwy]=='#'){
                    continue;
            }
            q_fire.push(make_pair(nwx,nwy));
            visited2[nwx][nwy] = 1;
            f_cost[nwx][nwy] = f_cost[wx][wy] + 1;
        }
    }
}
void clean(){
    for(int i = 0 ; i < 201 ; i++){
        for(int j = 0; j < 201 ; j++){
            visited[i][j] = -1;
            visited2[i][j] = -1;
            f_cost[i][j] =  100000;
            j_cost[i][j] =  100000;
        }
    }cell.clear();
}
