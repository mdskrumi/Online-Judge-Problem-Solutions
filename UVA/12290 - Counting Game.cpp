#include<bits/stdc++.h>
using namespace std;
int check(int x);
int main(){
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    int n , m , k;
    while(scanf("%d%d%d",&n,&m,&k)!=EOF){
        int kount = 1;
        char go = 'f';
        for(int i = 1 ; i <= n ; kount++){
            if(i==m && m <= kount && (kount%7==0 || check(kount)== 1 )){
                k--;
            }
            if(k==0){
                printf("%d\n",kount);
                break;
            }
            // cout << i << " counted :" << kount << endl;

            if(i==n){
                    go = 'b'; // go backward
            }
            else if(i==1){
                go = 'f'; // go forward
            }

            if(go == 'f'){
                i++;
            }
            else{
                i--;
            }

        }

    }

return 0;
}
int check(int x){
    while(x!=0){
        int rim = x%10;
        x/=10;
        if(rim==7){
            return 1 ;
        }
    }
return 0;
}
