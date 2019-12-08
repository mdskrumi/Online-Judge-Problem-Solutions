#include<bits/stdc++.h>
using namespace std;
int main(){

        long long a , b , ans ,temp ;
        while(cin >> a >> b && ( a !=0 || b != 0)){
                if(a<b){
                    temp = a;
                    a = b;
                    b = temp;
                }
            long long rim1 =0, rim2=0;
            ans = 0;
            while(1){
                    if(a==0 && b == 0){
                        break;
                    }
                if(a>0){
                    rim1 += a % 10;
                }
                else{
                    rim1 = 0;
                }

                if(b>0){
                rim2 += b % 10;
                }
                else{
                    rim2 = 0;
                }
                if((rim1+rim2)>=10){
                    ans++;
                    rim1 = 1;
                    rim2 = 0;
                }
                else{
                    rim1 = 0;
                    rim2 = 0;
                }
                a/=10;
                b/=10;

            }
            if(ans!=0){
                    if(ans==1){
                        cout << ans <<" carry operation."<< endl;
                    }
                    else{
                        cout << ans <<" carry operations."<< endl;
                    }
            }
            else{
                cout << "No carry operation." << endl;
            }
        }

return 0;
}
