#include<bits/stdc++.h>
using namespace std;

int main(){
//    freopen("input.txt", "r" , stdin);
  //  freopen("output.txt", "w" , stdout);
    int t , n;
    while(scanf("%d%d",&t,&n)!=EOF){
        int  d ,sum = 0;
        for(int i = 0 ; i < n ; i++){
            scanf("%d",&d);
            sum+=d;
        }
        if(sum >= t){
            printf("Project will finish within 1 day.\n");
        }
        else{
            if(t%sum==0){
                printf("Project will finish within %d days.\n",t/sum);
            }else printf("Project will finish within %d days.\n",(t/sum)+1);
        }


    }
return 0;
}
