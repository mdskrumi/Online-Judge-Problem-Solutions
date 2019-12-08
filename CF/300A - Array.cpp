#include<bits/stdc++.h>
using namespace std;

int main() {
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w", stdout);

        int n , t;
        while(scanf("%d",&n)!=EOF){

            vector<int>negnum;
            vector<int>posnum;

            for(int i = 0 ; i < n ; i++){
                scanf("%d",&t);

                if(t > 0) posnum.push_back(t);
                else if (t < 0) negnum.push_back(t);
            }
            int p = posnum.size();
            int m = negnum.size();

            if( p == 0 ){

                printf("%d %d\n",1,negnum[0]);
                printf("%d %d %d\n",2,negnum[1],negnum[2]);
                printf("%d %d",m-2,0);
                for(int i = 3 ; i < m ;i++){
                    printf(" %d",negnum[i]);
                }

            }else{
                    printf("%d %d\n",1,negnum[0]);
                    printf("%d %d\n",1,posnum[0]);
                    printf("%d %d",p+m-1,0);
                    for(int i = 1 ; i < m ;i++){
                        printf(" %d",negnum[i]);
                    }

                    for(int i = 1 ; i < p ;i++){
                        printf(" %d",posnum[i]);
                    }

            }puts("");

        }

return 0;
}
