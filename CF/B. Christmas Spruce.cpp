#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define pb push_back
#define mp make_pair
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;
/*-----------------------------------FUNCTIONS-----------------------------------------*/
void solve();
void clean();
/*-----------------------------------Variables-----------------------------------------*/
vector<int>tree[1002];
int leaf[1002] = {0};
int vis[1002] = {0};
int n;
int main(){
       // Taking;Making;
            int n , e;
            sf("%d",&n);
           // clean();
            for(int i = 2 ; i <= n ; i++){
                sf("%d",&e);
                tree[e].pb(i);
                leaf[e] = -1;
            }
            queue<int>q;
            q.push(1);
            vis[1] = 1;
            while(!q.empty()){
                int w = q.front();
                q.pop();
                int ok = 0 , c = 0;
                for(int i = 0 ; i < tree[w].size();i++){
                    if(vis[tree[w][i]]!=1){
                        q.push(tree[w][i]);
                    }
                    if(leaf[tree[w][i]]==0){
                        ok++;
                    }
                    c = 1;
                }
                //cout << "ON " << w << " LEAF IS " << ok <<endl;
                if(ok<3 && c == 1){
                   // cout << "***ON " << w << " LEAF IS " << ok <<endl;
                    cout << "NO\n";
                    return 0;
                }
            }
            cout <<"YES\n";

return 0;
}
/*void clean(){
    for(int i = 0 ; i <=n ; i++){
        vis[i]=-1;
        leaf[i] =1;
        tree[i].clear();
    }

}
*/
