#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
     //freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

       long long coco;
       while(scanf("%lld",&coco)&& coco >= 0){
            int gotans = 0;
            if(coco == 3){
                printf("3 coconuts, 2 people and 1 monkey\n");
                continue;
            }
            for(int i = ceil(sqrt(coco)) ; i >= 2 ;i--){
                    long long p , tco = coco;
                    if(coco % i != 1) continue;
                    int j;
                    for(j = 0 ; j < i ; j++){
                        p = tco/i;
                        if(tco%p!=1){
                            break;
                        }
                        tco = tco - (p+1);
                    }
                    if(tco % i == 0 && j==i){
                        printf("%lld coconuts, %d people and 1 monkey\n",coco,i);
                        gotans = 1;
                        break;
                    }
            }
            if(gotans!=1){
                 printf("%lld coconuts, no solution\n",coco);
            }
       }
return 0;
}
