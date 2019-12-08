#include<bits/stdc++.h>
using namespace std;
int main(){

    int t , n , m , ans , i = 1;
    cin>>t;
    while(t-->0){
        cin>> n >> m;
        ans = 0;
        i=1;
        while(n>=m){
            ans += n / m;
            n = (n/m)+(n%m);
        }
        if(n==1){
        cout << ans << endl;
        }
        else{
            cout << "cannot do this" <<endl;
        }
    }
return 0;
}
