#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define pb push_back
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;

pair<int , int> find_home();
void clean();
void bfs();

vector<string> cell;
int cost[21][21];
int visited[21][21];
queue<pair <int , int > >q;
int dx[] = { 0 , 0 , 1 , -1};
int dy[] = { 1 , -1 , 0 , 0};
int x , y , a1,a2 , b1,b2 ,c1,c2;

int main(){
        //Taking;Making;
        int t , kase = 1;
        sf("%d",&t);
        while(t--){
            clean();
            sf("%d%d",&x,&y);
            cin.ignore();
            for(int i = 0 ; i < x ; i++){
                string asd;
                cin >> asd;
                cell.pb(asd);
            }
            bfs();
            pf("Case %d: %d\n",kase++,max(cost[a1][a2],max(cost[b1][b2],cost[c1][c2])));
        }
return 0;
}
void bfs(){
    q.push(find_home());
    while(!q.empty()){
        int wx = q.front().first;
        int wy = q.front().second;
        q.pop();
        visited[wx][wy] = 1;
        for(int i = 0 ; i < 4 ; i++){
            int xx = wx+dx[i];
            int yy = wy+dy[i];
            if(cell[xx][yy]=='#' || cell[xx][yy]== 'm' || visited[xx][yy]== 1 || xx < 0 || xx >= x || yy< 0 || yy>=y ){
                continue;
            }
            q.push(make_pair(xx,yy));
            visited[xx][yy]= 1;
            cost[xx][yy] = cost[wx][wy] + 1;
        }

    }

}
void clean(){
    for(int i = 0 ; i < 21 ; i++){
        for(int j = 0 ; j < 21 ; j++){
            visited[i][j] = -1;
            cost[i][j] = -1;
        }
    }cell.clear();
}
pair<int , int> find_home(){
    int m , n;
    for(int i = 0 ; i < x ; i++){
        for(int j = 0; j < y; j++){
            if(cell[i][j]=='h'){
                m = i;
                n = j;
            }
            if(cell[i][j]=='a'){
                a1 = i;
                a2 = j;
            }
            if(cell[i][j]=='b'){
                b1 = i;
                b2 = j;
            }
            if(cell[i][j]=='c'){
                c1 = i;
                c2 = j;
            }
        }
    }
cost[m][n] = 0;
return make_pair(m,n);
}
