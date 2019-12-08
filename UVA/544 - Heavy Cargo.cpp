#include<bits/stdc++.h>
using namespace std;

void letsgoo(string a , string b);
int follow_the_road(string a,string b);

map<string, int>m;
map<string, int>::iterator mt;
queue<int>q;


vector<int>v;
int cost[205][205] = {0} , n;
int visited[205] = {0};

int G[205][205];

int main(){

        int  e , c , kase = 1;
        while(scanf("%d%d",&n,&e) && n != 0 && e!=0){
            c = 0;
            for(int i = 0 ; i < 205 ; i++){
                for(int j = 0 ; j < 205;j++ ){
                    G[i][j] = 0;
                    cost[i][j] = 0;
                }
                visited[i] = 0;
            }
            string a , b ;
            int w ;
            cin.ignore();
            for(int i = 0 ; i < e ; i++){
                cin >> a >> b >> w;
                mt = m.find(a);
                if(mt == m.end()){
                    m.insert({a,c});
                    c++;
                }
                mt = m.find(b);
                if(mt == m.end()){
                    m.insert({b,c});
                    c++;
                }
                if(cost[m[a]][m[b]] < w){
                    cost[m[a]][m[b]] = w;
                    cost[m[b]][m[a]] = w;
                }
            }

          /*  for(mt = m.begin() ; mt!=m.end() ; mt++){
                cout << mt->first << "      " << mt->second << endl;
            }
*/
            cin >> a >> b;
            letsgoo( a ,  b);

        /*    for(int i = 0 ; i < n ; i++){
                cout << "ROW " << i  << ": ";
                for(int j = 0 ; j < n ; j++){
                    cout << " " <<G[i][j];
                }
                cout << endl;
            }*/

            printf("Scenario #%d\n%d tons\n\n",kase++,follow_the_road(a,b));
            m.clear();



        }
return 0;
}
void letsgoo(string a , string b){
    int ans = -1;
   v.push_back(m[a]);
   visited[m[a]] = 1;
   while(v.size()!=n){
        int x , y;
        int up = -1;
        for(int i = 0 ; i < v.size(); i++){
       //     cout << "COMING FROM " << v[i] <<endl;
            for(int j = 0 ; j < n ; j++){
                if(cost[v[i]][j] == 0 || visited[j] == 1 ){
                    continue;
                }
          //      cout << "GOING TO " << j << " COST OF IT " << cost[v[i]][j] <<endl;
                if(cost[v[i]][j] > up){
                    x = v[i];
                    y = j;
                    up = cost[v[i]][j];
                }
            }
        }
     //   cout << "SELECTED : " << x  << " TO " << y << " COST " << up <<endl;
        if(ans < up){
            ans = up;
        }
        G[x][y] = up;
        G[y][x]= up;
        v.push_back(y);
        visited[y]=1;
        if(visited[m[b]]== 1){
            break;
        }
   }
v.clear();
}
int follow_the_road(string a,string b){
    int fcost[205] , vis[205];

    for(int i = 0 ; i < 205 ; i++){
        fcost[i] = 1000000;
        vis[i] = -1;
    }

    q.push(m[a]);

    while(!q.empty()){
        int working = q.front();
        q.pop();
        vis[working] = 1;
       // cout << "GOING from : " << working <<endl;
        for(int i = 0 ; i < n ; i++){
            if(G[working][i]==0){
                continue;
            }
            if(vis[i]!=1){
                q.push(i);
            }
            fcost[i] = min(fcost[working] , G[working][i]);
           // cout << "          Going to " << i << "  COST : " << fcost[i] <<endl;;
        }
    }
return fcost[m[b]];
}



