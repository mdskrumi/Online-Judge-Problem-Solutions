#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define pb push_back
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;
long long bfs(long long st);
void faka(long long n);
vector<long long>v[100002];
long long vis[100002];
vector<long long>c;
set<long long>s;

int main(){
        long long n , m;
        sf("%lld%lld",&n,&m);
        faka(n);
        for(long long i = 0 ; i < m ; i++){
            long long x , y;
            sf("%lld%lld",&x,&y);
            v[x].pb(y);
            v[y].pb(x);
            s.insert(x);
            s.insert(y);
        }
        long long res = 0, ans =0 , saz = s.size();
        res+=(n-saz);
        saz = n - saz;
       // cout << " res : " << res <<endl;
        while(!s.empty()){
                long long a = bfs(*s.begin());
                res += a;
                //cout << " res : " <<res <<endl;
                c.pb(a);
        }
       for(int i = 0 ; i < c.size() ; i++){
            res-=c[i];
            ans+=(c[i]*res);
        }
        //saz--;
        ans+= (saz*(saz-1)/2);
        cout << ans <<endl;

return 0;
}
long long bfs(long long st){
    long long a = 0;
    queue<long long>q;
    q.push(st);
    vis[st] = 1;

    while(!q.empty()){
        long long w = q.front();
        q.pop();
        s.erase(w);
        a++;
        for(long long i = 0 ; i < v[w].size();i++){
            if(vis[v[w][i]]!=1){
                s.erase(v[w][i]);
                vis[v[w][i]] = 1;
                q.push(v[w][i]);
            }
        }
    }
return a;
}
void faka(long long n){
    for(long long i = 0 ; i < n; i++){
        vis[i] = -1;
        v[i].clear();
    }c.clear();
}
