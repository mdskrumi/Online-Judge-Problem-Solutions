#include <bits/stdc++.h>
using namespace std;
int main(){

        int a1 , a2 , a3 , b1 , b2 ,b3 , n;
        scanf("%d %d %d %d %d %d ",&a1,&a2,&a3,&b1,&b2,&b3);
        scanf("%d",&n);

        float a0 = (float)(a1+a2+a3)/5;
        float b0 = (float)(b1+b2+b3)/10;
        int a = ceil(a0);
        int b = ceil(b0);
        if((a+b)<=n){
            printf("YES\n");
        }
        else printf("NO\n");
return 0;
}


