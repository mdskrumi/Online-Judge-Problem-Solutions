#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define pb push_back
#define mp make_pair
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;

/*-----------------------------------FUNCTIONS-----------------------------------------*/

/*-----------------------------------Variables-----------------------------------------*/
int graph[101][101];
int main(){
        //Taking;Making;
        int n;
        while(sf("%d",&n) && n!=0){
            memset(graph , 1000000 , sizeof graph);
            int x;
            while(sf("%d",&x) && x!=0){
                int y;
                while(sf("%d",&y) && y!=0){
                    graph[x][y] = 1;
                }
            }
            for(int k = 1 ; k <= n ; k++){
                for(int i = 1 ; i <= n ; i++){
                    for(int j = 1 ; j <= n ; j++){
                        if( graph[i][k]==1 && graph[k][j] == 1){
                            graph[i][j] = 1;
                        }
                    }
                }
            }

         /*   for(int i = 1 ; i <= n ; i++){
                    cout << i << " : ";
                for(int k = 1 ; k <= n ; k++){
                        cout << graph[i][k] << " ";
                }
                puts("");
            }*/

            int q , d ;
            sf("%d",&q);
            set<int>s;
            for(int i = 0 ; i < q ; i++){
                sf("%d",&d);
                int ans = 0;
                for(int i = 1 ; i <= n ; i++){
                    if(graph[d][i]!=1){
                        s.insert(i);
                        ans++;
                    }
                }
                 pf("%d",ans);
                    while(s.size() > 0){
                        pf(" %d",*s.begin());
                        s.erase(s.begin());
                    }
                    puts("");

            }


            }
return 0;
}
