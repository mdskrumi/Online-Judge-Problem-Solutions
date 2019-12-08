#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define pb push_back
#define mp make_pair
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;
/*-----------------------------------FUNCTIONS-----------------------------------------*/

struct node{
    int c, u , v;
};
bool operator<(node a , node b){
    return a.c < b.c;
}

void clean();
/*-----------------------------------Variables-----------------------------------------*/
vector<node>G;
int cost[205];
int ans[205];
int  n , m;
int main(){
        //Taking;Making;
        int t , kase = 1;
        sf("%d",&t);
        while(t--){
            sf("%d",&n);
            clean();
            for(int i = 1 ; i <= n ; i++){
                int x;
                sf("%d",&x);
                cost[i]=x;
            }
            sf("%d",&m);
            for(int i = 1 ; i <= m ; i++){
                int x , y ;
                sf("%d%d",&x,&y);
                node nod;
                nod.c = (cost[y]-cost[x])*(cost[y]-cost[x])*(cost[y]-cost[x]);
                nod.u = x;
                nod.v = y;
                G.pb(nod);
            }
            ans[1] = 0;
            sort(G.begin() , G.end());
            for(int k = 0 ; k < n ; k++){
                for(int i = 0 ; i < G.size() ; i++){
                    if(ans[G[i].v] > ans[G[i].u] + G[i].c){
                        ans[G[i].v] = ans[G[i].u] + G[i].c;
                    }
                }
            }
            int q ;
            sf("%d",&q);
            pf("Case %d:\n",kase++);
            for(int i = 0 ; i < q ; i++){
                sf("%d",&n);
                if(ans[n]>=3 && ans[n] < 10000000)
                    pf("%d\n",ans[n]);
                else
                    puts("?");
            }
        }
return 0;
}
void clean(){
    for(int i = 0 ; i <= n ; i++){
        ans[i]=100000000;
    }
    G.clear();
}
