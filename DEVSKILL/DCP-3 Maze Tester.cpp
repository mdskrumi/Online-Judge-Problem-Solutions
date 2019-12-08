#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;

int BFS(int x1 , int x2 , int y1 , int y2);

int dx[4] = {0 , 0 , 1 , -1};
int dy[4] = {1 , -1 , 0 , 0};


vector<string>G;
int visited[31][31];

int main(){
       // Taking;Making;

        string line;

        while(cin >> line){
            G.push_back(line);
            for(int i = 0 ; i < 29 ; i++){
                cin >> line;
                G.push_back(line);
            }
            int x1 , x2 , y1 , y2;
            for(int i = 0 ; i < 30 ; i++){
                for(int j = 0 ; j < 30 ; j++){
                    if(G[i][j]=='P'){
                        x1 = i;
                        y1 = j;
                    }
                    if(G[i][j]=='G'){
                        x2 = i;
                        y2 = j;
                    }
                    visited[i][j] = -1;
                }
            }
            int ans = BFS(x1 , x2 , y1 , y2);

          /*  for(int i = 0 ; i < 30 ; i++){
                for(int j = 0 ; j < 30 ; j++){
                    cout << G[i][j];
                }puts("");
            }
*/

            if(ans==1){
                puts("Possible");
            }
            else{
                puts("Impossible");
            }
            G.clear();
        }


return 0;
}
int BFS(int x1 , int x2 , int y1 , int y2){

    queue<pair<int ,int> >q;
    q.push(make_pair(x1,y1));

    while(!q.empty()){
        int Wx = q.front().first;
        int Wy = q.front().second;
        q.pop();
        visited[Wx][Wy] = 1;
        for(int i = 0 ; i < 4 ; i++){
            if(visited[Wx+dx[i]][Wy+dy[i]] != 1 && (G[Wx+dx[i]][Wy+dy[i]] == '.' || G[Wx+dx[i]][Wy+dy[i]] == 'G')){
                q.push(make_pair(Wx+dx[i],Wy+dy[i]));
                visited[Wx+dx[i]][Wy+dy[i]] = 1;
               // G[Wx+dx[i]][Wy+dy[i]] = '~';
            }
            if(visited[x2][y2] == 1){
                return 1;
            }
        }
    }
return 0;
}
