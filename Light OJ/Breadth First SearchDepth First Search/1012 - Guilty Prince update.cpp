#include <bits/stdc++.h>
using namespace std;

#define BOLT ios_base::sync_with_stdio(0)
#define newline cout << "\n"
#define eline cerr << "\n"
#define LL_MAX 9223372036854775807
#define LL_MIN -9223372036854775808
#define PI acos(-1)
#define IN_FILE freopen("input.txt", "r", stdin)
#define OUT_FILE freopen("output.txt", "w", stdout)

// g++ -o contest contest.cpp


void USEFILE(){
    IN_FILE;
    OUT_FILE;
}

int dx[] = {0 , 0 , 1 , -1};
int dy[] = {1 , -1 , 0 , 0};
int vis[25];


void solve(int kase){
    int w , h;
    cin >> w >> h;
    char graph[h][w];
    int x,y;
    for(int i = 0 ; i < h ; i++){
        for(int j = 0 ; j < w ; j++){
            cin >> graph[i][j];
            if(graph[i][j] == '@'){
                x = i;
                y = j;
            }
        }
    }
    int ans = 1;
    queue<pair<int,int> >q;
    q.push({x,y});

    while(!q.empty()){
        int a = q.front().first;
        int b = q.front().second;
        q.pop();
        graph[a][b] = '#';
        for(int i = 0 ; i < 4 ; i++){
            int na = a + dx[i];
            int nb = b + dy[i];
            if(graph[na][nb] != '#' && na >= 0 && na < h && nb >=0 && nb < w){
                graph[na][nb] = '#';
                ans++;
                q.push({na,nb});
            }
        }
    }
    cout << "Case " << kase++ << ": "; 
    cout << ans; newline;

}

int main(){
    BOLT;
    // USEFILE();
    int t, kase = 0;
    cin >> t;
    cin.ignore();
    while(t--)
         solve(++kase);
    // solve(0);

return 0;
}
