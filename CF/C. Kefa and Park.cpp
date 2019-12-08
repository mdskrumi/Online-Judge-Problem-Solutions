#include<bits/stdc++.h>
#include<ctype.h>
#include<string.h>

#include<stdio.h>

#define TAKING         freopen("input.txt" , "r" , stdin);
#define MAKING         freopen("output.txt","w" , stdout);

#define     ll         long long
#define     sf         scanf
#define     pf         printf
#define     pb         push_back
#define     mp         make_pair
#define     DOS        10000000000
#define     nl         "\n"
#define     BOLT       ios_base::sync_with_stdio(0)

#define     all(x)     x.begin(), x.end()
#define     rall(x)    x.rbegin(), x.rend()
#define     fi         first
#define     se         second
#define     sz(v)      (int)(v).size()

using namespace std;


int ini(){int n;cin >> n;return n;}
ll inl(){ll n;cin >> n;return n;}
double ind(){double n;cin >> n;return n;}
string ins(){string n;cin >> n;return n;}
string insl(){string n;getline(cin,n);return n;}

/*
int ini(){int n;scanf("%d",&n);return n;}
ll inl(){ll n;scanf("%lld",&n);return n;}
double ind(){double n;scanf("%lf",&n);return n;}*/



int dx4[] = {0 , 0 , 1 , -1};
int dy4[] = {1 , -1 , 0 , 0};

int dx8[] = {0 , 0 , 1 , -1 , 1 , -1 , -1 , 1};
int dy8[] = {1 , -1 , 0 , 0 , 1 , -1  , 1 ,-1};

vector<int> v[100000+5];
int cost[100000+5] = {0};
int visited[100000+5] = {0};
int mara[100000+5] = {0};


int BFS(int n , int m){
    queue<int>q;
    q.push(1);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        visited[u] = 1;
       // cout << "COMING FROM :" << u << nl;
        for(int i = 0 ; i < v[u].size() ; i++){
            if(visited[v[u][i]]==1) continue;
            //cout << "\tTO :" << v[u][i] << " COST : " << cost[v[u][i]] << nl;
            mara[u] = -1;
            if(cost[v[u][i]] == 0){
                q.push(v[u][i]);
                visited[v[u][i]] = 1;
            }
            else {
                cost[v[u][i]] = cost[v[u][i]] + cost[u];
                if(cost[v[u][i]] <= m){
                    q.push(v[u][i]);
                    visited[v[u][i]] = 1;
                }
                //cout << "\t\tNEW COST : " << cost[v[u][i]] << nl;
            }

        }
    }
    int ans = 0;
    for(int i = 1 ; i <= n ; i++){
       // cout << "COST[" << i  << "] : " << cost[i] ;
        if(cost[i] <= m && visited[i] != 0 && mara[i] != -1){
           // cout << "  TOOK  :" << i ;
            ans++;
        }
       // cout << nl;
    }
    return ans;
}
/*
void DFS(int u , int m){


}*/

int main(){
        BOLT;
        int n = ini(), m = ini();
        for(int i = 0 ; i < n ; i++){
            cost[i+1] = ini();
        }
        for(int i = 0 ; i < n-1 ; i++){
            int x = ini();
            int y = ini();
            v[x].pb(y);
            v[y].pb(x);
        }
        cout << BFS(n,m) <<nl;

return 0;
}




