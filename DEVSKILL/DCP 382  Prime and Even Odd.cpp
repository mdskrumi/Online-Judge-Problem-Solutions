#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;
int main(){
    int t;
    long long shuru , shs;
        while(scanf("%lld%lld",&shuru,&shs)!=EOF){
        if((shuru == 1 && shs == 1) || (shuru > 1 &&shs > 1) ){
            printf("Even\n");
        }
        else{
            pf("Odd\n");
        }
    }


return 0;
}

