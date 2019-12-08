#include <bits/stdc++.h>
using namespace std;
int main(){

    long long x,y,n , c , r , ans;
    cin >> x>>y>>n;

    c = x/n;
    r = y/n;
    if(x%n)c++;
    if(y%n)r++;
    ans = r*c;

    cout << ans <<endl;


return 0;
}
