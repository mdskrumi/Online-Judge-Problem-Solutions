#include<bits/stdc++.h>
using namespace std;

void letsgoo();

double cost[1005][1005];
int visited[1005];
int n ;
double r;

double state , road , rail;

int main(){

    //freopen("input.txt", "r" , stdin);
    //freopen("output.txt", "w" , stdout);
    int t , kase = 1;
    scanf("%d",&t);
    while(t--){

        for(int i = 0 ; i < 1005 ; i++){
            for(int j = 0 ; j < 1005 ; j++){
                cost[i][j] = 0;
            }visited[i] = -1;
        }

        scanf("%d%lf",&n,&r);
        int x_axis[n], y_axis[n];

        for(int i = 0 ; i < n ; i++){
            int x , y;
            scanf("%d%d",&x,&y);
            x_axis[i] = x;
            y_axis[i] = y;
            for(int j = i-1 ; j >= 0 ; j--){
                if(i==j) continue;
                double a = x_axis[i]-x_axis[j];
                double b = y_axis[i]-y_axis[j];
                cost[i][j] = cost[j][i] = sqrt(a*a + b*b);

              //  cout << "DISTANCE :    " <<cost[i][j] << "\n" ;
            }
        }
        state = 1 ; road = 0 ; rail = 0;
        letsgoo();
        int one = round(state), two = round(road) , three =round(rail) ;
        printf("Case #%d: %d %d %d\n",kase++,one,two,three);

    }

return 0;
}
void letsgoo(){

    vector< int >v;
    v.push_back(0);
    visited[0] = 1;
    while(v.size() != n){
        int x ;
        double min_cost = INT_MAX;
        for(int i = 0 ; i < v.size();i++){
         //   cout << "COMING FROM  " << v[i] << endl;
            for(int j = 0 ; j < n; j++){
                if(visited[j] == 1 || v[i] == j){
                    continue;
                }
              //  cout << "     GOING TO " << j << " COST : " <<cost[v[i]][j] <<endl;
                if(cost[v[i]][j] < min_cost){
                    min_cost = cost[v[i]][j];
                    x = j;
                }
            }
        }
       // cout << "SELECTED :  "  << x << " COST : " << min_cost <<endl << endl;
        if(min_cost > r){
            state++;
            rail+=min_cost;
          //  cout << " ++ AND RAIL\n";
        }else{
            road+=min_cost;
           // cout << "ROAD" << road <<endl;;
        }
        v.push_back(x);
        visited[x] = 1;
    }
v.clear();
}
/*
20
5 15174
-913 3058
-819 -9511
-3848 -1320
4991 -5504
1338 1748
*/
