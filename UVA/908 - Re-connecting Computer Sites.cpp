#include<bits/stdc++.h>
using namespace std;

vector<pair<int , int> >v[1000001];
bool visited[1000001];

int letsgoo(int x );

set<int>sa;
set<int>::iterator it;
int n;
int main(){

      //  freopen("input.txt","r",stdin);
     //   freopen("output.txt","w",stdout);
        int notun = 0;
        while(scanf("%d",&n)!=EOF){

            if(notun==1){
                printf("\n");
            }notun = 1;

            memset(visited,false,1000001);
            int pre = 0 , aft = 0 , cha =0;
            int x , y , w;

            for(int i = 1 ; i < n ; i++){
                scanf("%d%d%d",&x,&y,&w);
                v[x].push_back(make_pair(y,w));
                v[y].push_back(make_pair(x,w));
                pre+=w;
                sa.insert(x);
                sa.insert(y);
            }
            int k ;
            //cout << "PRE : " <<pre <<endl;
            scanf("%d",&k);
            for(int i = 0 ; i < k ; i++){
                scanf("%d%d%d",&x,&y,&w);
                v[x].push_back(make_pair(y,w));
                v[y].push_back(make_pair(x,w));
            }
            int m;
            scanf("%d",&m);
            for(int i = 0 ; i < m ; i++){
                 scanf("%d%d%d",&x,&y,&w);
            }

            printf("%d\n%d\n",pre,letsgoo(x));
          //  cout << letsgoo(x) <<endl;
            for(it = sa.begin() ; it!=sa.end();it++){
                v[*it].clear();
            }
            sa.clear();
        }
return 0;
}
int letsgoo(int x){
    int ans = 0;
    vector<int>u;
    u.push_back(x);
    visited[x] = true;
    while(u.size()!=n){
        int cost = INT_MAX , a , b ;
        for(int i = 0 ; i < u.size();i++){
           // cout << "COMING FROM : " << u[i] <<endl;
            for(int j = 0 ; j < v[u[i]].size();j++){
                if(visited[v[u[i]][j].first] == true){
                    continue;
                }
             //   cout << "GOING TO : " << v[u[i]][j].first << " COST : " << v[u[i]][j].second <<endl;
                if(v[u[i]][j].second < cost){
                    cost = v[u[i]][j].second;
                    a = u[i];
                    b = v[u[i]][j].first;
                }
            }
        }
       // cout << "SELECTED : " << a << " TO : " << b << " COST  : " << cost <<endl;
        visited[b] = true;
        ans += cost;
        u.push_back(b);
    }
    u.clear();
return ans;
}
