#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define pb push_back
#define mp make_pair
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;
/*-----------------------------------FUNCTIONS-----------------------------------------*/
/*----------------------------------Variables-----------------------------------------*/
map<string , int>land;
int cost[32][32];

int main(){
   // Taking;Making;

    pf("SHIPPING ROUTES OUTPUT\n\n");
    int t , n , m , q , kase = 1;
    sf("%d",&t);
    while(t--){
        sf("%d%d%d",&n,&m,&q);
        cin.ignore();
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                if(i==j)cost[i][j] = 0;
                else cost[i][j] = 1000000;
            }
        }
        string a , b;
        for(int i = 0 ; i < n ; i++){
            cin >> a;
            land.insert({a,i});
        }
        cin.ignore();
        for(int i = 0 ; i < m ; i++){
            cin >> a >> b;
            cost[land[a]][land[b]]=1;
            cost[land[b]][land[a]]=1;
            //cout << land[a]  << " " << land[b] << " cost : " << 1 <<endl;
        }

        for(int k = 0 ; k < n ; k++){
            for(int i = 0 ; i < n ; i++){
                for(int j = 0 ; j < n ; j++){
                    if(cost[i][j] > cost[i][k]+ cost[k][j]){
                        cost[i][j] = cost[i][k] + cost[k][j];
                        //cout << "SETTED : " << cost[i][j] << endl;
                    }
                }
            }
        }

     /*   for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
               cout << i << " " << j << "  COST :" << cost[i][j]<< endl;
            }
        }
*/


        pf("DATA SET  %d\n\n",kase++);
        for(int i = 0 ; i < q ;i++){
            cin >> m >> a >> b;
            int ans = m*100*cost[land[a]][land[b]];
            if(ans<1000000)
                pf("$%d\n",ans);
            else
                puts("NO SHIPMENT POSSIBLE");
        }
        puts("");

    }
    puts("END OF OUTPUT");

return 0;
}
