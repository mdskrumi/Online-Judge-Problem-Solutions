#include<bits/stdc++.h>
using namespace std;

int coin[21];
long long dp[10005][21];
long long recur(int amo, int i);

int main(){
    for(int i = 1 ; i <= 21;i++){
        coin[i-1]=i*i*i;
    }
    int amount1;
    memset(dp,-1,sizeof(dp));
    while(scanf("%d",&amount1)!=EOF){
       printf("%lld\n",recur(amount1,0));
    }

return 0;
}

long long recur(int amo, int i){
    if(amo == 0){
        return 1;
    }
    if(i == 21){
        return 0;
    }
    if(dp[amo][i]!= -1 ){
        return dp[amo][i];
    }
    long long way = 0;
        if(coin[i] <= amo){
            way += recur(amo-coin[i],i);
        }
        way += recur(amo,i+1);

   return dp[amo][i] = way;

}
