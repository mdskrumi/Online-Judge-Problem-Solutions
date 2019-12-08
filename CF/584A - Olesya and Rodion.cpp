#include <bits/stdc++.h>
using namespace std;
int main(){

     int n , t;

     cin >> n >> t;

     if(t<=9){
        for(int i = 0 ; i < n ; i++){
            cout << t;
        }
     }
     else if(t==10 && n!=1){
        for(int i = 0 ; i < (n-1); i++){
            cout << 5;
        }   cout << 0;
     }else{
        cout << -1;
     }
        cout << endl;

return 0;
}


