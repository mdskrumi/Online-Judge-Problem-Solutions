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
//void make_parent();
int find_parent(int a);
int K_MST();
/*-----------------------------------Variables-----------------------------------------*/
int n , m;
map<string , int> mymap;
vector<edge>v;
int parent[402];

int main(){
        //Taking;Making;
        while(sf("%d%d",&n,&m)==2 && n != 0){
            string name , name2;
            int c = 0;
            for(int i = 0 ; i < n ; i++){
                cin >>name;
                mymap.insert({name,c++});
                parent[i] = i;
            }
            for(int i = 0 ; i < m ; i++){
                int w;
                cin >> name >> name2 >> w;
                edge ed;
                ed.u = mymap[name];
                ed.v = mymap[name2];
                ed.w = w;
                v.pb(ed);
            }
            cin >> name;
          //  make_parent();
            int cost = K_MST();
            if(cost == -1){
                pf("Impossible\n");
            }
            else{
                pf("%d\n",cost);
            }
            v.clear();
            mymap.clear();
        }

return 0;
}
/*void make_parent(){
    for(int i = 0 ; i < n ; i++){
        parent[i] = i;
    }
}*/
int find_parent(int a){
    if(parent[a]==a){
        return a;
    }
    return find_parent(parent[a]);
}
int K_MST(){
    sort(v.begin(),v.end());
    int cost = 0 , te = 0;
    for(int i = 0 ; i < v.size() ; i++){
        int x = find_parent(v[i].u);
        int y = find_parent(v[i].v);
        if(x!=y){
            parent[y] = x;
            te++;
            cost+=v[i].w;
        }
    }
    if(te == n-1){
        return cost;
    }
return -1;
}
