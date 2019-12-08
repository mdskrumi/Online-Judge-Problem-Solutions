#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define pb push_back
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;
int bfs(int S, int F);
void C_prime();
void make_fact(int n);

vector<int>PF;
int visited[1002] , cost[1002] , prime[1002];
int S,F;
int main(){
       // Taking;Making;
        C_prime();
        int t, kase = 1;
        sf("%d",&t);
        while(t--){
            sf("%d%d",&S,&F);
            for(int i = 0 ; i <= F ; i++){
                visited[i] = -1;
                cost[i] = 0;
            }

            pf("Case %d: %d\n",kase++,bfs(S,F));
        }
return 0;
}

void make_fact(int n){
    PF.clear();
    for(int i = 2 ; i <= n/2 ; i++){
        if(n%i==0 && prime[i]){
            PF.pb(i);
        }
    }
}
void C_prime(){
    for(int i = 0 ; i < 1002 ; i++){
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for(int i = 2 ; i <= sqrt(1002) ; i++){
        for(int j = 2 ; j*i < 1002 ; j++){
            prime[i*j] = 0;
        }
    }
}
int bfs(int S, int F){
    queue<int>q;
    q.push(S);
    visited[S] = 1;
    if(S == F){
        return 0;
    }
    while(!q.empty()){
        int w = q.front();
        q.pop();
        make_fact(w);
        for(int i = 0 ; i < PF.size() ; i++){
            if(visited[PF[i]+w] == 1 || PF[i]+w > F)continue;
            visited[PF[i]+w] = 1;
            q.push(PF[i]+w);
            cost[PF[i]+w] = cost[w]+1;
            if(PF[i]+w == F){
                return cost[F];
            }
        }
    }
return -1;
}
