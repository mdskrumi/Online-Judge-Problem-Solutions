#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define pb push_back
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;
void dj();
int n , m ;
vector< pair<int,int> >v[101];
int cost[101];
int bul[101];
int main(){
        Taking;Making;
        int t, kase = 1;
        sf("%d",&t);
        while(t--){
            sf("%d%d",&n,&m);
            for(int i = 0 ; i <= n ; i++){
                v[i].clear();
                cost[i] = 10000000;
                bul[i] = 'f';
            }
            cost[1]=0;
            bul[1]='t';

            for(int i = 0 ; i < m ; i++){
                int x , y , z;
                sf("%d%d%d",&x,&y,&z);
                v[x].push_back(make_pair(y,z));
                v[y].push_back(make_pair(x,z));
            }
            dj();
            if(bul[n]=='t'){
                pf("Case %d: %d\n",kase++,cost[n]);
            }
            else{
                pf("Case %d: Impossible\n",kase++);
            }
        }
return 0;
}
void dj(){
    stack<int>s;
    s.push(1);
    while(!s.empty()){
        int u = s.top();
        bul[u]='t';
        int pp = 0;
        //cout << "COST OF " << u << " IS " << cost[u] <<endl;
        for(int i = 0 ; i < v[u].size() ; i++){
                if(cost[v[u][i].first] > cost[u] + v[u][i].second){
                    cost[v[u][i].first] = cost[u] + v[u][i].second;
                    s.push(v[u][i].first);
                    pp=1;
                    //cout << "COST OF " << v[u][i].first << " IS " << cost[v[u][i].first] <<endl;
                }
        }
        if(pp==0){
            s.pop();
        }
    }
}
