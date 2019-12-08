#include <bits/stdc++.h>
using namespace std;
int main(){
            int n , k , ans;
            while(cin >> n >> k){
                    ans = 0;
                for(int i = 1 ; i <=n ; i++){
                    ans += (i*5);
                    if((ans+k)==240){
                        cout << i <<endl;
                        break;
                    }
                    else if(ans+k>240){
                        cout <<(i-1) <<endl;
                        break;
                    }else if(i==n){
                        cout << n <<endl;
                    }

                }
            }
return 0;
}
