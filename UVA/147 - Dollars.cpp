#include<bits/stdc++.h>
using namespace std;

int coin[11]={2000,1000,400,200,100,40,20,10,4,2,1};
long long dp[30005][11];
long long recur(int amo, int i);

int main(){
    float amount1;
    memset(dp,-1,sizeof(dp));
    while(scanf("%f",&amount1) && amount1 != 0){
       long long amount2 = amount1*20;
       printf("%6.2f%17lld\n",amount1,recur(amount2,0));
    }

return 0;
}

long long recur(int amo, int i){
    if(amo == 0){
        return 1;
    }
    if(i == 11){
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
