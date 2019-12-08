#include<bits/stdc++.h>
using namespace std;
int testing(int X , int Y);
vector<int>coin;
int value[50000+5];
int main(){
    int t , m , c , sum;
    scanf("%d",&t);
    while(t-->0){
            sum = 0;
            scanf("%d",&m);
                for(int i = 0 ; i < m ; i++){
                    scanf("%d",&c);
                    coin.push_back(c);
                    sum+=c;
                }
                sort(coin.begin(),coin.end());
                int x = testing(m , sum/2);
              //  cout << x <<endl;
               printf("%d\n",sum - 2*x);
                coin.clear();
    }

return 0;
}
int testing(int X , int Y){

    for(int i = 0 ; i <= Y ; i++){
        value[i] = 0;
    }

    for(int i = 0 ; i < X ;i++){
        for(int j = Y ; j > 0 ; j--){
            if(coin[i] <= j){
                value[j] = max(coin[i]+(value[j-coin[i]]), value[j]);
            } //cout << "TOOK : " << value[j] << " FOR COIN : "<< coin[i] << " AND J : " << j <<endl;
        }
    }
return value[Y];
}
