#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define pb push_back
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;


void faka();
long long bfs(long long s);

vector<long long>v[100002];
long long vis[100002];
set<long long>s;
long long n , m , lc , rc;

int main(){
        //Taking;Making;
        int t;
        sf("%d",&t);
        while(t--){
            sf("%lld%lld%lld%lld",&n,&m,&lc,&rc);
            faka();
            for(long long i = 0 ; i < m ; i++){
                long long x , y;
                sf("%lld%lld",&x,&y);
                v[x].pb(y);
                v[y].pb(x);
            }
            long long finalcost = 0;
            if(lc<=rc){
                finalcost = (n*lc);
                pf("%lld\n",finalcost);
            }
            else{
                long long lib = 0;
                while(!s.empty()){
                    lib++;
                   // cout << "S : " <<*s.begin() << endl;
                    long long road = bfs(*s.begin());
                    //finalcost += (long long)(road*rc);
                  //  puts("++");
                }
                //cout << "LIB :  " << lib << "  ROAD : " << n-lib <<endl;
                finalcost+= (lib*lc) + (n-lib)*rc;
                pf("%lld\n",finalcost);
            }
        }

return 0;
}
long long bfs(long long st){
    queue<long long>q;
    long long road = 0;
    q.push(st);
    vis[st] = 1;
    while(!q.empty()){
        long long w = q.front();
        s.erase(w);
        q.pop();
        for(long long i = 0 ; i < v[w].size() ; i++){
            if(vis[v[w][i]] == -1){
                q.push(v[w][i]);
                vis[v[w][i]] = 1;
                road++;
            }
        }
    }
//cout << "Road : " <<road <<endl;
return road;
}
void faka(){
    while(!s.empty()){
        s.erase(s.begin());
    }
    for(long long i = 1 ; i <= n ; i++){
        vis[i] = -1;
        v[i].clear();
        s.insert(i);
    }
}
