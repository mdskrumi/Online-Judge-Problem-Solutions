#include <bits/stdc++.h>
using namespace std;
int main(){

        long long n , d , days;
        while(scanf("%lld %lld",&n,&d)!=EOF){
        days = 0;
        while(1){
                days+=n;
                if(days>=d){
                    break;
                }
                n++;
        }
            printf("%lld\n",n);
        }

return 0;
}

