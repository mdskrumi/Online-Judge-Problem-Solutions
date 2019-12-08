#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define pb push_back
#define mp make_pair
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;

/*-----------------------------------FUNCTIONS-----------------------------------------*/
void make_parent();
int find_parent(int a);
int K_MST();
struct edge{
    int u , v , w;
};
bool operator<(edge ed1 , edge ed2){
    return ed1.w < ed2.w ;
}
/*-----------------------------------Variables-----------------------------------------*/
int n , m;
vector<edge>v;
vector<edge>tempv;
int parent[201];
int main(){
        //Taking;Making;
        int t , kase = 1;
        sf("%d",&t);
        while(t--){
            sf("%d%d",&n,&m);
            pf("Case %d:\n",kase++);
            for(int i = 0 ; i < m ; i++){
                edge ed;
                sf("%d%d%d",&ed.u,&ed.v,&ed.w);
                v.pb(ed);
                make_parent();
                tempv.clear();
                int ans = K_MST();
                pf("%d\n",ans);

            }
            v.clear();
        }
return 0;
}
void make_parent(){
    for(int i = 1 ; i <= n ; i++){
        parent[i]=i;
    }
}
int find_parent(int a){
    if(parent[a]!=a){
        return find_parent(parent[a]);
    }
    return a;
}
int K_MST(){
    sort(v.begin(),v.end());
    int cost = 0,Taken_node = 0;
    for(int i = 0 ; i < v.size();i++){
        int x = find_parent(v[i].u);
        int y = find_parent(v[i].v);
        if(x != y){
            Taken_node++;
            cost+=v[i].w;
            parent[y] = x;
            tempv.pb(v[i]);
        }
        if(Taken_node == n-1){
            v = tempv;
            return cost;
        }
    }
    return -1;
}
