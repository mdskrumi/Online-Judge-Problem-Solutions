#include<bits/stdc++.h>,
#include<ctype.h>
#include<string.h>

#include<stdio.h>

#define TAKING         freopen("input.txt" , "r" , stdin);
#define MAKING         freopen("output.txt","w" , stdout);

#define     sf         scanf
#define     pf         printf
#define     pb         push_back
#define     mp         make_pair
#define     DOS        10000000000
#define     nl         "\n"
#define     BOLT       ios_base::sync_with_stdio(0)

#define     all(x)     x.begin(), x.end()
#define     rall(x)    x.rbegin(), x.rend()
#define     fi         first
#define     se         second
#define     sz(v)      (int)(v).size()

using namespace std;


typedef vector <int> 	   	 vi;
typedef pair <int,long long> 	pii;

int dx4[] = {0 , 0 , 1 , -1};
int dy4[] = {1 , -1 , 0 , 0};



/*
vector<pair<int ,long long> >graph[100000+5];
long long cost[100000+5];
int parent[100000+5];

void clean(int n){
    for(int i = 0 ; i <= n ; i++){
        graph[i].clear();
        cost[i] = 100000000000000000;
        parent[i] = i;
    }
}

void dijkstra(int s){
    cost[s] = 0;
    priority_queue< pii , vector<pii> , greater<pii> >q;
    q.push({0,s});
    while(!q.empty()){
        int u = q.top().second;
        q.pop();
        //cout << "FROM : " << u << nl;
        for(int i = 0 ; i < graph[u].size() ; i++){
            if(cost[graph[u][i].first] > cost[u] + graph[u][i].second){
                cost[graph[u][i].first] = cost[u] + graph[u][i].second;
                q.push({cost[graph[u][i].first],graph[u][i].first});
                parent[graph[u][i].first] = u;

              //  cout << "TO : " << graph[u][i].first << " COST = " << cost[graph[u][i].first] << "---parent of " << graph[u][i].first << " is " << u << nl;
            }
        }
    }
}
stack<int> get_road_from(int d){
    stack<int>road;
    road.push(d);
    while(parent[d] != d){
        d = parent[d];
        road.push(d);
    }
return road;
}
*/
int main(){
    BOLT;
   // TAKING;
    int t;
    vector<vector<pair <int , int> > >g;
    cin >> t;
    while(t--){
        int n , m;
        cin >> n >> m;
        for(int i = 0 ; i < n ; i++){
            vector<pair <int , int> >row;
            for(int j = 0 ; j < m ; j++){
                int x;
                cin >> x;
                row.pb({x,INT_MAX});
            }
            g.pb(row);
            row.clear();
        }
        g[0][0].second = g[0][0].first;

      //  cout << g[0][0].first ;

        priority_queue< pair<int , pair < int , int > > , vector<pair<int , pair < int , int > > > , greater<pair<int , pair < int , int > > > > q;
        q.push({0,{0,0}});

        while(!q.empty()){
            int x = q.top().second.first;
            int y = q.top().second.second;
            q.pop();
            for(int i = 0 ; i < 4 ; i++ ){
                int nx = x + dx4[i];
                int ny = y + dy4[i];
                if(nx>=n || ny >= m || nx < 0 || ny < 0) continue;
                if(g[nx][ny].second > g[x][y].second +g[nx][ny].first ){
                    g[nx][ny].second = g[x][y].second +g[nx][ny].first;
                    q.push({g[nx][ny].second , {nx,ny} });
                }
            }
        }
        cout << g[n-1][m-1].second << nl;
        g.clear();

    }




return 0;
}



