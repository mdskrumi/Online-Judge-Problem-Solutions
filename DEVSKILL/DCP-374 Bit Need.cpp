#include<bits/stdc++.h>
using namespace std;

int main(){
//    freopen("input.txt", "r" , stdin);
  //  freopen("output.txt", "w" , stdout);

    long long data[100];

    for(int i = 0 ; i < 63 ; i++){
        data[i] = pow(2,i);
    }

    int t ;
    long long n;
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&n);
        if(n==0){
            printf("%d\n",1);
            continue;
        }
        for(int i = 0 ; i < 63 ; i++){
            if(data[i]-1 >= n){
                printf("%d\n",i);
                break;
            }
        }

    }
return 0;
}
