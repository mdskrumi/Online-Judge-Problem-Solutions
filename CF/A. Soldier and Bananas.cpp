#include<bits/stdc++.h>
using namespace std;
bool prime(int a);
int main(){

            int k , n , w , hm , fm;

            while(cin >> k >> n >> w){
                hm = 0;
                for(int i = 1 ; i <= w ;i++){
                    hm = hm + (k*i);
                }
               // cout << hm << "  " << n << endl;
                    if(hm > n){
                        fm = hm - n;
                    }
                    else{
                        fm = 0;
                    }
                cout << fm <<endl;

            }
return 0;
}


