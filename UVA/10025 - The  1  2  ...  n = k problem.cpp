#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf scanf
#define sf1(x) scanf("%d",&x)
int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
            int t , n , sum;
            sf1(t);

            while(t--){
                sf1(sum);
                sum = abs(sum);
                for(int i = 1 ; ; i++){
                    n = i*(i+1)/2;
                   if(n == sum){
                        printf("%d\n",i);
                        break;
                   }
                   else if(n > sum && n%2==0 && sum % 2 ==0){
                        printf("%d\n",i);
                        break;
                   }
                   else if(n > sum && n%2==1 && sum % 2 == 1){
                        printf("%d\n",i);
                        break;
                   }
                }
                if(t>0)printf("\n");
             //   cout << "N : " << n << "  SUM : " << sum <<endl;

            }

return 0;
}
