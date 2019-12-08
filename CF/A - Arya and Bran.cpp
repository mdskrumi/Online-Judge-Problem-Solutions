#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;
int main(){
        //Taking;Making;

        int n , k;
        while(sf("%d%d",&n,&k)!=EOF){
            int kandy[n];
            for(int i = 0 ; i < n ; i++){
                sf("%d",&kandy[i]);
            }
            int hv = 0 , d = 1;

            for(int i = 0 ; i < n ; i++){
                if(kandy[i]>8){
                    kandy[i+1] += kandy[i]-8;
                    hv+=8;
                    kandy[i]=0;
                }else{
                    hv+=kandy[i];
                    kandy[i]=0;
                }
                if(hv>=k){
                    pf("%d\n",i+1);
                    d = 0;
                    break;
                }
            }
            //cout << hv << endl;
            if(d){
                pf("-1\n");
            }

        }


return 0;
}
