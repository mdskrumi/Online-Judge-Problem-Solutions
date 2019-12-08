#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;

void MST(string a);
int ans;
map<string , vector< pair<string , int>  > > m;
map<string , vector< pair<string , int> > > ::iterator mit;
map<string , int > dm;
vector<int>visited;
set<string>sasa;


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
        for(int i = 0 ; i < r ; i++){
            cin >> a >> b >> w;
            cin.ignore();
            tc+=w;
            m[a].push_back(make_pair(b,w));
            m[b].push_back(make_pair(a,w));
            sasa.insert(a);
            sasa.insert(b);
        }
        int h = 0;
        for(mit = m.begin() ; mit!=m.end() ; mit++){
            dm[mit->first] = h++;
        }
        visited.resize(m.size());

        ans = 0;
        MST(a);
        pf("Case %d: ",kase++);

        if(sasa.empty())pf("%d\n",ans);
        else pf("Impossible\n");
        while(!sasa.empty())sasa.erase(sasa.begin());
        visited.clear();
        m.clear();
        dm.clear();


    }
return 0;
}
void MST(string a){
    vector<string>v;
    v.push_back(a);
    visited[dm[a]]=1;
    sasa.erase(a);
    while(1){
        int s = INT_MAX ;
        string c = "0";
        for(int i = 0 ; i < v.size();i++){
            for(int j = 0 ; j < m[v[i]].size();j++){
                if(visited[dm[m[v[i]][j].first]]==1){
                    continue;
                }
                if(s > m[v[i]][j].second){
                    s = m[v[i]][j].second;
                    c = m[v[i]][j].first;
                }
            }
        }
        if(c=="0")break;
        v.push_back(c);
        visited[dm[c]]=1;
        ans+=s;
        sasa.erase(c);
    }
v.clear();
}
