#include<bits/stdc++.h>,
#define sf scanf
#define pf printf
#define pb push_back
#define mp make_pair
#define DOS 10000000000
#define Taking freopen("input.txt" , "r" , stdin);
#define Making freopen("output.txt" , "w" , stdout);
#include<ctype.h>
#include<string.h>
using namespace std;

/*-----------------------------------VARIABLES-----------------------------------------*/
/*-----------------------------------FUNCTIONS-----------------------------------------*/
int main(){
    vector<int>v;
    int n , s;
    sf("%d%d",&n,&s);
    v.pb(-s-1);
    s*=2;
    for(int i = 0 ; i < n ; i++){
        int h , m ;
        sf("%d%d",&h,&m);
        v.pb(h*60 + m);
    }
    v.pb(v[n-1]+200);

    for(int i = 1 ; i < v.size() ; i++){
        //cout << "I : " << i << " : " << v[i] - (v[i-1]+1) <<endl;
        if(v[i] - (v[i-1]+1) > s ){
            int ans = v[i-1]+1 + s/2;
            pf("%d %d",ans/60,ans%60);
            return 0;
        }
    }
return 0;
}
