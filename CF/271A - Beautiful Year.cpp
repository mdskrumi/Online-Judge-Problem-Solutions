#include <bits/stdc++.h>
using namespace std;
int main(){

        int y , ty;
        scanf("%d",&y);
        y++;
        while(1){
        int a , b, c , d , rem , i = 4;
        ty = y;
        while(ty!=0){
                rem = ty % 10;
                ty/=10;
                if(i == 4){
                    d = rem;
                }
                else if(i==3){
                    c = rem;
                }
                else if(i==2){
                    b = rem;
                }
                else if(i==1){
                    a = rem;
                }
                i--;
        }
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            printf("%d\n",y);
            return 0;
        }else{
        y++;
        }
        }

return 0;
}


