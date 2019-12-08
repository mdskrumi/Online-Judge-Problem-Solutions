#include<bits/stdc++.h>,
#define sf scanf
#define pf printf
#define pb push_back
#define mp make_pair
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;
/*-----------------------------------FUNCTIONS-----------------------------------------*/

/*-----------------------------------Variables-----------------------------------------*/
int cost[202];
int vis[202];
int dx[] = {1 , -1};
int n , k;
queue<int>q;
int main(){
    int t ;
    sf("%d",&t);

    while(t--){
        sf("%d%d",&n,&k);
        for(int i = 0 ; i <= n ; i++){
            cost[i] = INT_MAX;
            vis[i] = -1;
        }
        for(int i = 0 ; i < k ; i++){
            int x ;
            sf("%d",&x);
            q.push(x);
            cost[x] = 1;
            vis[x] = 1;
        }
        int ans = 1;
        while(!q.empty()){
            int w = q.front();
            q.pop();
            for(int i = 0 ; i < 2 ; i++){
                int nw = w+dx[i];
                if(nw>0 && nw <= n && vis[nw] != 1){
                    q.push(nw);
                    vis[nw] = 1;
                    cost[nw] = min(cost[nw] , cost[w]+1);
                    if(cost[nw]>ans){
                        ans = cost[nw];
                    }
                }

            }
        }
        pf("%d\n",ans);
    }

return 0;
}
