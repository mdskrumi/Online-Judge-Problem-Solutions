#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
            int a , sum , n;
                while(scanf("%d",&sum) && sum !=-1){
                    for(n = (sqrt(sum*2)) ; n > 0 ; n--){
                           // cout << "N  " << n <<endl;
                        if((2*sum-n*n+n)%(2*n) == 0){
                            a = (2*sum-(n*n)+n)/((2*n));
                            break;
                        }

                    }
                    printf("%d = %d + ... + %d\n",sum,a,a+n-1);

                }
return 0;
}
