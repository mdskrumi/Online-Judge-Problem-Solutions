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
    int n , k ;
    long long ans = 0;
    sf("%d%d",&n,&k);
    int lec[n];
    int awak[n];
    for(int i = 0 ; i < n ; i++){
        sf("%d",&lec[i]);
    }
    for(int i = 0 ; i < n ; i++){
        sf("%d",&awak[i]);
        if(awak[i]==1){
            ans+=(long long)lec[i];
            lec[i]=0;
        }
    }
  //  pf("%lld\n",ans);
    long long mustadd = 0, minn = 0;
    for(int i = 0 ; i < k ; i++){
        minn+=lec[i];
    }
    mustadd = minn;
   // cout << "MIN " << minn <<endl;
    for(int i = 0 , j = k ; j < n ; i++ , j++){
        minn = minn-lec[i]+lec[j];
        mustadd = max ( mustadd , minn);
    //cout << "MIN " << mustadd <<endl;
    }
    ans+=mustadd;
    pf("%lld\n",ans);

return 0;
}
