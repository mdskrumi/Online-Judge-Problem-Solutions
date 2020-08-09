#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;

void MST();

vector<pair<int , int> > node[102];
int visited_1[102];
int visited_2[102];
int n;
int ans1 , ans2;

int main(){
    //Taking;Making;
    int t, kase = 1;
    sf("%d",&t);
    while(t--){
        sf("%d",&n);
        for(int i = 0 ; i <= n; i++){
            visited_1[i]=0;
            visited_2[i]=0;
            node[i].clear();
        }
        while(1){
            int x , y , w;
            sf("%d%d%d",&x,&y,&w);
            if(x==0 && y == 0 && w==0)break;
            node[x].push_back(make_pair(y,w));
            node[y].push_back(make_pair(x,w));
        }
        ans1 = 0;
        ans2 = 0;
        MST();

        int res = ans1 + ans2 ;
        if(res%2==0)
        printf("Case %d: %d\n",kase++,res/2);
        else printf("Case %d: %d/2\n",kase++,res);

    }

return 0;
}
void MST(){

    vector<int>v;
    vector<int>v2;

    v.push_back(0);
    v2.push_back(0);

    visited_1[0] = 1;
    visited_2[0] = 1;

    while(1){
        int c_min = 200005 , n1 = -1;
        int c_max = -1 , n2 = -1;
        for(int i = 0 ; i < v.size(); i++){

            for(int j = 0 ; j < node[v[i]].size() ; j++){
                if(visited_1[node[v[i]][j].first]==1){
                    continue;
                }
                if(node[v[i]][j].second < c_min){
                    c_min = node[v[i]][j].second;
                    n1 = node[v[i]][j].first;
                }
            }
            for(int j = 0 ; j < node[v2[i]].size() ; j++){
                if(visited_2[node[v2[i]][j].first]==1){
                    continue;
                }
                if(node[v2[i]][j].second > c_max){
                    c_max = node[v2[i]][j].second;
                    n2 = node[v2[i]][j].first;
                }
            }
        }
        if(n1 ==-1){
            break;
        }
        v.push_back(n1);
        v2.push_back(n2);
        visited_1[n1] = 1;
        visited_2[n2] = 1;
        ans1+=c_min;
        ans2+=c_max;
    }
    v.clear();
    v2.clear();
}
