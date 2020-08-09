#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define pb push_back
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;


void faka();
int bfs(int x , int y);


vector<string>v;
vector<pair <int , int> >skip;
int dp[505][505];
int visited[505][505];
int dx[] = {1 , -1 , 0 , 0};
int dy[] = {0 , 0 , 1 , -1};
int n , m , q;

int main(){
        //Taking;Making;
        int t,kase = 1;
        sf("%d",&t);
        while(t--){
            faka();
            sf("%d%d%d",&n,&m,&q);
            cin.ignore();
            string temp;
            for(int i = 1 ; i <= n; i++){
                cin >> temp;
                v.push_back(temp);
            }
            pf("Case %d:\n",kase++);
            for(int i = 0 ; i < q ; i++){
                int x , y;
                sf("%d%d",&x,&y);
                x--;
                y--;
                if(visited[x][y] == 1){
                    pf("%d\n",dp[x][y]);
                }
                else{
                    skip.pb(make_pair(x,y));
                    int ans = bfs(x,y);
                    for(int i = 0 ; i < skip.size();i++){
                        dp[skip[i].first][skip[i].second] = ans;
                    }
                    skip.clear();
                    pf("%d\n",dp[x][y]);
                }
            }


        }
return 0;
}
int bfs(int x , int y){
    int weed = 0;
    queue<pair<int , int > >q;
    q.push(make_pair(x,y));
    while(!q.empty()){
        int wx = q.front().first;
        int wy = q.front().second;
        q.pop();
        visited[wx][wy] = 1;
        for(int i = 0 ; i < 4 ; i++){
            int nwx = wx + dx[i];
            int nwy = wy + dy[i];
            if(( nwx >= 0 && nwx < n) && (nwy >= 0 && nwy < m ) && visited[nwx][nwy] != 1 && v[nwx][nwy] != '#'){
                q.push(make_pair(nwx,nwy));
                visited[nwx][nwy] = 1;
                skip.pb(make_pair(nwx,nwy));
                if(v[nwx][nwy] == 'C'){
                    weed++;
                }
            }
        }
    }
    return weed;
}
void faka(){
    v.clear();
    memset(dp,-1,sizeof dp);
    memset(visited,-1,sizeof visited);

}
