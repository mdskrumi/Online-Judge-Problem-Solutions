#include<bits/stdc++.h>
using namespace std;
int main(){

            int a , b , digits[5] , i , yes , ans;
            while(cin >> a >> b){
                ans = 0;
                for(a; a <= b ; a++){
                    int temp = a;
                    i = 0;
                    yes = 1;
                    while(temp!=0){
                        digits[i] = temp % 10;
                        temp/=10;
                        i++;
                    }
             for(int x = 0; x < i;x++){
                for(int y = x+1 ; y < i ; y++){
                    if(digits[x] == digits[y]){
                        yes = 0;
                        break;
                    }
                }
             } if(yes == 1){
                ans++;
             }
                }
                cout << ans << endl;
            }

return 0;
}
