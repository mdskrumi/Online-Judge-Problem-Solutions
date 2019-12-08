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
    int n ;
    cin >> n;
    int ans = 0;

    for(int i = 1 ; i <= n/2 ; i++){
        int rem = n-i;
        if(rem%i==0)ans++;
    }
    cout << ans <<endl;
return 0;
}
