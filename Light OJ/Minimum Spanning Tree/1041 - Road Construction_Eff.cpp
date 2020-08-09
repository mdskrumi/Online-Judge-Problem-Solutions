#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;

void MST();
int ans;
map<string , int > m;
map<string ,  int > ::iterator mit;
vector< pair<int , int> >G[110];
vector<int>visited;
set<int>sasa;


int main(){
    //Taking;Making;
    int t , kase = 1;
    sf("%d",&t);
    while(t--){
        int r , tc = 0;
        sf("%d",&r);
        cin.ignore();
        string a , b ;
        int w ;
        int loc = 0;
        for(int i = 0 ; i < r ; i++){
            cin >> a >> b >> w;
            cin.ignore();
            mit = m.find(a);
            if(mit==m.end()){
                m.insert({a,loc++});
            }
            mit = m.find(b);
            if(mit==m.end()){
                m.insert({b,loc++});
            }
            G[m[a]].push_back(make_pair(m[b],w));
            G[m[b]].push_back(make_pair(m[a],w));
            sasa.insert(m[a]);
            sasa.insert(m[b]);
        }
        visited.resize(m.size());
        ans = 0;
        MST();
        pf("Case %d: ",kase++);

        if(sasa.empty())pf("%d\n",ans);
        else pf("Impossible\n");
        while(!sasa.empty())sasa.erase(sasa.begin());
        visited.clear();
        m.clear();
        for(int i = 0 ; i <= loc; i++){
            G[i].clear();
        }

    }
return 0;
}
void MST(){
    vector<int>v;
    v.push_back(0);
    visited[0] = 1;
    sasa.erase(0);
    while(1){
        int s = INT_MAX ;
        int c = -1;
        for(int i = 0 ; i < v.size();i++){
            for(int j = 0 ; j < G[v[i]].size() ; j++){
                if(visited[G[v[i]][j].first] == 1){
                    continue;
                }
                if(s > G[v[i]][j].second){
                    s = G[v[i]][j].second;
                    c = G[v[i]][j].first;
                }
            }
        }
        if(c==-1)break;
        v.push_back(c);
        visited[c] = 1;
        ans+=s;
        sasa.erase(c);
    }
v.clear();
}
