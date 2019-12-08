#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define pb push_back
#define mp make_pair
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;
/*-----------------------------------FUNCTIONS-----------------------------------------*/
void initialing();
/*-----------------------------------Variables-----------------------------------------*/
char graph[250][250];
int cost[250][250];
int dx[] = {0 , 0 , -1 , 1};
int dy[] = {1 , -1 , 0 , 0};

int main(){
        //Taking;Making;
        initialing();
        string s;
        cin >> s;
        int x = 125 , y = 125;
        graph[x][y] = 'S';
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == 'U'){
                x--;
            }
            else if(s[i] == 'D'){
                x++;
            }
            else if(s[i] == 'L'){
                y--;
            }
            else if(s[i] == 'R'){
                y++;
            }
            graph[x][y] = '.';
        }
      /*  for(int i = 0 ; i < 250 ; i++){
            for(int j = 0 ; j < 250 ; j++){
                cout << graph[i][j];
            }cout << endl;
        }*/
        queue<pair<int , int > > q;
        q.push(mp(125,125));
        cost[125][125] = 0;
        while(!q.empty()){
            int wx = q.front().first;
            int wy = q.front().second;
            //cout << "COMING FROM : " << wx << " " << wy <<endl;
            q.pop();
            for(int i = 0 ; i < 4 ; i++){
                int nwx = wx + dx[i];
                int nwy = wy + dy[i];
                if(graph[nwx][nwy]== '.' && cost[nwx][nwy] > cost[wx][wy]+1){
                   // cout << "GOING TO  : " << nwx << " " << nwy <<endl;
                    q.push(mp(nwx,nwy));
                    cost[nwx][nwy] = cost[wx][wy] + 1;
                    if(nwx==x && nwy==y){
                     //   cout << "COST : " << cost[x][y] <<endl;
                        if(s.size() == cost[x][y]){
                            puts("OK");
                        }
                        else{
                            puts("BUG");
                        }
                        return 0;
                    }
                }
            }
        }
        puts("BUG");
return 0;
}
void initialing(){
    for(int i = 0 ; i < 250 ; i++){
        for(int j = 0 ; j < 250 ; j++){
            cost[i][j] = INT_MAX;
            graph[i][j]='#';
        }
    }
}
