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
int K_MST();

/*-----------------------------------Variables-----------------------------------------*/
int n , m;
vector<edge>v;
int parent[200002];


int main(){
    //Taking;Making;
    while(sf("%d%d",&n,&m) && (n != 0 && m!= 0) ){
        int O_cost = 0;
        for(int i = 0 ; i < m ; i++){
            edge ed;
            sf("%d%d%d",&ed.u,&ed.v,&ed.w);
            v.pb(ed);
            O_cost += ed.w;
        }
        make_parent();
        int cost = K_MST();
        pf("%d\n",O_cost-cost);
        v.clear();
    }

return 0;
}
void make_parent(){
    for(int i = 0 ; i < n ; i++){
        parent[i] = i;
    }
}
int find_parent(int a){
    if(parent[a] == a){
        return a;
    }
    return find_parent(parent[a]);
}
int K_MST(){
    sort(v.begin(),v.end());
    int Taken_edge = 0 , cost = 0;
    for(int i = 0 ; i < v.size() ; i++){
        int x = find_parent(v[i].u);
        int y = find_parent(v[i].v);
        if(x != y){
            parent[y] = x;
            Taken_edge++;
            cost+=v[i].w;
        }
        if(Taken_edge == n-1){
            break;
        }
    }
return cost;
}
