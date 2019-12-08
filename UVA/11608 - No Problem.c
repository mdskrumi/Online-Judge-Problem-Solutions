#include<stdio.h>
int main(){

        int s, pro[13], sol[12] , kase = 1;

        while(scanf("%d",&s)!=EOF){
                if(s<0)break;
            int i ;
            for( i = 1 ; i < 13 ; i++){
                scanf("%d",&pro[i]);
            }
            for( i = 0 ; i < 12 ; i++){
                scanf("%d",&sol[i]);
            }
            pro[0]=s;
            printf("Case %d:\n",kase++);
            for( i = 0 ; i < 12 ; i++){
                if(pro[i]<sol[i]){
                    printf("No problem. :(\n");
                    pro[i+1] += pro[i];
                }
                else{
                    pro[i+1] += pro[i]-sol[i];
                    printf("No problem! :D\n");
                }
            }

        }

return 0;
}
