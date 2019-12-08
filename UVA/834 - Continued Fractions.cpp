#include<bits/stdc++.h>
using namespace std;
int main(){
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);

      int upper , lower;
      while(scanf("%d %d",&upper,&lower)!=EOF){
        vector<int>result;

        while(upper%lower!=0){
            int div = upper/lower;
            int rim = upper%lower;

            result.push_back(div);

            upper = lower;
            lower = rim;
        }
        result.push_back(upper);

        printf("[%d;",result[0]);
        for(int i = 1 ; i < result.size() ; i++){
            if(i!=result.size()-1){
                printf("%d,",result[i]);
            }
            else{
                printf("%d]",result[i]);
            }
        }
        printf("\n");
        result.clear();

      }


return 0;
}
