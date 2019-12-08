#include<bits/stdc++.h>
using namespace std;

int main() {
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w", stdout);

    int h1,h2, t1,t2;
    int p1 , p2;
    while(scanf("%d %d %d %d",&h1,&h2,&t1,&t2)!=EOF){
        scanf("%d %d",&p1,&p2);

        t1 = t1-h1;
        t2 = t2-h2;

        if(t1 % p1 != 0 || t2 % p2 != 0){
            printf("NO\n");
            break;
        }

        if( (t1 / p1) % 2 != 0 && (t2 / p2) % 2 != 0  || (t1 / p1) % 2 == 0 && (t2 / p2) % 2 == 0 ){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }


return 0;
}
