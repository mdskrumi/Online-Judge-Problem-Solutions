#include<bits/stdc++.h>
using namespace std;
int main(){
  /* freopen("A-small-attempt3.in", "r", stdin);
    freopen("output.in", "w", stdout);*/

    int t ;
    cin >> t;
    while(t-->0){
        int item , weight[31], p,w ;

        for(int i = 0 ; i < 31 ; i++){
            weight[i] = 0;
        }
        cin >> item;
        for(int i = 0 ; i < item ; i++){
                cin >> p >> w;

            for(int i = 31 ;i >= w ; i--){
                weight[i] = max(weight[i] ,  weight[i-w] + p) ;
            }
        }
        int man , m , ans = 0;
        cin >> man;
        for(int i = 0 ; i < man ; i++){
            cin >> m;
            ans += weight[m];
        }
        cout << ans <<endl;
    }

}
