#include<bits/stdc++.h>
using namespace std;
int main(){
    //  freopen("input.txt","r",stdin);
    //  freopen("output.txt","w",stdout);

      long long m, x ;
        while(scanf("%lld %lld",&m,&x)!=EOF){
            if(x == 0 && m == 0){
                break;
            }
            else if( x == 100 || x == 0 || m == 1){
                printf("Not found\n");
                continue;
            }
            long long ans = ((m-1)*100 )/ (100-x);

            if(((m-1)*100) % (100-x) == 0){
                ans--;
            }

            if(ans < m){
                printf("Not found\n");
            }
            else{
                printf("%lld\n",ans);
            }
        }

return 0;
}
