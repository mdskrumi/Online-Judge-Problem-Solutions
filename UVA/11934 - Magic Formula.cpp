#include<bits/stdc++.h>
using namespace std;
long long mot(int x , int y , int z , int k);
int main(){

    int a , b ,c , l , ans;
    long long value , div;

    while(cin >> a >> b >> c >> div >> l && (a!=0 || b !=0 || c != 0 || l != 0 || div !=0)){
            ans = 0;
            for(int i = 0 ; i <= l ;i++){
                value = mot(a , b ,c , i);
                if(value % div == 0){
                    ans++;
                }
            }
    cout << ans << endl;

    }

return 0;
}
long long mot(int x , int y , int z , int k){
    long long func = (x*k*k) + (y * k) + z;
    return func;
}
