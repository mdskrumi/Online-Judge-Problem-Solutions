#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
     //freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int ans[500005];
    ans[1]=1;
    ans[2]=2;
    for(int i = 3 ; i <= 500000 ; i++){
        for(int j = 1 ; j <= 19 ; j++){
            if(pow(2,j) == i){
                ans[i] = i;
                break;
            }
            else if(pow(2,j) > i){
                ans[i] = 2*(i - pow(2,j-1));
                break;
            }
        }
       // cout << i << " " << ans[i] << endl;
    }

        int n ;
        while(scanf("%d",&n)!=EOF && n!=0){
            printf("%d\n",ans[n]);
        }


return 0;
}
