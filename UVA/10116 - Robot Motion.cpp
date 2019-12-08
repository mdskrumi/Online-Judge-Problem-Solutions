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
inline int Get_i(char x);
void SOLVE();
inline int boundary(int x , int y);
/*-----------------------------------Variables-----------------------------------------*/
int n , m , s;
char grid[12][12];
int step[12][12];
int vis[12][12];
int dx[] = { -1,1, 0, 0};
int dy[] = { 0, 0, 1, -1};

int main(){
        //Taking;Making;
        while(sf("%d%d%d",&n,&m,&s)&& n ){
            cin.ignore();
            clean();
            for(int i = 1 ; i <= n ; i++){
                for(int j = 1 ; j <= m ; j++){
                    sf("%c",&grid[i][j]);
                }cin.ignore();
            }
            SOLVE();
        }

return 0;
}
void SOLVE(){
    int st = 0;
    int x = 1 , y = s;
  //  cout << "START AT : " << grid[x][y] <<endl;
    vis[x][y] = 1;
    while(1){
        int i = Get_i(grid[x][y]);
        x = x + dx[i];
        y = y + dy[i];
       // cout << x  << " " << y <<endl;
       // cout << "NOW AT " << grid[x][y] <<endl;
        if(!boundary(x,y)){
            pf("%d step(s) to exit\n",st+1);
            return;
        }
        if(vis[x][y]==1){
            pf("%d step(s) before a loop of %d step(s)\n",step[x][y] ,st-step[x][y]+1);
            return;
        }
        else{
            step[x][y] = ++st;
            vis[x][y] = 1;
        }
    }
}

void clean(){
    for(int i = 0 ; i <= n ; i++){
        for(int j = 0 ; j <= m ; j++){
            vis[i][j] = -1;
            step[i][j] = 0;
        }
    }
}
inline int Get_i(char x){
    if(x =='N')
        return 0;
    else if(x =='S')
        return 1;
    else if(x =='E')
        return 2;
    return 3;
}
inline int boundary(int x , int y){
    if(x < 1 || x > n || y < 1 || y > m){
        return 0;
    }
    return 1;
}
