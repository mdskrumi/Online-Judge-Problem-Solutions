#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define pb push_back
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;

void getclear(int n);
vector<pair<int , long long> > cost[1002];
long long n_node[1002];

int main(){
       // Taking;Making;
        int t , n , m;
        sf("%d",&t);
        while(t--){
            sf("%d%d",&n,&m);
            getclear(n);
            n_node[0]=0;
            for(int i = 0 ; i < m ; i++){
                int x , y ;
                long long z;
                sf("%d%d%lld",&x,&y,&z);
                cost[x].pb(make_pair(y,z));
            }

            for(int k = 0 ; k < n ; k++)
                for(int w = 0 ; w < n ; w++){
                    for(int i = 0 ; i < cost[w].size() ; i++){
                            if(n_node[w]+cost[w][i].second < n_node[cost[w][i].first]){
                                n_node[cost[w][i].first] = n_node[w] + cost[w][i].second;
                            }
                    }
                }
            int c = 0;
            for(int w = 0 ; w < n ; w++){
                for(int i = 0 ; i < cost[w].size() ; i++){
                        if(n_node[w]+cost[w][i].second < n_node[cost[w][i].first]){
                            c = 1;
                        }
                }if(c==1)break;
            }
            if(c==1)cout <<"possible\n";
            else cout << "not possible\n";
        }
return 0;
}
void getclear(int n){
        for(int i = 0 ; i < n ; i++){
            cost[i].clear();
            n_node[i]=INT_MAX;
        }
}
