#include<bits/stdc++.h>
using namespace std;
#define K 10000
void makeprimes();
int primes[K];
int main(){
            makeprimes();
            int n , sum , ans;
            while(cin >> n && n!=0){
                ans = 0;
                for(int i = 2 ; i <= n ; i++){
                    sum = 0 ;
                    if(primes[i]==1){
                        for(int j = i; j <= n ; j++){
                            if(primes[j]==1){
                            sum += j;
                            }
                            if(sum == n){
                                ans++;
                                break;
                            }
                            if(sum > n){
                                break;
                            }
                        }
                    }
                }
                cout << ans << endl;
            }


return 0;
}

void makeprimes(){
    for(int i = 0 ; i <= K ; i++){
        primes[i] = 1;
    }
    primes[0] = primes[1] = 0;

    for(int i = 2 ; i <= sqrt(K) ; i++){
        if(primes[i] == 1){
        for(int j = 2 ; j * i <= 10000; j++){
            primes[i*j] = 0;
        }
    }
    }
}
