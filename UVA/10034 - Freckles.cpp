#include<bits/stdc++.h>
using namespace std;

double letsgoo();

double cost[105][105];
int visited[105];

int n;
int main(){

  //  freopen("input.txt", "r" , stdin);
   // freopen("output.txt", "w" , stdout);
    int t ;
    scanf("%d",&t);
    while(t--){
         for(int i = 0 ; i < 105 ;i++){
            for(int j = 0 ; j < 105 ; j++){
                cost[i][j] = 0;
            }visited[i] = -1;
         }

        scanf("%d",&n);
        double x_axis[n] , y_axis[n];

        for(int i = 0 ; i < n ; i++){
            double x , y;
            scanf("%lf%lf",&x,&y);
            x_axis[i] = x;
            y_axis[i] = y;
         //   cout << "  X  :  " << x_axis[i] << "    Y : " << y_axis[i] <<endl;
            for(int j = i-1 ; j >=0 ; j--){
                    if(i==j) continue;
                double a = x_axis[i] - x_axis[j];
                double b = y_axis[i] - y_axis[j];
                //cout << " a " << a << "   " << " b " << b <<endl;
                cost[i][j] = cost[j][i] = sqrt(a*a + b*b);
               // cout << " COST FOUND  "<< sqrt(a*a + b*b) <<endl;
            }
        }
        double ans =  letsgoo();
        printf("%.2lf\n",ans);
           if(t>=1){
            puts("");
        }
    }

return 0;
}
double letsgoo(){
    double ink = 0;
    vector<int>v;
    v.push_back(0);
    visited[0] = 1;
    while(v.size() != n){
        double ink_for_one = 999999999999 ;
        int x;
        for(int i = 0 ; i < v.size() ; i++){
            for(int j = 0 ; j < n ; j++){
                if( visited[j]==1 ){
                    continue;
                }
                if(ink_for_one > cost[v[i]][j]){
                    ink_for_one = cost[v[i]][j];
                    x = j;
                }
            }
        }
        ink += ink_for_one;
        visited[x] = 1;
        v.push_back(x);
    }
    v.clear();
return ink;
}

