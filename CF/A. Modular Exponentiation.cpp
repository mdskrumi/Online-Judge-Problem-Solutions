#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define pb push_back
#define mp make_pair
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
using namespace std;
/*-----------------------------------FUNCTIONS-----------------------------------------*/
void solve();
void clean();
/*-----------------------------------Variables-----------------------------------------*/

int main(){
       // Taking;Making;
        long long n , m;
        while(sf("%lld %lld",&n,&m)!=EOF){
            if(n<=27){
                long long ans = (m % (long long)pow(2,n));
                cout << ans<<endl;
            }
            else{
                cout << m <<endl;
            }
        }
return 0;
}

