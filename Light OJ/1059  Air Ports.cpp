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
void K_MST();
struct edge{
    int w,u,v;
};
bool operator<(edge ed1 , edge ed2){
    return ed1.w < ed2.w;
}
/*-----------------------------------Variables-----------------------------------------*/
int n , m , a;
vector<edge>v;
vector<edge>ans;
int parent[10002];


int main(){
        //Taking;Making;
        int t , kase = 1;
        sf("%d",&t);
        while(t--){
            sf("%d%d%d",&n,&m,&a);
            make_parent();
            for(int i = 0 ; i < m ; i++){
                edge ed;
                sf("%d%d%d",&ed.u,&ed.v,&ed.w);
                v.pb(ed);
            }
            sort(v.begin(),v.end());
          /*  for(int i = 0 ; i < v.size();i++){
                cout << v[i].w << " " << v[i].u << " "  << v[i].v <<endl;
            }*/
            K_MST();
            int required_airport = 0 , cost = 0;
            for(int i = 0 ; i < ans.size() ; i++){
                if(ans[i].w>=a){
                    required_airport++;
                }
                else{
                    cost+=ans[i].w;
                }
            }
            for(int i = 1 ; i <= n ; i++){
               // cout << i+1 << "'s parent is " << parent[i+1] <<endl;
                if(parent[i] == i){
                    required_airport++;
                }
            }
            pf("Case %d: %d %d\n",kase++,cost+(required_airport*a) , required_airport);
            v.clear();
            ans.clear();
        }
return 0;
}
void make_parent(){
    for(int i = 1 ; i <= n ; i++){
        parent[i] = i;
    }
}
int find_parent(int a){
    if(a != parent[a]){
        return find_parent(parent[a]);
    }else{
        return a;
    }
}
void K_MST(){
    int taken_edge = 0;
    for(int i = 0 ; i < v.size() ; i++){
        int x = find_parent(v[i].u);
        int y = find_parent(v[i].v);
        if(x != y){
            parent[y] = x;
            taken_edge++;
            ans.pb(v[i]);
        }
        if(taken_edge==n-1){
            return;
        }
    }

}

