#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;

void MST();

int n;
int cost[52][52];
int visited[52];
int low;
set<int>sasa;
set<int> :: iterator it;


int main(){
   //Taking;Making;
    int t , kase = 1;
    sf("%d",&t);
    while(t--){
        sf("%d",&n);

         for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                cost[i][j]=0;
            }sasa.insert(i);
         }

        int w = 0;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                int tk;
                scanf("%d",&tk);
                if(tk==0)continue;
                w+=tk;
                if(cost[i][j]==0 && cost[j][i]==0){
                    cost[i][j] = tk;
                    cost[j][i] = tk;
                }
                else{
                    cost[i][j] = min(tk,cost[i][j]);
                    cost[j][i] = min(tk,cost[j][i]);
                }
            }visited[i] = -1;
        }

        low = 0;
        MST();
        pf("Case %d: ",kase++);
        if(sasa.empty()){
            printf("%d\n",w-low);
        }else{
            pf("-1\n");
            while(!sasa.empty()){
                sasa.erase(sasa.begin());
            }
        }


    }
return 0;
}
void MST(){
    vector<int>v;
    v.push_back(0);
    visited[0]=1;
    sasa.erase(0);
    while(1){
        int s = INT_MAX , c = -1;
        for(int i = 0 ; i < v.size();i++){
            for(int j = 0 ; j < n ; j++){
                if(cost[v[i]][j]==0 || visited[j]==1){
                    continue;
                }
                if(cost[v[i]][j]<s){
                    s = cost[v[i]][j];
                    c = j;
                }
            }
        }
        if(c==-1)break;
        v.push_back(c);
        visited[c] = 1;
        low+=s;
        sasa.erase(c);
    }
v.clear();
}
