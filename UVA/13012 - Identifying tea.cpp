#include<bits/stdc++.h>
using namespace std;
int main(){

       int c[5];
       int n , ans;

       while(scanf("%d",&n)!=EOF){
        ans = 0;
        for(int i = 0; i < 5;i++){
            scanf("%d",&c[i]);
            if(c[i]== n){
                ans++;
            }
        }
        printf("%d\n",ans);

       }


return 0;
}
