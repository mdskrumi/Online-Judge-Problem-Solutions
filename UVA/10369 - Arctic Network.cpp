#include<bits/stdc++.h>
using namespace std;

void letsgoo();

double cost[505][505];
int visited[505];
vector<double>anss;
int n , s;
int main(){
  //    freopen("input.txt", "r" , stdin);
    // freopen("output.txt", "w" , stdout);

    int t ;
    scanf("%d",&t);
    while(t--){

        scanf("%d%d",&s,&n);

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                cost[i][j] = 0;
            }visited[i] = -1;
        }

        double x_axis[n],y_axis[n];

        for(int i = 0 ; i < n ; i++){
            double x , y;
            scanf("%lf%lf",&x,&y);
            x_axis[i] = x;
            y_axis[i] = y;
            for(int j = i-1 ; j >=0 ; j--){
                cost[i][j] = cost[j][i] = sqrt(((x_axis[i] - x_axis[j] ) * (x_axis[i] - x_axis[j] ) ) + ((y_axis[i] - y_axis[j] ) * (y_axis[i] - y_axis[j] ) ));
               // cout << "COSTS : " << cost[i][j] <<endl;
            }
        }
        letsgoo();

        sort(anss.rbegin(),anss.rend());
        printf("%.2lf\n",anss[s-1]);
        anss.clear();
    }


return 0;
}
void letsgoo(){
    vector<int>v;
    v.push_back(0);
    visited[0] = 1;

    while(v.size()!= n){
            double c = 100000000000;
            int x;
        for(int i = 0 ; i < v.size() ; i++){
            //    cout << " GOING : " << v[i] <<endl;
            for(int j = 0 ; j < n ; j++){
                if(cost[v[i]][j]==0 || v[i]==j || visited[j]==1 ){
                    continue;
                }
            //        cout << "         TO : " << j << " COST " << cost[v[i]][j] <<endl;
                if(cost[v[i]][j]<c){
                    c = cost[v[i]][j];
                    x = j;
                }
            }
        }
      //  cout << " SELECTED : " << x << "  COST " << c <<endl;
        v.push_back(x);
        visited[x] = 1;
        anss.push_back(c);
    }
    v.clear();
}
