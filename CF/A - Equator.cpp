#include<bits/stdc++.h>,
#define sf scanf
#define pf printf
#define pb push_back
#define mp make_pair
#define DOS 10000000000
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;
/*-----------------------------------FUNCTIONS-----------------------------------------*/
/*-----------------------------------Variables-----------------------------------------*/

int main(){

    int n;
    sf("%d",&n);
    long long arr[n];
    long long pbs = 0;
    for(int i = 0 ; i < n ; i++){
        int x;
        sf("%d",&x);
        pbs+=(long long)x;
        arr[i]=pbs;
    }
    for(int i = 0 ; i < n ; i++){
        if(arr[i]>=ceil(arr[n-1]/2)){
            pf("%d\n",i+1);
            break;
        }
    }
return 0;
}
