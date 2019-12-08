#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , even = 0 , odd = 0 , nth , ans1 , ans2;

    cin >> n;

    for(int i = 0 ; i < n ; i++){
        cin >> nth;
        if(nth % 2 == 0){
                even++;
                ans1 = i+1;
        }
        else if(nth % 2 == 1){
            odd++;
            ans2 = i+1;
        }
   }
   if(even == 1){
    cout << ans1 <<endl;
   }
   else{
    cout << ans2 <<endl;
   }


return 0;
}
