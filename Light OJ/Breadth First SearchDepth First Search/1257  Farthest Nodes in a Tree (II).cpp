#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define pb push_back
#define mp make_pair
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;

void clean();
void DFS(int src);
void DFS2(int src);
vector<pair<int,int> >v[30001];
int highest[2][30001];
int point_1, point_2 , h , n;
int main(){
        //Taking;Making;
        int t , kase = 1 ;
        sf("%d",&t);
        while(t--){
            sf("%d",&n);
            clean();
            for(int i = 0 ; i < n-1 ; i++){
                int x , y , z ;
                sf("%d%d%d",&x,&y,&z);
                v[x].pb(mp(y,z));
                v[y].pb(mp(x,z));
            }
            DFS(0);
            for(int i = 0 ; i < n ; i++){
               highest[0][i] =-1;
            }
            point_2 = point_1;
            DFS(point_1);
            h = highest[0][point_1];
            DFS2(point_1);
            pf("Case %d:\n",kase++);
            for(int i = 0 ; i < n ; i++){
                pf("%d\n",max(highest[0][i],highest[1][i]));
            }

        }
return 0;
}
void DFS(int src){
    queue<int>s;
    h = 0;
    s.push(src);
    highest[0][src] = 0;
    while(!s.empty()){
        int w = s.front();
         if(highest[0][w] > h){
            h = highest[0][w];
            point_1 = w;
        }
        s.pop();
       // cout << "Coming from : " << w << " cost : " << highest[w] <<endl;
        for(int i = 0 ; i < v[w].size();i++){
            if(highest[0][v[w][i].first]!= -1 && highest[0][v[w][i].first] > highest[0][w] + v[w][i].second ){
                highest[0][v[w][i].first] = highest[0][w] + v[w][i].second;
               // cout << "     To : " << w << " cost : " << highest[v[w][i].first] <<endl;
                s.push(v[w][i].first);
            }
            else if(highest[0][v[w][i].first] == -1){
                highest[0][v[w][i].first] = highest[0][w] + v[w][i].second;
              //  cout << "     To : " << w << " cost : " << highest[v[w][i].first] <<endl;
                s.push(v[w][i].first);
            }
        }
    }
}
void DFS2(int src){
    queue<int>s;
    s.push(src);
    highest[1][src] = 0;
    while(!s.empty()){
        int w = s.front();
       // cout << "Coming from : " << w << " cost : " << highest[w] <<endl;
        s.pop();
        for(int i = 0 ; i < v[w].size();i++){
            if(highest[1][v[w][i].first] > highest[1][w] + v[w][i].second ){
                highest[1][v[w][i].first] = highest[1][w] + v[w][i].second;
               // cout << "     To : " << w << " cost : " << highest[v[w][i].first] <<endl;
                s.push(v[w][i].first);
            }
            else if(highest[1][v[w][i].first] == -1){
                highest[1][v[w][i].first] = highest[1][w] + v[w][i].second;
              //  cout << "     To : " << w << " cost : " << highest[v[w][i].first] <<endl;
                s.push(v[w][i].first);
            }
        }
    }

}
void clean(){
    for(int i = 0 ; i <= n ; i++){
        highest[0][i] = -1;
        highest[1][i] = -1;
        v[i].clear();
    }
}
