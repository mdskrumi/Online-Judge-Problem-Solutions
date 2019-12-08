#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define pb push_back
#define mp make_pair
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;
/*-----------------------------------FUNCTIONS-----------------------------------------*/
int vis[150002];
int out[150002] ;
vector<int>v[150001];
int solve(int i);
/*----------------------------------Variables-----------------------------------------*/
int main(){
        //Taking;Making;
        int n , m;
        cin >> n >> m;
        for(int i = 0 ; i <= n ; i++){
            vis[i] = out[i] = 0;
        }
        for(int i = 0 ; i < m ; i++){
            int x , y;
            cin >> x >> y;
            v[y].pb(x);
            v[x].pb(y);
            out[x]++;
            out[y]++;
        }

        for(int i = 1 ; i <= n; i++){
            if(vis[i] == 0){
                int c = solve(i);
                if(c == 0){
                    cout << "NO\n";
                    return 0;
                }
            }
        }
    cout << "YES\n";
return 0;
}
int solve(int u){
    set<int>tess;
    tess.clear();
    int notess = 0;
    queue<int>q;
    q.push(u);
    vis[u] = 1;
        while(!q.empty()){
            int u = q.front();
            tess.insert(u);
            q.pop();
            for(int i = 0 ; i < v[u].size() ;i++){
                if(vis[v[u][i]] != 1){
                    vis[v[u][i]] = 1;
                    q.push(v[u][i]);
                    notess++;
                }
            }
        }
        //cout << "NOTESS : "  << notess <<endl;
        for(set<int>::iterator  it = tess.begin() ; it!=tess.end() ; it++){
            if(out[*it]!=notess){
                    return 0;
            }
        }
return 1;
}
