#include<bits/stdc++.h>
using namespace std;
int letsgoo(int a , int b);

vector<int>v[21];
queue<int>q;
int cost[21];
int visit[21];

int main(){

        int how , what , test_set = 1;

        while(scanf("%d",&how)!=EOF){
             for(int j = 0 ; j < how ; j++){
                scanf("%d",&what);
                v[1].push_back(what);
                v[what].push_back(1);
            }
        for(int i = 2 ; i < 20 ; i++){
            scanf("%d",&how);
            for(int j = 0 ; j < how ; j++){
                scanf("%d",&what);
                v[i].push_back(what);
                v[what].push_back(i);
            }
        }
        printf("Test Set #%d\n",test_set++);
        int f , kase = 1;
        scanf("%d",&f);
        while(f--){
            for(int i = 0 ; i < 21 ; i++){
                visit[i] = -1;
                cost[i] = 100000;
            }
            int a , b;
            scanf("%d%d",&a,&b);
            printf("%2d to%3d: %d\n",a,b,letsgoo(a,b));
        }
        puts("");
        for(int i = 1 ; i < 21 ; i++){
            v[i].clear();
        }

    }
return 0;
}
int letsgoo(int a , int b){

    q.push(a);
    cost[a] = 0;
    while(!q.empty()){
        int w = q.front();
        q.pop();
        visit[w] = 1;
        for(int i = 0 ; i < v[w].size();i++){
            if(visit[v[w][i]] != 1){
                q.push(v[w][i]);
            }
            cost[v[w][i]] = min(cost[v[w][i]] , cost[w]+1);
        }
    }
    return cost[b];
}
