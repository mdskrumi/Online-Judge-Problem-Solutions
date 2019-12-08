#include<bits/stdc++.h>
using namespace std;

int coin[5]={50,25,10,5,1};
long long dp[30005][5];
long long recur(int amo, int i);

int main(){
    int amo;
    memset(dp,-1,sizeof(dp));
    while(scanf("%d",&amo)!=EOF){
        long long ans = recur(amo,0);
        printf("%lld\n",ans);
    }

return 0;
}

long long recur(int amo, int i){
    if(amo == 0){
        return 1;
    }
    if(i == 5){
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
