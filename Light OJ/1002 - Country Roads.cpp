#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;

void MST(int s);

vector<pair<int , int> > node[502];
int ans[502];
int visited[502];
int n , m;


int main(){
   // Taking;Making;
    int t, kase = 1;
    sf("%d",&t);
    while(t--){
        sf("%d%d",&n,&m);
        for(int i = 0 ; i < n; i++){
            visited[i]=0;
            ans[i] = -1;
            node[i].clear();
        }
        for(int i = 0 ; i < m ; i++){
            int x , y , w;
            sf("%d%d%d",&x,&y,&w);
            node[x].push_back(make_pair(y,w));
            node[y].push_back(make_pair(x,w));
        }
        int s;
        sf("%d",&s);
        MST(s);

        //Printing Output
        printf("Case %d:\n",kase++);
        for(int i = 0 ; i < n ; i++){
            if(ans[i]!=-1)printf("%d\n",ans[i]);
            else puts("Impossible");
        }


    }

return 0;
}
void MST(int s){
    vector<int>v;
    v.push_back(s);
    visited[s] = 1;
    while(1){
        int c = 200005 , x = -1 , y = -1;
        for(int i = 0 ; i < v.size(); i++){
            for(int j = 0 ; j < node[v[i]].size() ; j++){
                if(visited[node[v[i]][j].first]==1){
                    continue;
                }
                if(node[v[i]][j].second < c){
                    c = node[v[i]][j].second;
                    x = v[i];
                    y = node[v[i]][j].first;
                }
            }
        }
        if(x ==-1){
            break;
        }
        ans[y] = max(ans[x],c);
        visited[y]=1;
        v.push_back(y);
    }
    ans[s] = 0;
    v.clear();
}
