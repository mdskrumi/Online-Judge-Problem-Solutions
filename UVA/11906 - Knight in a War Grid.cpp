#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define pb push_back
#define mp make_pair
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;
/*-----------------------------------FUNCTIONS-----------------------------------------*/
void solve();
void clean();
int boundary(int x , int y);
void p();
/*-----------------------------------Variables-----------------------------------------*/
int dx[8] ;
int dy[8] ;
int r , c , m , n , w , range ;
int odd , even;
char graph[102][102];
char vis[102][102];int kase = 1;
int main(){
        //Taking;Making;
        int t ;

        sf("%d",&t);
        while(t--){
            sf("%d%d%d%d",&r,&c,&m,&n);
            clean();
            sf("%d",&w);
            for(int i = 0 ; i < w ;i++){
                int x , y;
                sf("%d%d",&x,&y);
                graph[x][y] = 'W';
            }
            even = odd = 0;
            solve();
        }
return 0;
}
void solve(){

    queue<pair <int , int> >q;
    q.push(mp(0,0));
    vis[0][0] = 'T';
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        int can = 0;
      //  cout << "COMING FROM " << x << " " << y <<endl;
        for(int i = 0 ; i < range ; i++){
            int nx = x+dx[i];
            int ny = y+dy[i];
            if(!boundary(nx,ny) || graph[nx][ny] =='W' )continue;
       // cout << "\t\tGOING TO " << nx << " " << ny <<endl;
            if(vis[nx][ny]!='T'){
                q.push(mp(nx,ny));
                vis[nx][ny]='T';
            }
            can++;
            graph[nx][ny] = '-';
        }
        if(can%2==0){
            even++;
            graph[x][y] = 'E';
        }else {
            odd++;
            graph[x][y] = 'O';
        }
    }
    pf("Case %d: %d %d\n",kase++,even,odd);

}

void clean(){
    memset(graph , '.' , sizeof graph);
    memset(vis , 'F' , sizeof vis);
   if(m!=n && n!=0 && m !=0){
        range = 8;
        dx[0] = m;
        dy[0] = n;

        dx[1] = m;
        dy[1] = -n;

        dx[2] = -m;
        dy[2] = n;

        dx[3] = -m;
        dy[3] = -n;

        dx[4] = n;
        dy[4] = m;

        dx[5] = n;
        dy[5] = -m;

        dx[6] = -n;
        dy[6] = m;

        dx[7] = -n;
        dy[7] = -m;
   }
   else if(m==n){
        dx[0] = m;
        dy[0] = n;

        dx[1] = m;
        dy[1] = -n;

        dx[2] = -m;
        dy[2] = n;

        dx[3] = -m;
        dy[3] = -n;
        range = 4;
   }
   else{
        dx[0] = m;
        dy[0] = n;

        dx[1] = m;
        dy[1] = -n;

        dx[2] = n;
        dy[2] = m;

        dx[3] = -n;
        dy[3] = -m;
        range = 4;
   }
}
int boundary(int x , int y){
    if(x<0 || x >= r || y < 0 || y >= c){
        return 0;
    }
    return 1;

}
void p(){
    for (int i = 0 ; i < n ; i ++){
        for(int j = 0 ; j < m ; j++){
            cout << graph[i][j];
        }puts("");
    }
}
