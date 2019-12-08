#include<bits/stdc++.h>
using namespace std;

int letsgoo(string a ,string b);

map<string , vector<string> > m;
map<string , vector<string> > :: iterator mi;

map<string , int > dm;
map<string , int > ::iterator dmi;

map<string , string>ans;
queue<string>q;
vector<int>cost , visited;


int main(){
      //  freopen("input.txt", "r" , stdin);
      //  freopen("output.txt", "w" , stdout);

        int n , nl = 0;
        while(scanf("%d",&n)!=EOF){
            if(nl==1)puts("");nl=1;
         //   cout << " N :" << n <<endl;

            m.clear();
            dm.clear();
            ans.clear();
            visited.clear();
            cost.clear();
            cin.ignore();
            string a , b;
            for(int i = 0 ; i < n ; i++){
                cin >> a >> b;
                cin.ignore();
                m[a].push_back(b);
                m[b].push_back(a);
            }
            cost.resize(m.size());
            visited.resize(m.size());
            int i = 0;
            for(mi = m.begin() ; mi !=m.end();mi++){
                cost[i] = 1000000;
                visited[i] = -1;
                dm[mi->first] = i;
                i++;
            }
            cin >> a >> b;
            int lol =  letsgoo(a ,b);
            string x = b;
            vector<pair<string , string> >va;
            if(lol){
               while(lol){
                   va.push_back(make_pair(ans[x],x));
                    x = ans[x];
                    if(x == a){
                        break;
                    }
                }
            }else{
                printf("No route\n");
            }
            for(int i = va.size()-1 ; i>=0 ; i--){
                cout << va[i].first << " " << va[i].second <<endl;
            }
            va.clear();


        }

return 0;
}
int letsgoo(string a ,string b){

    while(!q.empty()){
        q.pop();
    }


    q.push(a);
    cost[dm[a]] = 1;
    while(!q.empty()){
        string working = q.front();
        q.pop();
        visited[dm[working]] = 1;
        for(int i = 0 ; i < m[working].size() ; i++){
            if(visited[dm[m[working][i]]]==1){
                continue;
            }
            if(cost[dm[m[working][i]]] > cost[dm[working]]+1){
                cost[dm[m[working][i]]] = cost[dm[working]]+1;
                ans[m[working][i]] = working;
                if(m[working][i] == b){
                    return 1;
                }
            }
            q.push(m[working][i]);
        }
    }
return 0;
}
