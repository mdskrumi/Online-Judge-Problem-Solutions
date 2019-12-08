#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define pb push_back
#define mp make_pair
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;
/*-----------------------------------FUNCTIONS-----------------------------------------*/

struct edge{
    int u , v , w;
};
bool operator<(edge ed1 , edge ed2){
    return ed1.w < ed2.w;
}
void make_parent();
int find_parent(int a);
void K_MST();
/*-----------------------------------Variables-----------------------------------------*/
int n , m;
vector<edge>v;
int parent[1002];
vector<int>ans;
int main(){
        //Taking;Making;
        while(sf("%d%d",&n,&m)==2 && n != 0){
            for(int i = 0 ; i < m ; i++){
                int x , y , w;
                sf("%d%d%d",&x,&y,&w);
                edge ed;
                ed.u = x;
                ed.v = y;
                ed.w = w;
                v.pb(ed);
            }
            make_parent();
            K_MST();
            if(ans.size()>0){
                for(int i = 0 ; i < ans.size() ; i++){
                    if(i==ans.size()-1)pf("%d\n",ans[i]);
                    else pf("%d ",ans[i]);
                }
            }
            else pf("forest\n");
            v.clear();
            ans.clear();
        }

return 0;
}
void make_parent(){
    for(int i = 0 ; i < n ; i++){
        parent[i] = i;
    }
}
int find_parent(int a){
    if(parent[a]==a){
        return a;
    }
    return find_parent(parent[a]);
}
void K_MST(){
    sort(v.begin(),v.end());
    for(int i = 0 ; i < v.size() ; i++){
        int x = find_parent(v[i].u);
        int y = find_parent(v[i].v);
        if(x!=y){
            parent[y] = x;
        }
        else{
            ans.pb(v[i].w);
        }
    }
}
