#include<bits/stdc++.h>
using namespace std;
void cal();
long long ans[100002];
int main(){
   /*  freopen("input.txt","r",stdin);
     freopen("output.txt","w",stdout);*/
    cal();
    int t , a , b;
    scanf("%d",&t);
        while(t--){
            scanf("%d %d",&a,&b);
            int c = abs(a-b);
            if(c==0){
                printf("%d\n",0);
                continue;
            }
            for(int i = 1 ; i <= 300000 ; i++){
                if(ans[i] == c ){
                    printf("%d\n",i);
                    break;
                }
                else if(ans[i]>c){
                     printf("%d\n",i-1);
                     break;
                }
            }
        }
return 0;
}
void cal(){
    int x = 1 , inc = 0;
    for(long long i = 1, j = 0 ; j <= 100000 ; j++ , x++){
        if(x>2){
            x = 1;
            inc++;
        }
        i+=inc;
        ans[j] = i;
    }
}
