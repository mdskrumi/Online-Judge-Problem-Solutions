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
int n , m , s , facing , ini_x , ini_y , ans ;
char grid[102][102];
int vis[102][102];
int dx[] = {-1, 0, 1, 0};
int dy[] = { 0, 1, 0,-1};

int main(){
        //Taking;Making;
        while(sf("%d%d%d",&n,&m,&s)&& n ){
            cin.ignore();
            clean();
            for(int i = 1 ; i <= n ; i++){
                for(int j = 1 ; j <= m ; j++){
                    sf("%c",&grid[i][j]);
                    if(grid[i][j]=='N'||grid[i][j]=='S'||grid[i][j]=='L'||grid[i][j]=='O'){
                        facing = Get_i(grid[i][j]);
                        ini_x = i;
                        ini_y = j;
                    }
                }cin.ignore();
            }
            ans = 0;
            SOLVE();
            pf("%d\n",ans);
        }

return 0;
}
void SOLVE(){
    string command;
  //  cout << "COMMAND : ";
    cin >> command;

    for(int i = 0 ; i < command.size() ; i++){
      //  cout << "COMMAND IS " << command[i] ;
        if(command[i]=='D'){
            facing = (facing+1)%4;
          //  cout << " NOW Facing IS " << facing << " (" << dx[facing]<<" " << dy[facing] << ")" <<endl;
        }
        else if(command[i]=='E'){
            facing = (4 + facing - 1)%4;
         //   cout << " NOW Facing IS " << facing <<endl;
        }
        else if(command[i]=='F'){
            int now_x = ini_x+dx[facing];
            int now_y = ini_y+dy[facing];
            //cout << " WAS AT " << ini_x << " " << ini_y << " - " << grid[ini_x][ini_y] <<  "----> NOW AT " << now_x << " " << now_y << " - " << grid[now_x][now_y] <<endl;
            if(boundary(now_x,now_y)&&grid[now_x][now_y]!='#'){
                ini_x = now_x;
                ini_y = now_y;
                if(grid[now_x][now_y]=='*'){
                    ans++;
                    grid[now_x][now_y]='.';
                }
              //  cout << "ANSWER TILL NOW IS : " << ans <<endl;
            }
        }//cout <<endl <<endl;
    }

}

void clean(){
    for(int i = 0 ; i <= n ; i++){
        for(int j = 0 ; j <= m ; j++){
            vis[i][j] = -1;
            grid[i][j] = '.';
        }
    }
}
inline int Get_i(char x){
    if(x =='N')
        return 0;
    if(x =='S')
        return 2;
    if(x =='L')
        return 1;
    return 3;
}
inline int boundary(int x , int y){
    if(x < 1 || x > n || y < 1 || y > m){
        return 0;
    }
    return 1;
}
