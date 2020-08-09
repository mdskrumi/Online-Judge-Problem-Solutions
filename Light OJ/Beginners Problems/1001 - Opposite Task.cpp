#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define pb push_back
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;
int main(){
        int t, n;
        sf("%d",&t);
        while(t--){
            sf("%d",&n);
            if(n>=10){
                pf("10 %d\n",n-10);
            }
            else{
                pf("0 %d\n",n);
            }
        }


return 0;
}
