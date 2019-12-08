#include<bits/stdc++.h>
using namespace std;
int main(){

        int t , n , s;
        cin >>t ;
        while(t-->0){
            cin >>n;
            s = 0;
            int train[n];
            for(int i = 0 ; i < n ; i++){
                scanf("%d",&train[i]);
            }
            for(int i = 0 ; i < n ; i++){
                char t = 'f';
                for(int j = 1 ; j < n ; j++){
                    if(train[j] < train[j-1]){
                        swap(train[j],train[j-1]);
                        s++;
                        t = 't';
                    }
                }if(t == 'f'){
                    break;
                 }
            }
            printf("Optimal train swapping takes %d swaps.\n",s);
        }

return 0;
}
